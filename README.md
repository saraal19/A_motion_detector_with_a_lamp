# A_motion_detector_with_a_lamp
A motion detector with a lamp: When the motion sensor detects movement, it will trigger a relay to turn on the LED.
 here's a more detailed description of creating a motion-activated lamp using a motion sensor and a relay to control an LED:

Materials Needed:

Arduino Uno or a compatible microcontroller.
Passive Infrared (PIR) Motion Sensor.
LED (and appropriate resistor if required).
Relay Module.
Jumper wires.
Breadboard (optional).
Project Steps:

Hardware Setup:

Connect the PIR motion sensor to the Arduino using jumper wires. Typically, you'll have three pins: VCC (power), GND (ground), and OUT (signal). Connect VCC to 5V on the Arduino, GND to GND, and OUT to a digital input pin (e.g., pin 2).

Connect the LED to another digital pin (e.g., pin 13) through an appropriate resistor. Connect the anode (longer lead) of the LED to the digital pin and the cathode (shorter lead) to the resistor, then connect the other end of the resistor to GND.

Connect the relay module to the Arduino. The connections may vary depending on your specific module, but typically, you'll connect VCC and GND to 5V and GND on the Arduino, and the control pin (IN) to a digital pin (e.g., pin 7).

Arduino Programming:

Write a program in the Arduino IDE to read the signal from the motion sensor using digitalRead(). When the sensor detects motion (the signal goes HIGH), it should activate the relay module to turn on the LED.
arduino

Testing:

Upload the code to your Arduino and test the setup. The LED should turn on when motion is detected and turn off when there's no motion.
Placement:

Position the motion sensor in the desired location where you want to detect motion (e.g., a hallway or room entrance). Adjust the sensor's sensitivity and duration settings, if available, to fine-tune its behavior.
Final Assembly:

If you prefer a more permanent setup, consider soldering the connections and housing the components in an enclosure.
This project will result in a motion-activated lamp that turns on when it detects movement within its sensing range, making it a useful addition for security or energy-saving purposes.

