In this code we define that (int dot = 500, and int dash = 3*dot) this means that a dot is equal to 500 milliseconds and a dash is 3 times the value of the dot)

The main objective of this code is to simplify the previous one much more, this code is intended to do exactly the same as in Blink-Variation-03, but this is intended to make it easier for a human to read the code.

The trick in this code has been that we have put the values of the letters in the void, by doing this what we created is that the first time the code is working the Arduino LED represents the already established name with the light in Morse code, And in addition to these letters we have told that morse_letter will represent a specific type of code.

That is why in the loop we have put
   morse_m();
   morse_a();
   morse_t();
   morse_e();
   morse_o();
so that the loop looks cleaner and the arduino only has to check what morse_x() does; and make the code work, causing the name to repeat indefinitely.
