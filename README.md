# Personal Safety Device for Women

An IoT-based personal safety system built on ESP32 microcontrollers. The project combines GSM/GPS alerting, voice-activated distress detection, and Wi-Fi camera notifications to help users quickly reach trusted contacts during emergencies.

## Overview

The system is split into three independent modules. Each module can be built and tested on its own, or integrated into a single wearable/portable safety device.

| Module | File | Description |
|--------|------|-------------|
| **Appendix A** | `Appendix_A_GSM_GPS_Emergency_Alert.ino` | Emergency SMS, phone call, GPS location sharing, and fall detection |
| **Appendix B** | `Appendix_B_Voice_Recognition.ino` | ML-based voice recognition to detect the word "HELP" |
| **Appendix C** | `Appendix_C_WiFi_Camera_Telegram.ino` | Live photo capture and Telegram alerts over Wi-Fi |

## Features

### Appendix A — GSM & GPS Emergency Alert
- One-press **emergency button** triggers SMS + automatic phone call
- **Safe button** sends an "I am safe" confirmation SMS
- **GPS location** embedded in emergency SMS with Google Maps link
- **Fall detection** using MPU6050 accelerometer
- Visual feedback via status LEDs

### Appendix B — Voice Recognition
- Continuous listening via onboard PDM microphone (ESP32-S3 Xiao Sense)
- Edge Impulse trained model detects spoken **"HELP"**
- Triggers output pin and onboard LED when confidence exceeds 90%
- Runs real-time audio inference on-device

### Appendix C — Wi-Fi & Camera Alert
- ESP32-CAM captures and sends photos to **Telegram**
- SOS trigger via sensor input or HELP button
- Safe button sends confirmation message
- Automatic Wi-Fi reconnect with visual status LED

---

## Hardware Requirements

### Appendix A
| Component | Purpose |
|-----------|---------|
| ESP32 Dev Board | Main controller |
| SIM800L / GSM module | SMS and voice calls |
| NEO-6M GPS module | Location tracking |
| MPU6050 | Fall detection |
| Emergency button (GPIO 32) | Manual SOS trigger |
| Safe button (GPIO 33) | Safe confirmation |
| LEDs (GPIO 2, 4) | Status indicators |

### Appendix B
| Component | Purpose |
|-----------|---------|
| Seeed XIAO ESP32-S3 Sense | Microcontroller + PDM mic |
| Output pin (D4) | Signal to other modules |
| Onboard LED | Visual alert |

### Appendix C
| Component | Purpose |
|-----------|---------|
| ESP32-CAM (AI-Thinker) | Camera + Wi-Fi |
| PIR / sensor (GPIO 13) | Motion-based SOS trigger |
| HELP button (GPIO 12) | Manual SOS |
| Safe button (GPIO 14) | Safe confirmation |
| Flash LED (GPIO 4) | Status indicator |

---

## Pin Configuration

### Appendix A (ESP32)
```
GSM TX/RX  → GPIO 26 / 27  (UART1)
GPS TX/RX  → GPIO 16 / 17  (UART2)
I2C SDA/SCL → GPIO 21 / 22 (MPU6050)
Emergency  → GPIO 32
Safe       → GPIO 33
LED        → GPIO 2
MSG LED    → GPIO 4
```

### Appendix B (XIAO ESP32-S3)
```
I2S Mic    → GPIO 41 / 42
HELP OUT   → D4
LED        → LED_BUILTIN
```

### Appendix C (ESP32-CAM)
```
Sensor     → GPIO 13
HELP       → GPIO 12
Safe       → GPIO 14
Flash LED  → GPIO 4
Camera     → See pin definitions in sketch
```

---

## Software Setup

