## Final Project
---

### Goal of the Project:

In this project we have to create a code that Echo when you write something through serial is going to reply the same command just to be sure that the command has been sent properly. Write a line in morse code if you write "m: " or "morse " for the command and the line after will be sent as morse code. If the command is correct send a cooking recipee of the dish of your choice. Play (or stop) a song.


### Process of creating the code:

The process of creating the code has not been very complicated from my point of view, I followed all the instructions that the teacher David gave us in Teams and I have received a lot of help from him, since there have been things that I did not know how to solve and when I asked him they have been solved. The steps to follow were to create a code that put together different codes, for example, put together a cooking recipe, a song and paste a code that would write in morse what we have written, when the function of each code was called. Also during the coding process, I have and have been helped by some classmates.

### Problems creating the code: 

During the creation of this code I have faced different problems, since there were things which I didn't understand or didn't know how to do, for example, I had doubts about how to call a function without it being a void setup or a void loop, to this doubt I found a solution, ask David how to do it. Another not very common problem that I did not know how to solve was at the moment of calling a code that was not in the main code, what happened is that the previous code was saved in the program library, or so I think, since it did not stop giving me error when compiling, as it is seen that the code had stayed with something that was before and after changing it had already disappeared, ie, the arduino was calling a program that no longer existed and did not know why, in the end David made me a copy of the project and stopped giving error.

And as a general problem that none of my classmates have yet managed to achieve was in the part of the code in which we had to stop the song by writing "Stop" while the music was playing. In this part of the code, many of our colleagues have had the same problem since the code did not read any Input while the song was playing and we did not know how to solve it. Many of us asked David how to solve this problem, but he has also had problems trying to figure out how to solve it. solve it. In the end he told us that there would be no need to put it in and that nothing would happen if we didn't have it in the code.

But at the end I could create all the code, with the exeption of the part of stoping the music.

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
