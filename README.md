# IoT Project

## Setup
<img width="631" alt="IoT Project Overview" src="https://github.com/user-attachments/assets/b12a6d03-5bf8-4880-97ed-e350fd9e9366">

## Project Flow
<img width="444" alt="Project Flow" src="https://github.com/user-attachments/assets/3183c630-1521-4dc6-9ba0-65a0874f50c0">

## Equipment

### 1. NodeMCU ESP8266

<img width="699" alt="NodeMCU ESP8266" src="https://github.com/user-attachments/assets/533201c4-b985-4076-850e-bfbfe39ee456">

**NodeMCU:** A versatile ESP8266-based development board ideal for IoT projects.

- **Integrated WiFi:** Enables seamless device-to-cloud communication.
- **Programming:** Supports Arduino IDE for a convenient coding environment.
- **Real-time Data:** Collects and sends sensor data to platforms like ThingSpeak.
- **Compact & Easy:** Perfect for innovative IoT projects with endless possibilities.
- **Cost-Effective:** 10x cheaper than Raspberry Pi and 2x cheaper than Arduino Uno R3.

**Pinout Overview:**

- **Programming:** Arduino IDE
- **Serial Communication Pins:** 1 TX and 1 RX pin
- **Digital Pins:** 11
- **Analog Pins:** 1

### 2. DHT11 – Temperature and Humidity Sensor

There are two versions of the DHT11 sensor you might come across: one with four pins and another with three pins mounted on a small PCB. The PCB-mounted version includes a surface-mounted 10K Ohm pull-up resistor for the signal line. Here are the pinouts for both versions:

<img width="604" alt="DHT11 Pinout" src="https://github.com/user-attachments/assets/9f3f5914-39c6-42f6-b2ce-0b2d66eaa62e">

**DHT11:** A sensor for measuring temperature and humidity with digital output for precise readings.

- **Integrated Components:** Combines a humidity sensor (moisture-absorbing substrate + polymer) and a temperature sensor (NTC core) with a microcontroller.
- **Operating Voltage:** Works on 3-5.5V DC with a 1-second stabilization delay upon power supply.
- **Data Signal:** Provides a 40-bit data signal containing humidity and temperature information.
- **Factory Calibrated**
  - **Humidity Range:** 20-90% RH
  - **Humidity Accuracy:** ±5% RH
  - **Temperature Range:** 0-50 °C
  - **Temperature Accuracy:** ±2% °C
  - **Operating Voltage:** 3V to 5.5V

For more information, visit:
- [DHT11 Technical Data Sheet](https://www.mouser.com/datasheet/2/758/DHT11-Technical-Data-Sheet-Translated-Version-1143054.pdf?srsltid=AfmBOoqxGhv91MPrzte_7se8MPFztJPezHKITgg88ByCckk27k8XCoSf)
- [How to Set Up the DHT11 Humidity Sensor](https://www.circuitbasics.com/how-to-set-up-the-dht11-humidity-sensor-on-an-arduino/)

### 3. Capacitive Soil Moisture Sensor

<img width="325" alt="Capacitive Soil Moisture Sensor" src="https://github.com/user-attachments/assets/68a3ba70-fa28-4a64-87cb-21b069ff1c8d">

<img width="669" alt="Capacitive Soil Moisture Sensor Pinout" src="https://github.com/user-attachments/assets/72e468a5-96d9-4f57-8438-a25d3ee547dd">

**Structure:** Probe with a capacitive sensing element; includes an NTC temperature measurement component and an IC555 timer.

- **Capacitive Sensing**
- **Easy Integration**
- **Operating Voltage:** 3.3 to 5.5V DC
- **Operating Current:** < 5mA
- **Output Voltage at 5V:** 1.5V to 3V (approx.)
- **Sensor Probe Dimensions (L x W):** 98 x 23mm (3.86 x 0.91″)
- **Cable Length:** 20cm (8″)

## Results

<img width="561" alt="Result 1" height="300px" src="https://github.com/user-attachments/assets/b1f0580e-e0ca-47ac-9ccb-169562f5930c">
<img width="507" alt="Result 2" height="300px" src="https://github.com/user-attachments/assets/13452d56-eb8d-4ac4-91a6-4c3359c72a69">
<img width="501" alt="Result 3" height="300px" src="https://github.com/user-attachments/assets/a47ee26d-9f6c-4272-96c9-393a65193ce7">

## Thingspeak

<img width="623" alt="Thingspeak" src="https://github.com/user-attachments/assets/90549d85-74ce-401b-81f9-b9ed3cce57d5">
