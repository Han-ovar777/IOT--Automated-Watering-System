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

1) NODE MCU : NodeMCU Dev Board is based on widely explored esp8266 System on Chip from 
Expressif. It combined features of WIFI access point and station + microcontroller and uses 
simple LUA based programming language.

![Capture](https://user-images.githubusercontent.com/83410938/165542703-e9feeb52-1b60-45fe-b9ff-77f64e6fb805.JPG)
                     


2) MOISTURE SENSOR: Soil moisture sensors measure the water content in soil. A soil moisture probe is made up of multiple soil moisture sensors. Technologies commonly used in soil moisture sensors include: 
- Frequency domain sensor such as a capacitance sensor.
-Neutron moisture gauges, utilize the moderator properties of water for neutrons.  
-Electrical resistance of the soil.
                                               
![s](https://user-images.githubusercontent.com/83410938/165542727-052f69ed-8f25-40a6-939b-ebd72574fe44.JPG)



3) WATER PUMP:
The water pump is used to artificially supply water for a particular task. It can be electronically controlled by interfacing it to a microcontroller. It can be triggered ON/OFF by sending signals as required. The process of artificially supplying water is known as pumping. There are many varieties of water pumps used. This project employs the use of a small water pump which is connected to a H-Bridge.

![dd](https://user-images.githubusercontent.com/83410938/165542746-9d8bcab9-b75d-4c59-a919-88868b78c147.JPG)


4) Wi-Fi Module ESP8266:
It is also known as a system-on-chip (SoC) and comes with a 32-bit Tensilica microcontroller, antenna switches, RF balun, power amplifier, standard digital peripheral Interfaces, low noise receive amplifier, power management module and filter capability.

![dddd](https://user-images.githubusercontent.com/83410938/165542758-913a80b1-8686-41d8-a944-2030f3cef2a1.JPG)

                               


 Working of Components:  

➢ Soil Moisture Sensor Module (YL-69) 
  • Soil Moisture Sensor as the name suggest ,can detect amount of moisture in soil (roots of a plant).
  
  • It is a low-tech sensor. 
  
  • This sensor is compatible with Arduino UNO, Arduino mega2560
  
 • Strictly Speaking moisture sensor does not measure moisture but measures conductivity or resistivity of soil. 
 
 • Moisture Sensor has two probes to pass current through the soil. It then reads resistance(conductance) in the soil.
 
 • Less moisture (water) in soil results in higher resistance i.e. dry soil. 
 
• More moisture (water) in soil results in lesser resistance and sensor thus relates  moisture content. 


![dddddddd](https://user-images.githubusercontent.com/83410938/165542771-5ff140e1-bf8f-42b4-8db8-7e543bd1301e.JPG)



               



           



        
   






