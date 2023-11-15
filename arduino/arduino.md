# Explanation of the Code



## Blink Variation 1
---
In this code we have a configuration that sends and outputs to the LED, this output tells the arduino that the LED on pin 13 has to be on for 2000 milliseconds and then it has to turn off for 1000 milliseconds. This whole process will only be carried out when the Arduino starts working since it is in the setup.


Then it will repeat the following code indefinitely, the LED will be on for 500 milliseconds and off for 500 milliseconds, over and over again.


[Link to the code](https://github.com/LizardMestre689/J25-Programming/blob/main/arduino/Blink-Variation-01/Blink-Variation-01.ino)

## Blink Variation 2
---
In this code we have a setup that tells us that the LED will be on for 1500 milliseconds, off for 1000 milliseconds, on for 500 milliseconds and off for 1000 milliseconds.


Afterwards in the Loop the LED will turn on and off in 125 millisecond intervals indefinitely.


[Link to the code](https://github.com/LizardMestre689/J25-Programming/blob/main/arduino/Blink-Variation-02/Blink-Variation-02.ino)

## Blink Variation 3
---
To command we are going to determine that the Interval (dotDuration will be equal to 500).


In the setup we put that we are going to be acting on the LED_BUILTIN.


This code is based on recreating a name in Morse code using the LED as responsible for following the code and Morse code indications. In the loop we have each letter of a name, and within each letter we have the exact indications (in dots intervals) so that the Arduino LED is able to represent it in Morse code and that a human is able to understand it, this code will be repeated indefinitely.


[Link to the code](https://github.com/LizardMestre689/J25-Programming/blob/main/arduino/Blink-Variation-03/Blink-Variation-03.ino)

## Blink Variation 4
---
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


[Link to the code](https://github.com/LizardMestre689/J25-Programming/blob/main/arduino/Blink-Variation-06/Blink-Variation-06.ino)

## Funtional Programing 1
---
In this code we have determined the values of morseDash and morseDot, setting with intervals how long each of these lasts, simplifying the previous code to make it easier to read.


We have determined each of the letters with morseDash and morseDot and put it in the loop so that it plays indefinitely.


It is basically a graphical simplification of the previous one.


[Link to the code](https://github.com/LizardMestre689/J25-Programming/blob/main/arduino/Funtional_Programing_1/Funtional_Programing_1.ino)

## Funtional Programing 2
---
In this code what we have done is that an LED reproduces a name in Morse code over and over again indefinitely, and each time it does so it will finally have a delay of 2000 milliseconds.


In conclusion we have taken the same intervals as in Blink_Variation-06 and Functional_Programing_1 and we have put them in this code.


The objective in this code is to simplify the previouse one.


[Link to the code](https://github.com/LizardMestre689/J25-Programming/blob/main/arduino/Funtion_Programing_2/Funtion_Programing_2.ino)

## Funtional Programing 3
---
In this code we implement a new function in the void morseBlink(), now we implement an "int NumberOfDots" in the parentheses. In order not to have to put a dashduration and simplify the terms we use. Within the parentheses we will enter the number of times the LED has to shine to represent the letter of the name that we are representing on the Arduino.


In the loop we do exactly the same, repeating the established name an infinite number of times.


[Link to the code](https://github.com/LizardMestre689/J25-Programming/blob/main/arduino/Funtional_Programing_3/Funtional_Programing_3.ino)

## Funtional Programing 5
---

This code is somewhat different from the previous ones already mentioned. In this code, in)stead of using the Morse code as if it were represented with a light, in this code it will be represented graphically and grammatically with the symbols that correspond to them, with dots and dashes.


In the code it is determined that a point is a (.) and a dash is a (-). Each of the letters will be represented with their respective signs and when a letter is written a (/) will be placed to represent that the letter has already been written and that we are going to the next one. Thus an indeterminate number of times over and over again.


[Link to the code](https://github.com/LizardMestre689/J25-Programming/blob/main/arduino/Funtional_Programing_5/Funtional_Programing_5.1.ino)

## Serial Reader 1 Cooking System 1
---

The code in the Loop identifies that if we write something, the arduino program will respond by telling us ("You Wirght: "+ whatever we have written).


Then it will go to the void decide and it will respond with ("we are deciding with the input: "+input), and if the input we write is (input=="cook\n"), the code will go to the void section cook.


Then the code will write to us ("we are cooking").


[Link to the code](https://github.com/LizardMestre689/J25-Programming/blob/main/arduino/Serial_Reader_1/Serial_Reader_1.ino)

## Serial Reader 1 Cooking System 2
---

This code is based on creating a recipe, in this case a Spanish tortilla. (WITH ONION)


The loop will respond with a ("You have input: " + input) if we have written something and we have put this, otherwise the code would respond with spaces infinitely (input != " ").


If we write (cook) the code will go to the (decide) section.


Afterwards we go to the cook section, this section checks if we have the necessary ingredients and if we have them it will respond with ("you have a Spanish Omelette") and then it will subtract the ingredients that we have used.


Finally, we can replenish what we have not spent by writing the missing ingredient, writing (input=="potato").


[Link to the code](https://github.com/LizardMestre689/J25-Programming/blob/main/arduino/Serial_Reader_1_Cooking_system_2/Serial_Reader_1_Cooking_system_2.ino)

## Serial Reader 1 Cooking System 3
---

This code is exactly the same as the previous one, only we change the ingredients we use, which are bread, salt, garlic, tomato and oil and also the dish we create, which in this case is a delicious bread with Catalan tomato.


[Link to the code](https://github.com/LizardMestre689/J25-Programming/blob/main/arduino/Serial_Reader_1_Cooking_system_3_Own_Recipe_copy/Serial_Reader_1_Cooking_system_3_Own_Recipe_copy.ino)

## Serial Reader 1 Cooking System 4
---
This code is similar to the previous one.


The things that vary are that now we have added more ingredients to the code, and instead of just creating one dish, it creates 2. One is bread with tomato and the second is rice pudding, the new ingredients that have been added are milk, rice and cinnamon.


The process is the same, the code reads if we have the ingredients and if we have them, it cooks them and creates the dish, and when cooking the dish it subtracts the ingredients used. If we need more of an ingredient, simply write the name of the ingredient and you will get an extra one.


But now we also have an inventory that tells us the ingredients we have available to use.


[Link to the code](https://github.com/LizardMestre689/J25-Programming/blob/main/arduino/Serial_Reader_1_Cooking_system_4_2Recipees/Serial_Reader_1_Cooking_system_4_2Recipees.ino)

## Special Message Mateo
---
The objective of this code is to make the Arduino write us a drawing with characters from the keyboard.


First it will tell us (This is a Special Message), then it will write line by line the characters to represent a 2D figure, in my case I have chosen a classic mustang for this code, this will be repeated indefinitely, and each time it completes a loop This will have a delay of 2000 milliseconds.


[Link to the code](https://github.com/LizardMestre689/J25-Programming/blob/main/arduino/Special_Message_Mateo_Mestre/Special_Message_Mateo_Mestre.ino)
