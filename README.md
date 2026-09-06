# Personal Safety Device for Women

> **A collaborative M.E. Embedded Systems project exploring sensor-based monitoring, IoT connectivity, wireless communication, and edge intelligence for a safety-oriented embedded application.**

---

## 📌 Project at a Glance

| Category                    | Details                                     |
| --------------------------- | ------------------------------------------- |
| **Project Type**            | Collaborative M.E. Embedded Systems Project |
| **Domain**                  | Embedded Systems & IoT                      |
| **Primary Platforms**       | ESP32 / ESP32-CAM                           |
| **Sensing**                 | MPU6050, GPS                                |
| **Communication**           | GSM, Wi-Fi                                  |
| **Wireless Services**       | SMS, Voice Call, Telegram                   |
| **Edge Intelligence**       | TinyML / Voice Recognition                  |
| **Development Environment** | Arduino IDE                                 |
| **Programming**             | Embedded C/C++                              |
| **My Role**                 | Contributing Team Member                    |

---

## 🔬 Project Overview

The **Personal Safety Device for Women** was developed as a collaborative Master's-level project in Embedded Systems.

The project explores how **embedded sensing, wireless communication, IoT connectivity, location tracking, and edge intelligence** can be integrated into a compact safety-oriented system.

The overall system incorporates an ESP32-based embedded platform together with sensors, GPS/GSM communication, Wi-Fi connectivity, camera functionality, and TinyML-based voice recognition.

**Important:** This was a **collaborative project**, and I was a contributing team member rather than the primary developer. My contribution focused on **technical documentation, sensor-output verification, GPS/GSM integration testing, and supporting system-level testing and integration activities**.

---

# 🎯 Project Objective

The project aimed to explore an embedded IoT architecture capable of responding to predefined emergency-related events through:

* Sensor-based event detection
* Location acquisition
* GSM-based communication
* Wi-Fi connectivity
* Camera-based image capture
* Voice-triggered assistance
* Remote notification through IoT services

The project provided practical exposure to the integration of multiple embedded hardware and communication technologies within a single system.

---

# 🧩 System Architecture

The overall system can be understood through the following engineering flow:

**Sensing → Embedded Processing → Event Detection → Communication → IoT Connectivity → User Alert**

The major functional components include:

1. **Sensor & Emergency Detection**
2. **GPS/GSM Communication**
3. **Voice Recognition using TinyML**
4. **ESP32-CAM & Wi-Fi Connectivity**
5. **Remote Alert and Notification**

---

## 🏗️ System Block Diagram

<p align="center">
  <img src="Images/Block_diagram.png" width="600">
</p>

---

# ⚙️ Technical Modules

## 1. GPS, GSM & Sensor Module

The embedded system incorporates:

* **MPU6050** for motion sensing
* **NEO-6M GPS** for location acquisition
* **SIM800L GSM** module for communication
* Emergency and safety-status inputs

The project architecture uses sensor information to identify predefined events and initiate communication mechanisms such as SMS and voice calls.

My involvement in this area included **verifying sensor data outputs and assisting with GPS/GSM integration testing**.

---

## 2. TinyML-Based Voice Recognition

The project incorporates **TinyML-based voice recognition** using:

* Edge Impulse
* Embedded processing
* Voice command recognition
* `"HELP"` as the emergency voice command

This demonstrates the use of **edge-level intelligence** within an embedded IoT application, where voice recognition can be incorporated into the device rather than relying entirely on external processing.

> **Note:** I do not claim sole development or ownership of the TinyML model. It is presented here as part of the overall collaborative project.

---

## 3. ESP32-CAM & Wi-Fi Module

The system also incorporates an **ESP32-CAM** for:

* Image capture
* Wi-Fi connectivity
* SOS-related communication
* Remote image transmission through Telegram

This component demonstrates the integration of **embedded vision, wireless connectivity, and IoT-based communication**.

---

# 🔌 Communication Interfaces

One of the technically important aspects of the project is the interaction between different embedded components and communication technologies.

| Interface / Technology | Application                                       |
| ---------------------- | ------------------------------------------------- |
| **UART**               | Serial communication with modules such as GPS/GSM |
| **I²C**                | Communication with the MPU6050 sensor             |
| **GSM**                | SMS and voice-call communication                  |
| **Wi-Fi**              | IoT connectivity and remote communication         |
| **GPS**                | Location acquisition                              |
| **Telegram**           | Remote notification / image communication         |

This combination provided practical exposure to **embedded communication interfaces and connected-device architecture**.

---

# 🧠 Embedded & IoT Concepts

The project provided exposure to several important concepts relevant to embedded and IoT engineering:

### Embedded Systems

* Microcontroller-based system design
* Sensor interfacing
* Peripheral communication
* Hardware–software integration
* Event-driven embedded operation

### IoT

* Wireless connectivity
* Remote notification
* Connected embedded devices
* Cloud/service-based communication
* Device-to-user communication

### Edge Intelligence

* TinyML
* Embedded voice recognition
* Local event detection
* Edge-level processing

### Communication Systems

* UART
* I²C
* GSM communication
* GPS communication
* Wi-Fi networking

---

# 👩‍💻 My Technical Contribution

This section intentionally distinguishes **my contribution** from the overall project development.

I was a **contributing team member** in this collaborative Master's project.

My involvement included:

* Technical documentation of the project
* Verification of sensor data outputs
* Assistance with GPS integration testing
* Assistance with GSM integration testing
* Supporting system-level integration activities
* Supporting testing and documentation
* Working with the project team during hardware/software integration

### Contribution Scope

