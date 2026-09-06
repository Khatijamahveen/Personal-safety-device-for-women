# Personal Safety Device for Women

> **A collaborative M.E. Embedded Systems project integrating sensing, embedded processing, wireless communication, IoT connectivity, and edge intelligence for a safety-oriented application.**

<p align="center">
  <img src="Images/Result.png" width="350">
</p>

---

## 🔎 Project at a Glance

|                         |                                             |
| ----------------------- | ------------------------------------------- |
| **Project Type**        | Collaborative M.E. Embedded Systems Project |
| **Domain**              | Embedded Systems • IoT • Edge Intelligence  |
| **Platform**            | ESP32 / ESP32-CAM                           |
| **Sensors**             | MPU6050 • GPS                               |
| **Communication**       | GSM • Wi-Fi                                 |
| **Embedded Interfaces** | UART • I²C                                  |
| **Edge Intelligence**   | TinyML / Voice Recognition                  |
| **Development**         | Arduino IDE • Embedded C/C++                |
| **My Role**             | Contributing Team Member                    |

---

# 🧠 Overview

The **Personal Safety Device for Women** was developed as a collaborative Master's-level project in Embedded Systems.

The project explores the integration of multiple embedded and IoT technologies into a connected safety-oriented system, combining:

* Sensor-based event detection
* GPS-based location acquisition
* GSM-based communication
* Wi-Fi connectivity
* Camera-based image capture
* Voice-triggered assistance
* Remote IoT notification

The project provided practical exposure to **embedded system integration, communication interfaces, wireless connectivity, sensor interfacing, and edge intelligence**.

> **Academic attribution:** This was a collaborative project. I was a **contributing team member**, rather than the primary developer or sole owner of the complete system. My contribution is explicitly described below.

---

# 🎯 Project Objective

The overall objective was to explore an embedded IoT architecture capable of responding to predefined safety-related events through a combination of:

**Sensing → Processing → Communication → IoT Connectivity → Remote Alert**

The system brings together several independently functioning embedded components into a single integrated application.

---

# 🏗️ System Architecture

<p align="center">
  <img src="Images/Block_diagram.png" width="450">
</p>

The overall architecture can be viewed as five connected layers:

### 1. Sensing Layer

Collects information from embedded sensors and inputs.

### 2. Embedded Processing Layer

Processes sensor/event information on the embedded platform.

### 3. Communication Layer

Uses GPS, GSM, and Wi-Fi technologies for communication and connectivity.

### 4. Edge Intelligence Layer

Incorporates TinyML-based voice recognition for local command detection.

### 5. Application / Alert Layer

Provides notifications and safety-related information through communication services.

---

# ⚙️ Technical Modules

## 01 — GPS & GSM Emergency Communication

The project incorporates:

* **NEO-6M GPS**
* **SIM800L GSM**
* **MPU6050**
* Emergency and safety inputs

The GPS subsystem provides location information, while the GSM subsystem supports communication through **SMS and voice calls**.

The embedded controller coordinates the interaction between sensing, event detection, location information, and communication.

### Embedded concepts

`GPS` • `GSM` • `UART` • `I²C` • `Sensor Interfacing` • `Embedded C/C++`

---

## 02 — TinyML Voice Recognition

The system incorporates **TinyML-based voice recognition** using Edge Impulse.

The documented application includes recognition of the emergency voice command:

> **"HELP"**

This represents an example of **edge intelligence**, where voice-related processing can be incorporated into an embedded device.

### Concepts

`TinyML` • `Edge AI` • `Embedded Intelligence` • `Voice Recognition`

> **Attribution:** I do not claim independent development or ownership of the TinyML model. It is described as part of the collaborative system.

---

## 03 — ESP32-CAM & IoT Connectivity

The project also incorporates an **ESP32-CAM** for:

* Image capture
* Wi-Fi connectivity
* SOS-related communication
* Remote image transmission through Telegram

This demonstrates the combination of **embedded vision, wireless networking, and IoT communication**.

### Concepts

`ESP32-CAM` • `Wi-Fi` • `IoT` • `Embedded Vision` • `Wireless Communication`

---

# 🔌 Communication Interfaces

A key engineering aspect of the project is the interaction between different embedded components and communication technologies.

