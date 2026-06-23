# Smart-fitting-room-system-v1

## Overview
A smart room occupancy system that uses a PIR sensor and an ESP32 to detect motion and determine whether a room is occupied or vacant. The system provides real-time feedback by turning an LED ON or OFF based on occupancy status.

## How it Works
The system continuously monitors a PIR motion sensor. When motion is detected, the ESP32 records the time of activity and marks the room as occupied. If no motion is detected for a defined period of time, the system assumes the room is vacant and updates the status accordingly.


## System Logic
- Motion detected the room is marked as **occupied**
- No motion for a set timeout period the room is marked as **vacant**
- LED ON → Room occupied
- LED OFF → Room vacant


## Components Used
- ESP32 Development Board
- PIR Motion Sensor
- LED
- Resistor (for LED protection)
- Jumper wires
- Breadboard (optional for physical setup)


## Core Concept
The system uses time-based logic (`millis()`) to track the last detected motion and determine occupancy status. This prevents false immediate vacancy detection when motion temporarily stops.


## Future Improvements 
- Add OLED display for real-time status
- Add buzzer for vacancy alerts
- Track occupancy duration
- Log entry/exit events
- Connect to cloud dashboard (IoT analytics)
- Mobile notification system


## Circuit Diagram
<img width="952" height="431" alt="smart room v1" src="https://github.com/user-attachments/assets/d4ba5a11-be4b-48b9-b94d-1df142e0242e" />
