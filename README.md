# Personal Safety Device for Women

## 📌 Overview
This repository documents a collaborative Master's project focusing on the design and development of a **Personal Safety Device for Women**. The system is designed to provide immediate assistance and alerting mechanisms during emergencies, leveraging embedded systems, IoT, and Edge AI concepts to ensure user safety.

## 🛠️ Technologies & Tools Used
- **Microcontroller:** ESP32-S3 & ESP32-CAM
- **Sensors:** MPU6050 (Accelerometer), GPS (NEO-6M), PDM Microphone
- **Communication:** GSM (SIM800L), Wi-Fi, Telegram Bot API
- **AI/ML:** Edge Impulse (TinyML) for Voice Recognition ("HELP" Detection)
- **Software:** Arduino IDE, Embedded C++

## ⚙️ System Architecture
The device integrates multiple modules for a comprehensive safety solution:
1. **GPS & GSM Module (Appendix A):** Uses the MPU6050 for fall detection and GPS for location tracking. Automatically sends SMS and makes an emergency call.
2. **Voice Recognition Module (Appendix B):** Uses TinyML (Edge Impulse) to detect the spoken keyword "HELP" and trigger an alert.
3. **Wi-Fi & Camera Module (Appendix C):** Uses an ESP32-CAM to capture and send real-time images and SOS alerts to a registered user via Telegram.

## 📂 Repository Structure
```text
Personal-Safety-Device-for-Women/
│
├── 📁 Code/               # Contains the 3 Appendix Code Files
│   ├── Appendix_A_GSM_GPS.ino
│   ├── Appendix_B_Voice_Recognition.ino
│   └── Appendix_C_WiFi_Camera.ino
├── 📄 README.md           # Project documentation
└── 📄 ProjectReport.pdf   # (If available)
