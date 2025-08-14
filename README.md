### Arduino Temperature Display

!! CAN BE DONE WITH STARTER KIT !!


## THINGS YOU WILL NEED:
1x Arduino UNO R3\
1x Breadboard\
1x LCD 16x2\
1x Blue LED\
1x Yellow LED\
1x Red LED\
1x 10K potentiometer\
4x 220Ω Resister\
1x MCP temperature sensor/TMP Arduino temperature sensor\
5x 100mm jumper wires\
6x 75mm jumper wires\
6x 45mm jumper wires\
1x 7mm jumper wire\
2x 10mm jumper wires\
1x Ground jumper wire\
1x 5V jumper wire

## INSTRUCTIONS:

# Set up.
1. Connect the long red jumper wire to the breadboard on the line with the '+' on it, and to the Arduino in the 5V
2. Connect the long black jumper wire to the breadboard on the line with the '-' on it, and to the Arduino in the GND
3. Place the 10K potentiometer on the breadboard, connect the left pin to Digital pin 13, and connect the right pin to power


# Connecting the LCD.
1. Attach the LCD to the breadboard in rows A1-16
2. Connect 'VSS' on the LCD to GND
3. Connect VDD to power
4. Connect VO to the middle pin of the potentiometer (Previously mentioned)
5. Connect RS to Digital pin 12
6. Connect R/W to GND
7. Connect E to digital pin 11
8. Connect DB4 to digital pin 5
9. Connect DB5 to digital pin 4
10. Connect DB6 to digital pin 3
11. Connect DB7 to digital pin 2
12. Connect LED+ to a 220Ω Resister and connect that to digital pin 8
13. Connect LED- to GND

# Preparing the LEDs
1. Attach the short leg of the blue LED to a 220Ω Resister and place the other end of the resister in GND
2. Repeat step 1 for the yellow and red LEDs
3. Attach the long leg of the blue LED to digital pin 6
4. Attach the long leg of the yellow LED to digital pin 7
5. Attach the long leg of the red LED to digital pin 9