I **do not claim sole ownership, primary development, or independent implementation of the complete system**.

The overall project design and primary development were led by another team member. My role was focused on the contribution areas described above.

---

# 🛠️ Skills Demonstrated

Through my contribution and involvement with the project, I gained practical exposure to:

**Embedded Systems**
**IoT**
**ESP32**
**ESP32-CAM**
**Embedded C/C++**
**Arduino IDE**
**Sensor Interfacing**
**MPU6050**
**GPS**
**GSM**
**UART**
**I²C**
**Wi-Fi**
**Hardware–Software Integration**
**System Testing**
**Debugging & Verification**
**TinyML / Edge AI**

---

# 🖥️ Hardware & Technologies

### Hardware

* ESP32
* ESP32-CAM
* MPU6050
* NEO-6M GPS
* SIM800L GSM
* PDM Microphone

### Software & Platforms

* Arduino IDE
* Embedded C/C++
* Edge Impulse
* Telegram Bot API

---

# 📐 Circuit Design

<p align="center">
  <img src="Images/Circuit_diagram.png" width="600">
</p>

---

# 🔄 System Flow

<p align="center">
  <img src="Images/Flowchart.png" width="600">
</p>

---

# 📸 Functional Demonstration

The repository contains visual documentation of the project's different functional components.

## Emergency Call / Alert

<p align="center">
  <img src="Images/Call_Alert.png" width="450">
</p>

## Captured Image

<p align="center">
  <img src="Images/Captured_Image.png" width="450">
</p>

## GPS Location

<p align="center">
  <img src="Images/GPS_Location.png" width="450">
</p>

## Safety Message

<p align="center">
  <img src="Images/SafeMessage.png" width="450">
</p>

## Safety Status

<p align="center">
  <img src="Images/Safenow.png" width="450">
</p>

## Project Result

<p align="center">
  <img src="Images/Result.png" width="500">
</p>

---

# 🧪 System Integration Perspective

A major engineering aspect of this project was the integration of multiple independent embedded components into a connected system.

The project brings together:

**Sensors**

↓

**Embedded Controller**

↓

**Event Detection**

↓

**GPS / GSM / Wi-Fi Communication**

↓

**Remote Notification**

This type of integration highlights the importance of **hardware–software co-design, communication interfaces, system verification, and reliable interaction between embedded subsystems**.

---

# 📚 Source Code & Documentation

The repository contains the implementation appendices associated with the collaborative project:

```text
Code/
├── Appendix_A.ino
├── Appendix_B.ino
└── Appendix_C.ino
```

The complete project report is also included:

```text
ProjectReport.pdf
```

The source code and report are retained as part of the project's academic documentation.

---

# 🔬 Research Perspective

Although this project was primarily an academic engineering project rather than an independent research project, it contributed to my practical exposure to areas that are relevant to my broader research interests.

The project connects several areas of embedded research:

**Embedded Systems**
↓
**Sensor Integration**
↓
**IoT Connectivity**
↓
**Wireless Communication**
↓
**Edge Intelligence**
↓
**Hardware–Software Integration**

These areas are closely related to my broader interests in:

* Embedded Systems
* IoT
* Edge AI
* Real-Time Systems
* Communication Systems
* Hardware–Software Co-Design
* Intelligent Embedded Systems

The experience particularly strengthened my interest in understanding how **resource-constrained embedded platforms can sense, process, communicate, and respond intelligently in connected environments**.

---

# 🎓 Academic & PhD Relevance

This project is included in my portfolio not as a claim of independent project ownership, but as evidence of my exposure to **system-level embedded engineering and IoT technologies**.

My contribution allowed me to work around:

* Embedded sensor interfaces
* GPS/GSM communication
* IoT connectivity
* Hardware/software integration
* System testing and verification
* Documentation of an integrated embedded system

These experiences complement my broader academic interests in **Embedded Systems, IoT, Edge AI, Real-Time Systems, and intelligent connected devices**.

---

# ⚠️ Scope & Limitations

* This was a **collaborative Master's academic project**.
* I was a **contributing team member**, not the primary developer.
* The README does not attribute the complete system design or implementation to me.
* My stated contribution is limited to the activities described in the **My Technical Contribution** section.
* The project is presented as an **academic embedded/IoT prototype**.
* It should not be interpreted as a production-ready or clinically validated safety system.
* Technical capabilities described here correspond to the project's documented architecture and implementation.

---

# 📂 Repository Structure

```text
Personal-safety-device-for-women/
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

# 👩‍🔬 About My Role

**Role:** Contributing Team Member
**Program:** M.E. Embedded Systems
**Project Area:** Embedded Systems & IoT

My contribution to this collaborative project focused on **documentation, sensor-output verification, GPS/GSM integration testing, and system-level testing support**.

I include this project in my portfolio to demonstrate my practical exposure to **embedded systems, IoT communication, sensor integration, and hardware–software integration** while maintaining clear attribution of the overall project work.

---

# 🚀 Technical Interests

My broader technical interests include:

**Embedded Systems • IoT • Edge AI • TinyML • Real-Time Systems • Communication Systems • Hardware–Software Co-Design • Intelligent Connected Devices**

---

## 📌 Project Summary

> **A collaborative M.E. Embedded Systems project integrating sensing, wireless communication, IoT connectivity, and edge intelligence. My contribution focused on technical documentation, sensor-output verification, GPS/GSM integration testing, and system-level testing support.**

---

### Repository Contents

📁 **Source Code** — Embedded implementation appendices
📁 **Images** — Architecture, circuit, flowchart and functional documentation
📄 **Project Report** — Complete academic project documentation
