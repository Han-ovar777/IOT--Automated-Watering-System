# IOT--Automated-Watering-System
Watering System Using IOT

This is an open source application to water plants automatically. Up to now there is almost no free professional software and instructions available to build a
DYI irrigation that is scalable, accurate and most importantly, durable. The app is also not only there to look good and for the love of data. Above all, it is 
a tool to tailor the sensors to the exact needs of the plants. This is where most irrigation systems with direct soil moisture measurement fail because every 
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




                                         System Design
System hardware is the collection of physical parts of the project module. It includes various modules like controllers, regulators and relay circuits.

4.1 Basic Modules:
In this project we have defined different modules to enable watering system successful manner.

Arduino UNO:It is a microcontroller board developed by Arduino.cc and based on Atmega328. Electronic devices are becoming compact, flexible and cheap that are capable of doing more function as compared to their predecessors that happened to cover more space, turned out costly with the ability to perform fewer functions.

                                   

Experts always strive to introduce innovation in automation that requires minimum effort and gives maximum output. The microcontroller was introduced in the electronics industry with the purpose of making our tasks easy that come with even a remote connection with automation in any way.
Microcontrollers are widely used in embedded systems and make devices work according to our needs and requirements. We have already discussed the controllers like 8051, Atmega16, Atmega328 and PIC16F877.

Arduino Uno is a very valuable addition in the electronics that consists of USB interface, 14 digital I/O pins, 6 analog pins, and Atmega328 microcontroller. It also supports serial communication using Tx and Rx pins. You should also have a look at this UNO for beginners.

It is an open-source platform, means the boards and software are readily available and anyone can modify and optimize the boards for better functionality.
The software used for Arduino devices is called IDE (Integrated Development Environment) which is free to use and required some basic skills to learn it. It can be programmed using C and C++ language.
The major components of Arduino UNO board are as follows:
•	USB connector
•	Power port
•	Microcontroller
•	Analog input pins
•	Digital pins
•	Reset switch
•	Crystal oscillator
•	USB interface chip
•	TX RX LEDs


MOISTURE SENSOR: Soil moisture sensors measure the water content in soil. A soil moisture probe is made up of multiple soil moisture sensors. Technologies commonly used in soil moisture sensors include: 
- Frequency domain sensor such as a capacitance sensor.
-Neutron moisture gauges, utilize the moderator properties of water for neutrons.  
-Electrical resistance of the soil.
                                               

Soil electrical conductivity is simply measured using two metal conductors spaced apart in the soil except that dissolved salts greatly alter the water conductivity and can confound the measurements. An inexpensive fix is to embed conductors in a porous gypsum block which releases calcium and sulphate ions to swamp the soil background level of ions. The water absorbed by the block is correlated with soil water potential over the range -60 to -600 kPa providing a tertiary indicator for use in medium to heavy soils. Non-dissolving granular matrix sensors are now available with a more exacting specification for the range 0 to -200 kPa and use internal calibration methods to offset variations due to solutes and temperature. 


Methods for exploiting soil dielectric properties actually measure proxy variables that more or less include a component due to the soil electrical conductivity and are thus inherently sensitive to variations in soil salinity and temperature as well as water. Nevertheless, good accuracy and precision can be achieved under specific conditions and some sensor types have become widely adopted for scientific work. In general, conversions from raw sensor readings to volumetric moisture content or water potential using secondary or tertiary methods tend to be sensor or soil specific, affected or precluded at high salinity levels and dependent on temperature. Research-grade instruments typically have laboratory measured accuracy worse than +/- 4% when relying on factory settings or as good as +/- 1% when calibrated for the specific soil. Sensors based on the TDR method seem to require least calibration but may be unsuitable for soils with very high salinity or clay content. There are no comparable laboratory specifications for granular matrix sensors, possibly because they are technically more difficult to calibrate, their response times are relatively slow and the output is hysteretic for wetting and drying curves. Soil dielectric measurement is the method of choice for most research studies where expertise is available for calibration, installation and interpretation, but scope for cost reduction through sensor multiplexing is limited due to the possibility of stray capacitances Thus, by using the moisture sensors, the over-riding factor will be reliable, cost effective sensors and electronic systems for accessing and interpreting the data.









WATER PUMP:
The water pump is used to artificially supply water for a particular task. It can be electronically controlled by interfacing it to a microcontroller. It can be triggered ON/OFF by sending signals as required. The process of artificially supplying water is known as pumping. There are many varieties of water pumps used. This project employs the use of a small water pump which is connected to a H-Bridge.


                        

The pumping of water is a basic and practical technique, far more practical than scooping it up with one's hands or lifting it in a hand-held bucket. This is true whether the water is drawn from a fresh source, moved to a needed location, purified, or used for irrigation, washing, or sewage treatment, or for evacuating water from an undesirable location. Regardless of the outcome, the energy required to pump water is an extremely demanding component of water consumption. 



Wi-Fi Module ESP8266:

It is also known as a system-on-chip (SoC) and comes with a 32-bit Tensilica microcontroller, antenna switches, RF balun, power amplifier, standard digital peripheral Interfaces, low noise receive amplifier, power management module and filter capability.
• The processor is based on Tensilica Xtensa Diamond Standard 106Micro and runs at 80 MHz.

• It incorporates 64 KiB boot ROM, 80 KiB user data RAM and 32 KiB instruction RAM.

• It supports Wi-Fi 802.11 b/g/n around 2.4 GHz and other features including 16 GPIO, InterIntegrated Circuit (I²C), Serial Peripheral Interface (SPI), 10-bit ADC, and I²S interfaces 
with DMA.

                               


• External QSPI flash memory is accessed through SPI and supports up to 16 MiB and 512 KiB to 4 MiB is initially included in the module.
• It is a major development in terms of wireless communication with little circuitry. and contains onboard regulator that helps in providing 3.3V consistent power to the board.
• It supports APSD which makes it an ideal choice for VoIP applications and Bluetooth interfaces

3.3.2 Working of Components:  

➢ Soil Moisture Sensor Module (YL-69) 
  • Soil Moisture Sensor as the name suggest ,can detect amount of moisture in soil (roots of a plant).
  • It is a low-tech sensor. 
  • This sensor is compatible with Arduino UNO, Arduino mega2560,                Arduino NANO etc. 
 • Strictly Speaking moisture sensor does not measure moisture but measures conductivity or resistivity of soil. 
 • Moisture Sensor has two probes to pass current through the soil. It then reads resistance(conductance) in the soil.
 • Less moisture (water) in soil results in higher resistance i.e. dry soil. 
• More moisture (water) in soil results in lesser resistance and sensor thus relates  moisture content. 





               



           



        
   






