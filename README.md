# Light-Sensor-LED
LED project with daylight sensor made with Arduino

The hardware setup of the system is straightforward but carefully designed to demonstrate the principle of light-based automation. The main controller used is the Arduino Uno, a popular open-source microcontroller board based on the ATmega328P. It provides digital and analog I/O pins suitable for interfacing with a wide range of sensors and actuators. In this project, an LDR (Light Dependent Resistor) module with three terminals—VCC, GND, and digital output (D0)—is used to detect ambient light intensity. The LDR sensor outputs a HIGH signal when light is detected and a LOW signal when it is dark. This sensor is connected to a digital input pin on the Arduino.

As the output device, a green LED is used to represent the system’s response to changing light conditions. To ensure that the LED operates safely and does not burn out due to excessive current, a 330-ohm resistor is placed in series with it. The system also includes a 10k-ohm resistor, which helps to stabilize the voltage levels across the LDR and ensures reliable digital signal output.

All components are mounted on a small breadboard, which allows for flexible prototyping without the need for soldering. Six jumper wires are used to make all necessary connections between the components and the Arduino. The Arduino supplies 5V power and GND, eliminating the need for an external power source during operation. Overall, the hardware configuration is simple, cost-effective, and highly educational, making it ideal for introductory experiments in sensor interfacing and control systems.

## Circuit Diagram

Below is the circuit diagram for this project, showing how the LDR (light sensor) and LED are connected to the Arduino.

<img width="1836" height="1065" alt="SMARTLOG_bb 2" src="https://github.com/user-attachments/assets/9ecfc1bb-7279-49ef-8ad2-b03dbdb8bac4" />
