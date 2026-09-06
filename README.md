# Personal Safety Device for Women

## 📌 Overview

This repository documents a **collaborative M.E. Embedded Systems project** focused on the development of a personal safety device integrating **embedded systems, IoT communication, sensing, location tracking, and wireless alert mechanisms**.

The project combines an **ESP32-S3, ESP32-CAM, MPU6050, GPS, GSM, microphone, Wi-Fi, and TinyML-based voice recognition** to explore multiple approaches for detecting and communicating emergency situations.

> **Project Type:** Collaborative M.E. Embedded Systems Project
> **Role:** Contributing Team Member
> **Primary Project Development:** Led by a colleague

---

## 🤝 My Contribution

I was a **contributing team member** in this project and do not claim sole ownership of the overall design or implementation.

My involvement included:

* Contributing to the technical documentation of the project.
* Verifying sensor-data outputs during development and testing.
* Assisting with integration testing of the **GPS and GSM modules**.
* Working with the team during integration of the embedded communication components.
* Supporting the testing and documentation of the developed system.

The overall project design and primary development were led by my colleague. This repository is therefore presented as evidence of my **collaborative engineering experience and practical exposure to embedded and IoT systems**.

---

## 🎯 Project Objective

The project aimed to develop a multi-functional embedded safety system capable of providing different mechanisms for emergency detection, location identification, and communication.

The system explored:

* Emergency triggering
* Fall detection
* GPS-based location tracking
* GSM-based calling and SMS
* Voice-based emergency keyword detection
* Wi-Fi communication
* Camera-based image capture
* Telegram-based alert communication
* Safety-status notification

---

## 🛠️ Technologies & Components

| Category                | Technology / Component |
| ----------------------- | ---------------------- |
| Embedded Platforms      | ESP32-S3, ESP32-CAM    |
| Motion Sensor           | MPU6050                |
| GPS                     | NEO-6M                 |
| GSM                     | SIM800L                |
| Audio Input             | PDM Microphone         |
| Wireless Communication  | Wi-Fi                  |
| Messaging               | Telegram Bot API       |
| TinyML                  | Edge Impulse           |
| Development Environment | Arduino IDE            |
| Programming             | Embedded C++           |

---

## ⚙️ System Architecture

The project integrates multiple embedded modules, each responsible for a specific sensing, processing, or communication function.

### 1. GPS & GSM Module

The GPS and GSM subsystem combines the **MPU6050, NEO-6M GPS, and SIM800L GSM module**.

The project explores:

* Motion-based fall detection
* GPS location acquisition
* Emergency calling
* SMS-based alerts
* Safety-status messaging

The corresponding implementation is included in:

`Code/Appendix_A.ino`

---

### 2. TinyML Voice Recognition

The project also incorporates **TinyML-based voice recognition** using **Edge Impulse**.

The voice-recognition module is designed to recognize the emergency keyword:

**"HELP"**

The corresponding implementation is included in:

`Code/Appendix_B.ino`

This component provided exposure to the integration of **machine-learning inference with embedded systems**.

---

### 3. ESP32-CAM & Wi-Fi Module

The **ESP32-CAM** is used for image capture and wireless communication.

The project includes functionality for:

* Image capture
* Wi-Fi communication
* SOS alert communication
* Sending captured images to a registered user through Telegram

The corresponding implementation is included in:

`Code/Appendix_C.ino`

---

## 🔄 Overall Communication Flow

```text
Emergency Event
       │
       ▼
Embedded System
       │
       ├──────────► GPS / GSM ──────► Call / SMS + Location
       │
       ├──────────► TinyML ──────────► "HELP" Detection
       │
       └──────────► ESP32-CAM ───────► Image + Alert
                                      │
                                      ▼
                                   Telegram
                                      │
                                      ▼
                               Registered User
```

This architecture demonstrates the integration of **embedded sensing, processing, and communication technologies** within a single collaborative system.

---

## 📊 Demonstrated Functions

The project documentation includes demonstrations of:

* Emergency call alert
* GPS location tracking
* Captured image transmission
* Safe-message notification
* Safety-status notification

The corresponding diagrams, screenshots, and project results are preserved in the `Images/` directory.

