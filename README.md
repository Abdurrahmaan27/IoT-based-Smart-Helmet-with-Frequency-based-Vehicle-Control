# IoT Based Smart Helmet with frequency based Vehicle Control
An IoT-based smart helmet that enhances driver safety using sensors and AI to detect collisions and drowsiness in real time. 
In case of an accident, it automatically sends the location to emergency services for quick response.

# Helmet Unit
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/a366d4d5-caae-4fa0-95bb-1ecfed0b0aa3" />

# Vehicle Unit
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/a7eaa5d0-e75f-4971-88bb-0984e3110693" />

# Features
1. Driver Drowsiness Detection:
    Uses a LeNet CNN model trained in Python (Jupyter Notebook) to detect drowsiness from real-time facial inputs via a camera.

2. Collision & Vibration Detection:
    Detects accidents using a vibration sensor and immediately sends alerts using GSM and GPS modules.

3. Automatic Emergency Alert System:
    In case of a crash, automatically sends SOS messages and live location to police and family members.

4. Obstacle & Blind Spot Detection:
    Ultrasonic sensor with servo motor monitors obstacles around the vehicle, issuing warnings and adjusting vehicle speed.

5. Helmet-Wear Detection:
    Vehicle ignition only works when the helmet push button confirms it’s worn properly.

6. Real-Time Feedback System:
    Provides continuous driver feedback through buzzers, alerts, and LCD display.

7. IoT-Based Integration:
    All modules communicate via Zigbee for reliable wireless data transmission.

# Components & Softwares Used
# Softwares:
1. Embedded C
2. Python
3. VS Code
4. Arduino IDE
5. Jupyter Notebook
   
# Hardwares:
1. Arduino Microcontroller
2. Zigbee Module
3. Power Supply
4. LCD (Liquid Crystal Display)
5. Vibration Sensor
6. HC-SR04 Ultrasonic Sensor
7. GPS and GSM Modules
8. Buzzer
9. Servo Motor
10. Push Button and Camera

# System Architecture

<img width="700" height="600" alt="image" src="https://github.com/user-attachments/assets/dd255622-2cfc-487a-874a-d1964ebaeff3" />

## Installation

1. Clone the repository:
    ```bash
    git clone https://github.com/Abdurrahmaan27/MangaMiner.git
    cd MangaMiner-main
    ```

2. navigate to the repo:
    ```bash
    cd Iot-based-Smart-Helmet-with-frequency-based-Vehicle-Control
    ```
3. Setup Python Environment:
   ```bash
    pip install tensorflow keras opencv-python numpy
    ```
4. Setup Arduino:
- Upload the Arduino code from ```bash Iot-based-Smart-Helmet-with-frequency-based-Vehicle-Control/``` directory to your Adruino UNO using Adruino IDE.

5. Load the Adruino Code:
- Open Arduino IDE.
- Connect your Arduino board via USB.
- Upload the following sketches sequentially:
    - helmet_ruino.ino.ino
    - HELM.ino
    - ultrasonic.ino
- Install the following Arduino libraries if missing:
    - Servo.h
    - LiquidCrystal.h
    - SoftwareSerial.h

6. Run the Drowsiness Detection Model
```bash
python drowsiness_detection_live.py
```

7. Configure GSM & GPS Modules:
  - Connect GSM and GPS modules to the Arduino according to pin mappings in ```bash gsm.h```.
  - Open Serial Monitor to test message sending and location transmission.

  
8. Assemble the Hardware Components:
  - Connect vibration sensor, ultrasonic sensor, buzzer, LCD, servo motor, and push button following the circuit diagram.
  - Ensure power stability via a regulated power supply.
  - The helmet ignition will activate only when the push button is pressed (helmet worn).

9. Final Step
Once setup is complete, run both:
    - The Arduino system for sensors and communication
    - The Python drowsiness detection script
    
The smart helmet will now:
    - Detect drowsiness and alert the rider
    - Monitor obstacles using the ultrasonic sensor
    - Automatically send accident location via GSM & GPS
    - Provide real-time feedback through buzzer and LCD

# Working FlowChart
1. Working Flowchart of the Helmet Section that monitors the Driver's Drowsiness levels:

<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/1cd32b93-d81a-4a43-8d67-d35a05bb5d5d" />

2. Working flowchart of the vehicle module that monitors blind spots to detect nearby vehicle intrusion:

<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/b022f742-df93-466a-8ce3-a126bcac74b4" />


# Future Enhancements
  - Integration with vehicle braking systems for automatic stopping.
  - Cloud-based accident data storage and analysis.
  - Voice-controlled acknowledgment for alerts.
  - Mobile app for live tracking and notifications.
# Developed Using
  - Languages: Embedded C, Python
  - Tools: Arduino IDE, VS Code, Jupyter Notebook
  - Frameworks: TensorFlow / Keras (LeNet CNN)

  
  For any queries, Please reach out to Abraham @ abdurrahamaan27@gmail.com
  Thank You.
