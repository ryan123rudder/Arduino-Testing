# Arduino-Testing
The script in this repo will allow you to test pin functionality on an ardunio. If you just soldered on pin headers, or are concerned a pin is fried on your arduino, this is a simple way to cofirm.

Build a circuit similar to the one below:
![image](https://github.com/ryan123rudder/Arduino-Testing/assets/42309874/3369d25e-bd08-4697-b019-c396eea48423)

Just a simple LED with the anode connected to a resistor and a GPIO pin. Running the script on an Ardunio (currently only the pro micro) will blink every GPIO pin constantly. Simply move the wire connected to the resistor to every GPIO pin to ensure they are all blinking. You can also check the 5v, 3.3v, etc. pins, the LED just won't blink. Once you check all GPIO pins, leave the wire connected and move the wire connected to the - rail between all GND pins to check them. This process should allow you to test every pin on your ardunio.
