# Ultrasonic Level Sensor

Project by: **Bhavya Kakwani**

***

# Introduction

A level sensor is a device which is used to monitor, measure, & maintain usually fluid levels. Level sensors are mainly used in the automobile & manufacturing industries. They are also used in various household applications such as checking whether the water tank is overflowing or not. Level sensors can be classified into 2 types, i.e., point level sensors & continuous level sensors. Point level sensors are used to check the presence of the product at a particular point, whereas, Continuous level sensors are used to measure the exact level of the product as it rises & falls. Point level sensors include capacitance level sensor, optical level sensor, conductivity level sensor, vibrating level sensor, & float switch. Continuous level sensors include ultrasonic level sensor & radar level sensor.

# Components Used

1) ATtiny45 Microcontroller
2) Ultrasonic Sensor
3) 5V Regulator (LM7805)
4) Piezo Buzzer
5) 9V Battery
6) 2 x Capacitor (10 μF)

# Working

The positive terminal of 9 V battery is connected to the input pin of 5 V voltage regulator LM7805. Voltage regulators work more efficiently when it is supplied clean DC voltage, thus, the capacitors help in reducing the AC ripples due to noises of the input, hence, filtering the signal. The output pin of LM7085 is connected to the ATtiny45 & ultrasonic sensor, thus providing power to both the ATtiny45 IC & the ultrasonic sensor. The signal pin of the ultrasonic sensor is connected to the digital pin, PB1 of the ATtiny45 microcontroller. The positive pin of the piezo buzzer is connected to the digital pin, PB0 of the ATtiny45 microcontroller. The transmitter of the ultrasonic sensor emits ultrasonic waves which are reflected back when the medium in which the wave is travelling changes, & are then absorbed by the receiver. The time taken between the transmission & receiving of the signal is noted, & is used to calculate the required distance. The buzzer is turned ON when the tank/container being measured is either full or empty (or out of range).

# Applications

Level sensors are used in the following industries:

• Oil Manufacturing Plants

• Water Treatment

• Paper and Pulp Production Divisions

• Petrochemical and Chemical Making & Refinery Units

• Waste Material Handling Industry

• Beverage and Food Manufacturing Factories

• Pharmaceutical Processes

• Power Generating Plants