# An-Amazing-Safe
A safe that is designed to trick anyone who tries to break in while keeping your contents hidden from others. 

Design:
First, I have a tilted box that is on the front of the safe. I will add a case around it so others cannot tell that it is tilted. The reaosn it's slanted is so that anything you put in there will slide down into a larger box at the bottom of the safe. The larger box will be hidden behind two doors that only open when the right combination of numbers are pressed into the keypad that is to the right of the smaller box. Whenever anyone presses the keypad, your phone will get a notification via the bluetooth on the Arduino Nano ESP32, to alert you that someone is trying to open the safe. 

The keypad consists of a 16x2 LCD screen and 3 pushbuttons. The microcontroller I chose for this part of my safe is the Arduino Nano ESP32 because it has bluetooth connectivity, allowing me to alert my phone when the keypad is being used. The doors of my safe, that are opened when the right numbers are pressed, will be controlled by servo motors that are connected to my Arduino Uno R3. It's a solid microcontroller that will get teh job done. 
