# IOT--Automated-Watering-System
Watering System Using IOT

This is an open source application to water plants automatically. Up to now there is almost no free professional
software and instructions available to build a DYI irrigation that is scalable, accurate and most importantly, durable.
The app is also not only there to look good and for the love of data. Above all, it is a tool to tailor the sensors 
to the exact needs of the plants. This is where most irrigation systems with direct soil moisture measurement fail because every 
soil and plant is different and therefore manual calibration and possibly after some time also recalibration is essential.


The app contains the following features:

[+] Monitor and display time series data at the minute, hour, day, week and month level

[+] Setting the water level from which automatic watering should be triggered.

[+] Manual activation of irrigation with a button

[+] Switching between different sensor profiles

[+] Setting how long the pump works during an irrigation

[+] file overwrite option









💿 SYSTEM TEST X64 & X86
Windows 10 [ Recommended System ]



🌌 Screenshot:
![IMG-20200322-WA0039](https://user-images.githubusercontent.com/83410938/165538407-ccaa1aea-66f7-4022-abf5-eb08361392cb.jpeg)




Basic Modules:
In this project we have defined different modules to enable watering system successful manner.

1) Arduino UNO:It is a microcontroller board developed by Arduino.cc and based on Atmega328. 
Electronic devices are becoming compact, flexible and cheap that are capable of doing more function 
as compared to their predecessors that happened to cover more space, turned out costly with the ability to perform
fewer functions.

                                   


2) MOISTURE SENSOR: Soil moisture sensors measure the water content in soil. A soil moisture probe is made up of multiple soil moisture sensors. Technologies commonly used in soil moisture sensors include: 
- Frequency domain sensor such as a capacitance sensor.
-Neutron moisture gauges, utilize the moderator properties of water for neutrons.  
-Electrical resistance of the soil.
                                               



3)WATER PUMP:
The water pump is used to artificially supply water for a particular task. It can be electronically controlled by interfacing it to a microcontroller. It can be triggered ON/OFF by sending signals as required. The process of artificially supplying water is known as pumping. There are many varieties of water pumps used. This project employs the use of a small water pump which is connected to a H-Bridge.



4) Wi-Fi Module ESP8266:
It is also known as a system-on-chip (SoC) and comes with a 32-bit Tensilica microcontroller, antenna switches, RF balun, power amplifier, standard digital peripheral Interfaces, low noise receive amplifier, power management module and filter capability.
• The processor is based on Tensilica Xtensa Diamond Standard 106Micro and runs at 80 MHz.

• It incorporates 64 KiB boot ROM, 80 KiB user data RAM and 32 KiB instruction RAM.

• It supports Wi-Fi 802.11 b/g/n around 2.4 GHz and other features including 16 GPIO, InterIntegrated Circuit (I²C), Serial Peripheral Interface (SPI), 10-bit ADC, and I²S interfaces 
with DMA.

                               

• External QSPI flash memory is accessed through SPI and supports up to 16 MiB and 512 KiB to 4 MiB is initially included in the module.
• It is a major development in terms of wireless communication with little circuitry. and contains onboard regulator that helps in providing 3.3V consistent power to the board.
• It supports APSD which makes it an ideal choice for VoIP applications and Bluetooth interfaces



 Working of Components:  

➢ Soil Moisture Sensor Module (YL-69) 
  • Soil Moisture Sensor as the name suggest ,can detect amount of moisture in soil (roots of a plant).
  • It is a low-tech sensor. 
  • This sensor is compatible with Arduino UNO, Arduino mega2560,                Arduino NANO etc. 
 • Strictly Speaking moisture sensor does not measure moisture but measures conductivity or resistivity of soil. 
 • Moisture Sensor has two probes to pass current through the soil. It then reads resistance(conductance) in the soil.
 • Less moisture (water) in soil results in higher resistance i.e. dry soil. 
• More moisture (water) in soil results in lesser resistance and sensor thus relates  moisture content. 





               



           



        
   