---

## 🖼️ Project Documentation

### Block Diagram

![Block Diagram](Images/Block_diagram.png)

### Circuit Diagram

![Circuit Diagram](Images/Circuit_diagram.png)

### Flowchart

![Flowchart](Images/Flowchart.png)

### Emergency Call Alert

![Call Alert](Images/Call_Alert.png)

### Captured Image Transmission

![Captured Image](Images/Captured_Image.png)

### GPS Location Tracking

![GPS Location](Images/GPS_Location.png)

### Safe Message

![Safe Message](Images/SafeMessage.png)

### Safety Status

![Safety Status](Images/Safenow.png)

### Project Result

![Project Result](Images/Result.png)

---

## 💻 Source Code

The repository contains three Arduino source files corresponding to the major functional modules:

```text
Code/
├── Appendix_A.ino
├── Appendix_B.ino
└── Appendix_C.ino
```

These files document the embedded implementations associated with the project's GPS/GSM, voice-recognition, and ESP32-CAM/Wi-Fi components.

---

## 📚 Project Documentation

The complete project report is available in:

`ProjectReport.pdf`

The report contains the detailed project description, system architecture, implementation, results, and supporting references.

---

## 🧠 Technical Skills Developed

Through my contribution to this project, I gained practical exposure to:

* **Embedded Systems**
* **ESP32 development**
* **IoT communication**
* **GPS interfacing**
* **GSM communication**
* **Sensor interfacing**
* **UART-based communication**
* **I2C-based communication**
* **Wi-Fi communication**
* **Camera interfacing**
* **TinyML / Edge AI**
* **Arduino IDE**
* **Embedded C/C++**
* **Hardware–software integration**
* **System integration and testing**

The project particularly strengthened my understanding of how different embedded modules can be integrated to build a larger IoT-oriented system.

---

## 🔬 Research & Technical Relevance

Although this was a collaborative academic project, it provided valuable exposure to the design and integration challenges involved in **intelligent embedded and IoT systems**.

The project connects several areas of interest:

**Embedded Systems → IoT → Edge Intelligence → Communication Systems → Hardware–Software Integration**

The inclusion of TinyML-based voice recognition also provided an introduction to bringing machine-learning capabilities closer to an embedded device.

This experience contributes to my broader technical interests in:

**Embedded Systems • Edge AI • IoT • Real-Time Systems • Communication Systems • Hardware–Software Co-Design**

---

## ⚠️ Scope & Authorship

This repository documents a **collaborative academic project**.

I do not claim sole authorship of the system. My role was as a **contributing team member**, with involvement in documentation, sensor-data verification, GPS/GSM integration testing, and collaborative system integration.

The repository is intended to demonstrate my **team-based engineering experience and technical exposure**, rather than present the complete system as my individual work.

---

## 📂 Repository Structure

```text
Personal-Safety-Device-for-Women/
│
├── Code/
│   ├── Appendix_A.ino
│   ├── Appendix_B.ino
│   └── Appendix_C.ino
│
├── Images/
│   ├── Block_diagram.png
│   ├── Call_Alert.png
│   ├── Captured_Image.png
│   ├── Circuit_diagram.png
│   ├── Flowchart.png
│   ├── GPS_Location.png
│   ├── Result.png
│   ├── SafeMessage.png
│   └── Safenow.png
│
├── ProjectReport.pdf
└── README.md
```

---

## 👩‍💻 Author

**Khatija Mahveen**

M.E. Embedded Systems
Electronics & Communication Engineering

**Technical Interests:**
Embedded Systems • Edge AI • IoT • Real-Time Systems • Communication Systems • Hardware–Software Co-Design

---

## 📌 Project Summary

**Personal Safety Device for Women** is a collaborative M.E. Embedded Systems project integrating **embedded sensing, GPS/GSM communication, TinyML-based voice recognition, Wi-Fi, camera-based image capture, and IoT communication**.

My contribution to the project provided practical experience in **sensor-data verification, GPS/GSM integration testing, technical documentation, and collaborative embedded-system development**.

The project strengthened my understanding of how multiple embedded and communication technologies can be integrated into a single IoT-oriented system.
