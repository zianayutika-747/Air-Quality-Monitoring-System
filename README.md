# Air Quality Monitoring System

## Project Overview

The Air Quality Monitoring System is an Arduino-based embedded project that monitors air quality using an MQ-135 gas sensor. Since Wokwi does not currently support MQ-135 simulation, a potentiometer is used to simulate varying air quality levels. The measured values are displayed on an LCD and logged through the Serial Monitor.

---

## Objectives

- Monitor air quality in real time.
- Display sensor values on an LCD.
- Classify air quality into Good, Moderate, and Poor.
- Log sensor readings for future analysis.

---

## Features

- Real-time monitoring
- LCD display
- Serial logging
- Simple threshold-based classification
- Easy to extend for IoT applications

---

## Components Required

- Arduino Uno
- MQ-135 Gas Sensor (Simulated using Potentiometer)
- 16x2 I2C LCD
- Jumper Wires

---

## Software Used

- Arduino IDE
- Wokwi Simulator

---

## Circuit Connections

### Potentiometer

VCC → 5V

GND → GND

SIG → A0

### LCD

VCC → 5V

GND → GND

SDA → A4

SCL → A5

---

## Working Principle

The Arduino continuously reads the analog value from the simulated gas sensor. Depending on the measured value, the air quality is classified into Good, Moderate, or Poor. The result is displayed on the LCD while the Serial Monitor stores the sensor readings.

---

## Output

Example

AQ:245

Good

AQ:620

Poor Air

---

## Learning Outcomes

- Analog sensor interfacing
- LCD interfacing
- Serial communication
- Embedded C programming
- Data acquisition

---

## Future Enhancements

- ESP8266 Wi-Fi connectivity
- ThingSpeak cloud storage
- Blynk mobile application
- Email alerts
- Buzzer warning
- OLED graphical display

---

## Real World Applications

- Smart Homes
- Air Pollution Monitoring
- Industrial Safety
- Hospitals
- Laboratories
- Smart Cities

---

## Author

Nithiya Monika
