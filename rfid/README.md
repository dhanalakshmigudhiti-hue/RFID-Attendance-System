RFID Attend# ance System

## 📌 Overview

The RFID Attendance System is a hardware-based project developed using Arduino Uno and the RC522 RFID module. It automatically records attendance when an authorized RFID card is scanned.

This project eliminates manual attendance and provides a simple, fast, and accurate attendance management system.

---

## Features

- RFID Card Detection
- Automatic Attendance Recording
- LCD Display Support
- Buzzer Notification
- Easy to Use
- Low Cost Hardware

---

## Components Required

- Arduino Uno
- RC522 RFID Reader
- RFID Card/Tag
- 16x2 LCD (I2C)
- Buzzer
- Breadboard
- Jumper Wires

---

## Circuit Connections

| RC522 | Arduino |
|--------|----------|
| SDA | D10 |
| SCK | D13 |
| MOSI | D11 |
| MISO | D12 |
| RST | D9 |
| VCC | 3.3V |
| GND | GND |

LCD

SDA → A4

SCL → A5

---

## Working

1. Power ON the Arduino.
2. Scan the RFID card.
3. Arduino reads the UID.
4. If UID matches the stored card,
   attendance is marked.
5. LCD displays "Attendance Marked".
6. Buzzer beeps once.

---

## Output

Scan Card...

Card Detected

Attendance Marked

Thank You

---

## Applications

- Schools
- Colleges
- Offices
- Libraries
- Laboratories

---

## Future Improvements

- Cloud Database
- ESP32 WiFi Support
- Face Recognition
- Mobile App
- Fingerprint Authentication

---

## Author

Your Name