### Prerequisites
- [Arduino IDE](https://www.arduino.cc/en/software) (1.8.x or 2.x)
- ESP32 board support (Boards Manager: **esp32 by Espressif**)
- USB drivers for your development board

### Required Libraries

**Appendix A**
- [TinyGPS++](https://github.com/mikalhart/TinyGPSPlus)
- [MPU6050](https://github.com/jrowberg/i2cdevlib) (or compatible fork)

**Appendix B**
- [Edge Impulse Arduino library](https://docs.edgeimpulse.com/docs/run-inferencing/arduino) — export your model as `women_safty_inferencing`
- [I2S](https://github.com/arduino-libraries/ArduinoCore-API) (included with ESP32 core)

**Appendix C**
- Built-in: `WiFi`, `WiFiClientSecure`, `esp_camera`

### Installation

1. Clone this repository:
   ```bash
   git clone https://github.com/YOUR_USERNAME/personal-safety-device-women.git
   cd personal-safety-device-women
   ```

2. Open the desired `.ino` sketch in Arduino IDE.

3. Select the correct board and port:
   - Appendix A → **ESP32 Dev Module**
   - Appendix B → **XIAO ESP32S3**
   - Appendix C → **AI Thinker ESP32-CAM**

4. Update configuration values in the sketch before uploading (see below).

5. Click **Upload**.

---

## Configuration

> **Important:** Do not commit real credentials to GitHub. Use placeholders locally and keep secrets out of version control.

### Appendix A
Edit in `Appendix_A_GSM_GPS_Emergency_Alert.ino`:
```cpp
String phoneNumber = "+91XXXXXXXXXX";  // Emergency contact number
```

### Appendix B
- Place the Edge Impulse export folder (`women_safty_inferencing`) inside your Arduino `libraries` directory.
- Adjust detection threshold if needed:
  ```cpp
  if (pred_index == 0 && pred_value > 0.90)  // 90% confidence
  ```

### Appendix C
Edit in `Appendix_C_WiFi_Camera_Telegram.ino`:
```cpp
const char* ssid     = "YOUR_WIFI_SSID";
const char* password = "YOUR_WIFI_PASSWORD";
String myToken       = "YOUR_TELEGRAM_BOT_TOKEN";
String myChatId      = "YOUR_TELEGRAM_CHAT_ID";
```

**Telegram setup:**
1. Create a bot via [@BotFather](https://telegram.me/BotFather) and copy the token.
2. Get your chat ID via [@chatid_echo_bot](https://telegram.me/chatid_echo_bot).
3. Start a conversation with your bot before testing.

---

## How It Works

```
┌─────────────────┐     ┌──────────────────┐     ┌─────────────────────┐
│  Emergency Btn  │────▶│                  │────▶│  SMS + Call + GPS   │
│  Fall (MPU6050) │     │   Appendix A     │     │  (GSM Module)       │
└─────────────────┘     │   ESP32 + GSM    │     └─────────────────────┘
                          └──────────────────┘
┌─────────────────┐     ┌──────────────────┐     ┌─────────────────────┐
│  Voice "HELP"   │────▶│                  │────▶│  GPIO / LED Signal  │
│  (PDM Mic)      │     │   Appendix B     │     │  (to other modules) │
└─────────────────┘     │   Xiao ESP32-S3  │     └─────────────────────┘
                          └──────────────────┘
┌─────────────────┐     ┌──────────────────┐     ┌─────────────────────┐
│  SOS / HELP Btn │────▶│                  │────▶│  Photo + Message    │
│  PIR Sensor     │     │   Appendix C     │     │  (Telegram Bot)     │
└─────────────────┘     │   ESP32-CAM      │     └─────────────────────┘
                          └──────────────────┘
```

---

## Uploading to GitHub

1. Initialize git in the project folder (if not already):
   ```bash
   cd "Personal Safety device for women"
   git init
   ```

2. Add a `.gitignore` to avoid committing secrets or build artifacts:
   ```
   .DS_Store
   *.bin
   secrets.h
   config.h
   ```

3. Replace any hardcoded WiFi passwords, Telegram tokens, and phone numbers with placeholders before committing.

4. Commit and push:
   ```bash
   git add .
   git commit -m "Add personal safety device firmware (Appendix A, B, C)"
   git branch -M main
   git remote add origin https://github.com/YOUR_USERNAME/personal-safety-device-women.git
   git push -u origin main
   ```

---

## Troubleshooting

| Issue | Possible fix |
|-------|----------------|
| GSM not responding | Check SIM card, antenna, and 3.7V power supply (peak 2A) |
| GPS fix not ready | Wait outdoors with clear sky view; check UART wiring |
| MPU6050 FAIL | Verify I2C wiring (SDA/SCL) and 3.3V power |
| I2S init failed (Appendix B) | Use XIAO ESP32-S3 Sense board; check mic pin config |
| TFLite memory error | Define `EI_CLASSIFIER_ALLOCATION_STATIC` (see sketch comments) |
| Camera init failed | Select ESP32 Wrover module; enable PSRAM in board settings |
| Telegram upload fails | Confirm bot token, chat ID, and Wi-Fi connection |

---

## License

This project is provided for educational and research purposes. Feel free to fork and adapt it for non-commercial safety applications.

## Contributing

Contributions, issues, and feature requests are welcome. Please open an issue or pull request on GitHub.

---

**Stay safe. Build responsibly.**
