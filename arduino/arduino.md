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


## ProblemSolving1
---

When the Arduino is powered up or reset, it will enter the setup function, initialize serial communication, and then enter a loop that solves 30 problems by calling the resolverProblemaDibujo function for each problem, printing a corresponding message to the serial monitor. The loop function, although defined, is empty in this code.

[Link to the code](https://github.com/LizardMestre689/J25-Programming/tree/main/arduino/ProblemSolver1)


## ProblemSolving2 and Variation 1,2,3,4,5
---

Explanations ProblemSolver 2 and variations


**ProblemSolver2**
When the Arduino is powered up or reset, it will enter the setup function, initialize serial communication, print a message to the serial monitor, and then enter a loop that solves 15 odd-numbered problems by calling the resolverProblemaDibujo function for each odd-numbered problem, printing a corresponding message to the serial monitor. The loop function, although defined, is empty in this code.

**ProblemSolver2_ejemplo_1**
When the Arduino is powered up or reset, it will enter the setup function, initialize serial communication, print a message to the serial monitor, and then enter a loop that solves 30 problems in reverse order (from 30 to 1) by calling the resolverProblemaDibujo function for each problem, printing a corresponding message to the serial monitor. The loop function, although defined, is empty in this code.

**ProblemSolver2_ejemplo_2**
The program prints messages for solving problems from 1 to 30, excluding the problem with the number 17. The first loop uses a simple conditional check, while the second loop uses an if statement to skip the problem with the number 17.

**ProblemSolver2_ejemplo_3**
The program prints messages for solving problems from 1 to 30, excluding the problems with the numbers 17 and 23. It demonstrates two different ways of achieving the same result: one using a simple if statement inside a loop, a nd the other using a single if statement outside the loop.

**ProblemSolver2_ejemplo_4**
The program prints messages for solving problems from 1 to 30, but only for the problems that are odd and divisible by 3. The conditions inside the loop (n % 2 == 1 and n % 3 == 0) ensure that only numbers meeting these criteria trigger the call to the resolverProblemaDibujo function.

**ProblemSolver2_ejemplo_5**
the program prints messages for solving problems from 1 to 30, but only for the problems that are odd (n % 2 == 1) and divisible by 3 (n % 3 == 0). The conditions inside the loop ensure that only numbers meeting these criteria trigger the call to the resolverProblemaDibujo function, which then prints a message to the serial monitor.

[Link to the code](https://github.com/LizardMestre689/J25-Programming/tree/main/arduino/ProblemSolver2)

## ProblemSolving 3
---

# Explanations of ProblemSolver 3 and variations
---


## Explanation of ProblemSolver_3

the program prints messages for solving problems from 1 to 100 but only for the problems that are divisible by both 4 and 6. 
The conditions inside the loop (n % 4 == 0 && n % 6 == 0) ensure that only numbers meeting these criteria trigger the call to the 
resolverProblemaDibujo function, which then prints a message to the serial monitor.


## Explanation of ProblemSolver_3_ejemplo_1

The program prints messages for solving problems from 1 to 100 but only for the problems that are multiples of 7 and not multiples of 14. The conditions inside the loop (**n % 7 == 0 && 
 n % 14 != 0**) ensure that only numbers meeting these criteria trigger the call to the **resolverProblemaDibujo** function, which then prints a message to the serial monitor.


## Explanation of ProblemSolver_3_ejemplo_2

The program prints messages for solving problems from 1 to 100 but only for the problems that are odd, divisible by 3, and prime. The conditions inside the loop and the helper function 
 **esPrimo** ensure that only numbers meeting these criteria trigger the call to the **resolverProblemaDibujo** function, which then prints a message to the serial monitor.

 
## Explanation of ProblemSolver_3_ejemplo_3

The program prints messages for solving problems from 1 to 30 but only for the problems that are multiples of 7. The condition inside the loop (**n % 7 == 0**) ensures that only numbers 
meeting this criteria trigger the call to the **resolverProblemaDibujo** function, which then prints a message to the serial monitor.


## Explanation of ProblemSolver_3_ejemplo_4

The program prints messages for solving problems from 1 to 30 but only for the problems where the last digit is either 3 or 6. The condition inside the loop (**n % 10 == 3 || n % 10 == 
6**) ensures that only numbers meeting this criteria trigger the call to the **resolverProblemaDibujo** function, which then prints a message to the serial monitor.


## Explanation of ProblemSolver_3_ejemplo_5

the program prints messages for solving problems from 1 to 30 but only for the problems that are odd, divisible by 3, and have a sum of digits that is even. The conditions inside the 
loop and the helper function **sumOfDigitsIsEven** ensure that only numbers meeting these criteria trigger the call to the **resolverProblemaDibujo** function, which then prints a 
message to the serial monitor.


## Explanation of ProblemSolver3_ejemplo_6_ExtraPoints
the program prints messages for solving problems from 1 to 30 but only for the problems that are odd, divisible by 3, and have a sum of digits that is even. The conditions inside the 
loop and the helper function **sumOfDigitsIsEven** ensure that only numbers meeting these criteria trigger the call to the **resolverProblemaDibujo** function, which then prints a message to 
the serial monitor.


[Link to the code](https://github.com/LizardMestre689/J25-Programming/tree/main/arduino/ProblemSolver3)


## ProblemSolving 4
---

**Problem Solving 4.a**

This code will print the numbers from 1 to 100 that have at least a 3 in their digits to the serial monitor.

**Problem Solving 4.b**

In this code, the condition (numeroProblema % 2 == 1 || numeroProblema % 6 == 0) checks if a number is either odd (numeroProblema % 2 == 1) or a multiple of 6 (numeroProblema % 6 == 0). If the condition is true, the number is printed to the serial monitor.

**Problem Solving 4.c**

In this code, the while loop is used to extract each digit and add it to the sum. Then, the condition (sum == 10 || sum == 5) checks if the digit sum is either 10 or 5. If the condition is true, the number is printed to the serial monitor.

**Problem Solving 4.extra**

In this code, the (isPrime) function checks if a given number is prime. The main loop then uses this function to determine if each number from 1 to 100 is prime, and if so, it prints the number to the serial monitor.

[Link to the code](https://github.com/LizardMestre689/J25-Programming/tree/main/arduino/ProblemSolver4)

## Array 0
---

This code is meant to right "Webi Wabo" the first time, but I have some problems traing to separate the words, I wasn't able to complet with all the requirements that were meant to do.

This code is meant to wright "Webi Wabo", then chage the position of the 2 fierst letters, then it has to change of position the letter A and I of position, and finally change the letter B to a V, from the second part of the Word. And finaly wright to word again with all the changes made previously.

In this final part of the task I wasn't able to code it, the one of changing the B and the V, because I don't know how to.

[Link to the code](https://github.com/LizardMestre689/J25-Programming/tree/main/arduino/Array%200)

---

## Array Min Number

This code is meant to find the min number in side the (int gardes []), in a very simplify way.

[Link to the code](https://github.com/LizardMestre689/J25-Programming/tree/main/arduino/Array%20Min%20Number)

---

## Sonar 1
---

This code is meant to count the amount of times it haves increased.

[Link to the code](https://github.com/LizardMestre689/J25-Programming/blob/main/arduino/Sonar_1/Sonar_1.ino)


## Sonar 2
---

This code is meant to count how many times did the output increased, decreased or stay the same.

[Link to the code](https://github.com/LizardMestre689/J25-Programming/blob/main/arduino/Sonar_2/Sonar_2.ino)


## Sonar 3
---

This code is meant to count the count the velociti of the output and se how many secons did increased or decreased.

[Link to the code](https://github.com/LizardMestre689/J25-Programming/blob/main/arduino/Sonar_3/Sonar_3.ino)


## Sonar 4
---

This code is meant to countIt will find out the minimum, maximum and average of the array of speeds.

[Link to the code](https://github.com/LizardMestre689/J25-Programming/blob/main/arduino/Sonar_4/Sonar_4.ino)

---

## Music Song 
---

This code is meant to reproduce the Song from Milo.J named Rara Vez. It is posibe that dosen't works because I couden't use the computer, because Github doesn't work in my computer.

[Link to the code](https://github.com/LizardMestre689/J25-Programming/blob/main/arduino/Music%20Song/Song)

---
## C++ Final Project
---

### Goal of the Project:

In this project we have to create a code that Echo when you write something through serial is going to reply the same command just to be sure that the command has been sent properly. Write a line in morse code if you write "m: " or "morse " for the command and the line after will be sent as morse code. If the command is correct send a cooking recipee of the dish of your choice. Play (or stop) a song.


### Process of creating the code:

The process of creating the code has not been very complicated from my point of view, I followed all the instructions that the teacher David gave us in Teams and I have received a lot of help from him, since there have been things that I did not know how to solve and when I asked him they have been solved. The steps to follow were to create a code that put together different codes, for example, put together a cooking recipe, a song and paste a code that would write in morse what we have written, when the function of each code was called. Also during the coding process, I have and have been helped by some classmates.

### Problems creating the code: 

During the creation of this code I have faced different problems, since there were things which I didn't understand or didn't know how to do, for example, I had doubts about how to call a function without it being a void setup or a void loop, to this doubt I found a solution, ask David how to do it. Another not very common problem that I did not know how to solve was at the moment of calling a code that was not in the main code, what happened is that the previous code was saved in the program library, or so I think, since it did not stop giving me error when compiling, as it is seen that the code had stayed with something that was before and after changing it had already disappeared, ie, the arduino was calling a program that no longer existed and did not know why, in the end David made me a copy of the project and stopped giving error.

And as a general problem that none of my classmates have yet managed to achieve was in the part of the code in which we had to stop the song by writing "Stop" while the music was playing. In this part of the code, many of our colleagues have had the same problem since the code did not read any Input while the song was playing and we did not know how to solve it. Many of us asked David how to solve this problem, but he has also had problems trying to figure out how to solve it. solve it. In the end he told us that there would be no need to put it in and that nothing would happen if we didn't have it in the code.

But at the end I could create all the code, with the exeption of the part of stoping the music.

[Link to the code](https://github.com/LizardMestre689/J25-Programming/tree/main/arduino/wrap_project?classId=f76ec08a-f0fa-4d99-b5c0-0c3fb8f92d29&assignmentId=bbd6f879-1f85-4c95-8d5a-9f9fd367fc4f&submissionId=5026132e-fe1e-7441-5138-ead6decdb268)

---

---

## Principal code

---

This part integrates all the main commands and is the most important part of the program. Depending on the commands you enter in the serial monitor, he will respond differently, like play: to play music.

[Link to code](https://github.com/LizardMestre689/J25-Programming/blob/main/arduino/wrap_project/wrap_project.ino)

**Morse**
---

This is the part that integrates the Morse code. Depending on the letters you type, it will be converted into a different Morse code.

[Link to code](https://github.com/LizardMestre689/J25-Programming/blob/main/arduino/wrap_project/morse.h)


**Song**
---

This is the part that integrates the score as well as the play, if you give it a play command it will start playing, if you give the stop command it will stop playing (no one has done it so far)

[Link to code](https://github.com/LizardMestre689/J25-Programming/blob/main/arduino/wrap_project/music.h)


**Cook**
---

This is the section for recipes, if you give the command "Cook" it gives you the dish.

[Link to code](https://github.com/LizardMestre689/J25-Programming/blob/main/arduino/wrap_project/Cooking_Recepy.h)

