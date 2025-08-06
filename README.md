# Arduino-Based-Fire-Alarm-System

# Project Overview
This project demonstrates a basic fire alarm system using an Arduino UNO, a gas sensor (MQ-2), and a temperature sensor (LM35). The system continuously monitors the environment for smoke/gas and high temperature. If either parameter crosses a predefined threshold, the system triggers an alert using an LED and a buzzer.
This project is useful as an introductory embedded systems application and showcases sensor integration, analog signal processing, and real-time alert mechanisms using simple components.

# Components Used
Arduino UNO board
MQ-2 Gas Sensor
LM35 Temperature Sensor
Piezo Buzzer
LED
220Ω Resistor (for LED)
Breadboard
Jumper Wires

# Circuit Diagram

<img width="839" height="471" alt="fire alarm" src="https://github.com/user-attachments/assets/9f87488b-bf4b-4b07-b825-3e1dfa0a528e" />

# How It Works
- The MQ-2 gas sensor detects the presence of flammable gases or smoke. Its analog output increases with gas concentration.
- The LM35 sensor measures ambient temperature and outputs a voltage linearly proportional to temperature in Celsius.
- Both sensor outputs are read using Arduino’s analog input pins
- If the gas sensor reading exceeds the gas threshold or the temperature goes beyond a set limit (e.g., 50°C), the system triggers:
    .A buzzer sound (audio alert)
    .An LED light (visual alert)
- The data from the sensors can be monitored in the Arduino Serial Monitor for debugging or calibration.

# How to Run It
1. Connect the components as per the circuit diagram on a breadboard.
2. Connect the Arduino UNO to your computer using a USB cable
3. Open the Arduino IDE and upload the fire_alarm.ino sketch.
4. Open the Serial Monitor (baud rate: 9600) to observe real-time values from the sensors
5. Test the system by exposing the gas sensor to a small amount of smoke or increasing temperature near the LM35.
6. The LED and buzzer will activate when a threshold is crossed.

# Conclusion
This project demonstrates a practical approach to building a low-cost fire and gas detection system using Arduino and commonly available sensors. It reinforces key embedded systems concepts such as sensor interfacing, analog data acquisition, conditional logic, and real-time alerting. The simplicity and effectiveness of the system make it a suitable starting point for further expansion into IoT-based monitoring or integration with cloud services for smart safety applications.