| Interface / Technology | Role                                       |
| ---------------------- | ------------------------------------------ |
| **UART**               | Serial communication with embedded modules |
| **I²C**                | MPU6050 sensor communication               |
| **GPS**                | Location acquisition                       |
| **GSM**                | SMS and voice communication                |
| **Wi-Fi**              | IoT connectivity                           |
| **Telegram**           | Remote notification / image communication  |

Understanding these interfaces provides a foundation for developing and integrating **multi-peripheral embedded systems**.

---

# 🔄 System-Level Data Flow

```text
┌───────────────────────┐
│ Sensors / User Input  │
└───────────┬───────────┘
            ↓
┌───────────────────────┐
│ Embedded Processing   │
└───────────┬───────────┘
            ↓
┌───────────────────────┐
│ Event / Voice Logic   │
└───────────┬───────────┘
            ↓
┌───────────────────────┐
│ Communication Layer   │
│ GPS • GSM • Wi-Fi     │
└───────────┬───────────┘
            ↓
┌───────────────────────┐
│ Remote Notification   │
│ SMS • Call • Telegram │
└───────────────────────┘
```

This system-level view highlights the interaction between **sensing, computation, communication, and application-level services**.

---

# 📐 Hardware & Circuit Design

<p align="center">
  <img src="Images/Circuit_diagram.png" width="450">
</p>

The circuit documentation illustrates the hardware-level integration required to connect the embedded controller with the sensing and communication modules.

---

# 🔄 System Flow

<p align="center">
  <img src="Images/Flowchart.png" width="450">
</p>

The flowchart represents the overall decision and event-handling sequence documented for the project.

---

# 👩‍💻 My Technical Contribution

## My Role

**Contributing Team Member — M.E. Embedded Systems**

This project was developed collaboratively, with the **primary project development and core design led by another team member**.

My contribution focused on supporting the project through:

### Technical Documentation

* Preparing and organizing technical documentation
* Supporting documentation of the system architecture and implementation

### Sensor Verification

* Verifying sensor data outputs
* Supporting validation of expected sensor behavior during integration

### GPS/GSM Integration

* Assisting with GPS integration testing
* Assisting with GSM integration testing
* Supporting system-level communication verification

### System Integration

* Working with the team during hardware/software integration
* Supporting testing activities across integrated modules

### Important Attribution

I **do not claim sole ownership or primary development of this project**.

The purpose of including this repository in my portfolio is to demonstrate my **practical exposure to embedded systems, IoT technologies, communication interfaces, integration testing, and system-level engineering**.

---

# 🛠️ Skills Demonstrated

### Embedded Systems

* ESP32
* ESP32-CAM
* Embedded C/C++
* Arduino IDE
* Sensor interfacing
* Hardware–software integration
* System testing and verification

### Communication

* UART
* I²C
* GPS
* GSM
* Wi-Fi
* Wireless communication

### IoT & Edge Intelligence

* IoT architectures
* Remote communication
* Telegram-based communication
* TinyML
* Edge AI
* Voice recognition

### Engineering Practices

* System integration
* Sensor-output verification
* Technical documentation
* Hardware/software debugging
* Collaborative development

---

# 🧪 Engineering Concepts Explored

This project provided exposure to the following system-level concepts:

### Sensor → Processor

How physical-world information can be acquired and processed by an embedded controller.

### Processor → Communication

How embedded systems interact with external communication modules through interfaces such as UART and I²C.

### Device → Network

How embedded devices can use GSM and Wi-Fi to communicate beyond the local hardware.

### Edge → Application

How local intelligence such as voice recognition can become part of a connected embedded application.

### Hardware → Software

How multiple hardware components and software modules must operate together to produce a complete system.

---

# 📸 Functional Demonstration

## Emergency Call / Alert

<p align="center">
  <img src="Images/Call_Alert.png" width="320">
</p>

## Captured Image

<p align="center">
  <img src="Images/Captured_Image.png" width="320">
</p>

## GPS Location

<p align="center">
  <img src="Images/GPS_Location.png" width="320">
</p>

## Safety Message

<p align="center">
  <img src="Images/SafeMessage.png" width="320">
</p>

## Safety Status

<p align="center">
  <img src="Images/Safenow.png" width="320">
</p>

## Project Result

