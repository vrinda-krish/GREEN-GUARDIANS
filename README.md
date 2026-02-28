```markdown
# 🌿 GREEN-GUARDIANS  
## AI Smart Animal Repellent System

---

## 📖 Project Description

**GREEN-GUARDIANS** is a clever and humane AI-powered animal repellent system designed to prevent animals from entering farms and campuses without causing harm.

The system uses an AI-based camera detection module to identify animals such as:

- Dogs  
- Cattle  
- Monkeys  

Once detected, the system intelligently activates:

- 🔊 Ultrasonic sound deterrents  
- 💡 Visual light deterrents  

Unlike traditional fencing or harmful repellent methods, GREEN-GUARDIANS activates only when an animal is detected, making it energy-efficient, humane, and smart.

---

## 👥 Team Members

- **Vinda Krishna**  
- **Krithika**

---

## 🎯 Objectives

- Prevent crop damage and campus disturbance  
- Provide a non-lethal and humane solution  
- Reduce manual monitoring efforts  
- Enable smart and automated protection  

---

## 🧩 Components

### 🔹 Hardware Components

- AI Camera Module  
- Raspberry Pi / Arduino  
- Ultrasonic Sound Generator  
- High-Intensity LED Flash Module  
- Power Supply Unit  
- Connecting Wires & Mounting Frame  

### 🔹 Software Components

- AI Animal Detection Model (Computer Vision)  
- Image Processing Module  
- Control Logic System  
- Alert & Activation Module  
- Logging System  

---

## ⚙️ Specifications

### 🔹 Functional Specifications

- Real-time animal detection using AI  
- Species recognition (dog, cattle, monkey)  
- Automatic activation of deterrents  
- Energy-efficient operation  
- Logging of detection events  

### 🔹 Non-Functional Specifications

- Humane and non-harmful operation  
- Low power consumption  
- Scalable for large farms or campuses  
- Weather-resistant hardware setup  

### 🔹 Technical Specifications

- Programming Language: Python  
- AI Framework: TensorFlow / OpenCV  
- Hardware Platform: Raspberry Pi  
- Camera Resolution: Minimum 720p  
- Power Requirement: 5V–12V  

---

## 🔄 System Flowchart

```

Start
|
v
Camera Captures Image
|
v
AI Model Processes Image
|
v
Animal Detected?
|         |
No         Yes
|          |
v          v
Idle Mode   Identify Animal Type
|
v
Activate Ultrasonic + Flash
|
v
Log Detection Data
|
v
End

````

---

## 🛠️ Setup Guide

### 🔹 Prerequisites

- Raspberry Pi with OS installed  
- Python 3.x installed  
- Required libraries:
  - OpenCV
  - TensorFlow / PyTorch
  - NumPy  

---

### 🔹 Installation Steps

1. Clone the repository:
   ```bash
   git clone https://github.com/your-repo-name/green-guardians.git
````

2. Navigate to project directory:

   ```bash
   cd green-guardians
   ```

3. Install dependencies:

   ```bash
   pip install -r requirements.txt
   ```

4. Connect camera and deterrent modules to GPIO pins.

5. Run the system:

   ```bash
   python main.py
   ```

---

## 🧱 Assembly Instructions

1. Mount the AI camera facing the farm boundary.
2. Connect the camera to the Raspberry Pi.
3. Connect ultrasonic sound module to GPIO output pins.
4. Connect LED flash module to GPIO output pins.
5. Ensure proper power supply connection.
6. Secure components in a weather-protected enclosure.
7. Power on the system and test detection.

---

## 📂 Project Structure

```
GREEN-GUARDIANS/
│
├── models/               # AI trained models
├── src/
│   ├── detection.py
│   ├── control.py
│   ├── main.py
│
├── logs/
├── hardware/
├── requirements.txt
└── README.md
```

---

## 🧪 Testing

* Tested with real-time animal images
* Field tested in controlled farm environment
* Verified deterrent activation accuracy
* Reduced false triggers using AI confidence threshold

---

## 🌍 Applications

* Agricultural farms
* University campuses
* Warehouses
* Rural residential areas

---

## 🚀 Future Enhancements

* Mobile app monitoring system
* Solar-powered module
* Cloud-based data logging
* SMS alert notifications
* Night-vision AI detection

---

## 📜 License

### MIT License

Copyright (c) 2026
Vinda Krishna, Krithika

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software.

```
```

