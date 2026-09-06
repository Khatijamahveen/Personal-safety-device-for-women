# Personal Safety Device for Women

## 📌 Overview
This repository documents a collaborative Master's project focusing on the design and development of a **Personal Safety Device for Women**. The system is designed to provide immediate assistance and alerting mechanisms during emergencies, leveraging embedded systems and IoT technologies.

## 🤝 Authorship & Honesty Statement
**I, Khatija Mahveen, was a contributing team member on this project.** The core design, primary development, and thesis were led by my colleague. My contribution involved [Insert exactly what you helped with here - e.g., testing the sensor modules, reviewing the code, debugging the connections, etc.].

*I have uploaded this repository to showcase my ability to work in a collaborative research team, but I do not claim sole ownership of this project. Full credit for the overall design and implementation goes to the primary author.*

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

## 📊 Project Results

**Figure 1: Block Diagram**
<img src="Images/Block_diagram.png" alt="Block Diagram" width="600"/>

<br>

**Figure 2: Circuit Diagram**
<img src="Images/Circuit_diagram.png" alt="Circuit Diagram" width="600"/>

<br>

**Figure 3: Flowchart**
<img src="Images/Flowchart.png" alt="Flowchart" width="600"/>

<br>

**Figure 4: Call Alert System**
<img src="Images/Call_Alert.png" alt="Call Alert" width="600"/>

<br>

**Figure 5: Captured Image Transmission**
<img src="Images/Captured_Image.png" alt="Captured Image" width="600"/>

<br>

**Figure 6: GPS Location Tracking**
<img src="Images/GPS_Location.png" alt="GPS Location" width="600"/>

<br>

**Figure 7: Safe Message Alert**
<img src="Images/SafeMessage.png" alt="Safe Message" width="600"/>

<br>

**Figure 8: Safety Status Notification**
<img src="Images/Safenow.png" alt="Safe Now" width="600"/>

<br>

## 📂 Repository Structure
```text
Personal-Safety-Device-for-Women/
│
├── 📁 Code/               # Contains the 3 Appendix Code Files
│   ├── Appendix_A.ino
│   ├── Appendix_B.ino
│   └── Appendix_C.ino
├── 📁 Images/             # Project results and diagrams
├── 📄 ProjectReport.pdf   # Full project report
└── 📄 README.md           # Project documentation