<p align="center">
  <img src="Images/Result.png" width="350">
</p>

---

# 💻 Source Code & Appendix Overview

The source code is organized into three appendices accompanying the project documentation.

## Appendix A — GSM & GPS-Based Emergency Alert System

**File:** `Code/Appendix_A.ino`

Appendix A documents the **GSM and GPS-based emergency alert subsystem**.

The implementation includes interaction with:

* SIM800L GSM
* NEO-6M GPS
* MPU6050
* Emergency/safety inputs
* SMS functionality
* Voice-call functionality
* GPS-based location information

The implementation demonstrates an embedded communication chain in which sensor/event information can lead to **location-aware GSM communication**.

### Technical focus

`ESP32` • `Embedded C++` • `GPS` • `GSM` • `UART` • `I²C` • `Sensor Integration`

**My involvement:** sensor-output verification and assistance with GPS/GSM integration testing.

---

## Appendix B — Embedded System Implementation

**File:** `Code/Appendix_B.ino`

Appendix B contains an additional implementation component of the collaborative embedded-system project.

It is retained as part of the project's complete source-code documentation and should be interpreted together with the project report rather than as an independently authored project by me.

### Technical focus

`Embedded Systems` • `ESP32` • `Embedded C/C++` • `Hardware Integration`

---

## Appendix C — Embedded System Implementation

**File:** `Code/Appendix_C.ino`

Appendix C contains another implementation component associated with the overall collaborative project.

Together, Appendices A, B, and C provide the source-code documentation accompanying the academic project.

### Technical focus

`Embedded Systems` • `ESP32` • `IoT` • `Hardware–Software Integration`

> **Note:** The appendices are retained as project documentation. My portfolio attribution remains limited to the contribution areas explicitly described above.

---

# 🔬 Research Perspective

This project was primarily an **academic engineering project**, rather than an independent research project.

However, my exposure to the system provides a useful foundation for my broader technical interests:

```text
Embedded Systems
       ↓
Sensor Integration
       ↓
Communication Interfaces
       ↓
IoT Connectivity
       ↓
Edge Intelligence
       ↓
Intelligent Connected Systems
```

The project strengthened my interest in understanding how **resource-constrained embedded platforms can sense, process, communicate, and respond intelligently within connected environments**.

This connects with my broader interests in:

* **Embedded Systems**
* **IoT**
* **Edge AI**
* **TinyML**
* **Real-Time Systems**
* **Communication Systems**
* **Hardware–Software Co-Design**
* **Intelligent Embedded Systems**

---

# 🎓 PhD / Research Relevance

The value of this project in my portfolio is not based on claiming complete project ownership.

Instead, it demonstrates practical exposure to:

* Embedded hardware
* Sensor interfaces
* Communication protocols
* IoT connectivity
* GPS/GSM systems
* Edge intelligence
* Hardware–software integration
* System testing
* Technical documentation

These experiences contribute to my broader preparation for research in **embedded intelligence, connected systems, IoT, edge computing, and real-time intelligent devices**.

---

# ⚠️ Scope & Limitations

* This was a **collaborative Master's academic project**.
* I was a **contributing team member**, not the primary developer.
* The complete system is therefore **not presented as my independent work**.
* My contribution is restricted to the activities described in the **My Technical Contribution** section.
* The repository documents an **academic embedded/IoT prototype**.
* It should not be interpreted as a production-ready or clinically validated safety system.
* Project capabilities are described according to the documented implementation and project materials.

---

# 📚 Project Documentation

The repository includes the complete academic project report:

```text
ProjectReport.pdf
```

The report provides the detailed project documentation accompanying the implementation.

---

# 📁 Repository Structure

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

# 👩‍🔬 My Technical Profile

This project represents one part of my hands-on exposure to:

**Embedded Systems | IoT | Edge AI | Communication Systems | Sensor Integration | Hardware–Software Integration**

My broader technical direction is toward developing **intelligent, connected, and resource-efficient embedded systems**.

---

## 📌 Project Summary

> **A collaborative M.E. Embedded Systems project integrating sensors, GPS/GSM communication, Wi-Fi, camera functionality, IoT services, and TinyML-based voice recognition. My contribution focused on technical documentation, sensor-output verification, GPS/GSM integration testing, and system-level testing support.**
