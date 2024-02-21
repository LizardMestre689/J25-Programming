# 🗒️Notes from the class🗒️

---

  - ## **Second Trimester**
  
---
## ☝ Vocabulary and important concepts ☝

---
- **Class**: Define tipo de objetos
- **Static**: Siempre esta en memoria  
- **Public**: Es quien puede acceder (public es todo el mundo), private(solo un numero determinado o alguien en espefico puede acceder) 
- **Block**: A block is a group of programming statements enclosed by a pair of braces {}.
- **Case sensitivity**: Case sensitivity means that the programming language distinguishes between uppercase and lowercase letters, treating them as different characters.
- **PC**: Personal computer 
- **Interface**: Comunicarse (as a verb)
- **GUI**: Graphic user interface
- **CLI**: Interfaz de la línea de comandos
- **High-level and low level abstraction**: High level is a very general level of abstraction and low level is a very specific abstraction.
- **Procedural programming**: La programación procedural se centra en la secuencia de instrucciones para resolver problemas, utilizando funciones y control de flujo. El control de flujo se refiere a la gestión de la ejecución de un programa, determinando el orden en que se ejecutan las instrucciones basadas en condiciones y bucles.

---
### Extended information in Spanish

---

**Características GUI**
 - Las GUI son interfaces que utilizan elementos visuales para ayudar a usuario a navegar o interactuar por el sistema, como, por ejemplo: Ventanas, botones, menús, iconos y controles deslizantes.

- Es bastante intuitiva de usar, ya que, al tener imágenes u botones, el funcionamiento del programa es más fácil de entender.

- Hay diferentes plataformas que usan GUI, entre ellas Windows, macOS, con sus aplicaciones y Word, Inkscape, con sus herramientas y funciones.

**Características CLI**

- Y el CLI es algo más complejo de utilizar, CLI permite al usuario interactuar con el sistema a través de comandos de texto ingresados en una línea de comando, por ejemplo, la ventana de comandos de Windows (cmd) y la línea de comandos de Git.

- Este tipo de interacción es preferida por usuarios avanzados, ya que la gran mayoría no sabe cómo funcionan. Ya que, al no tener una interfaz visual, no es tan fácil o intuitiva de usar.

---

**Alto Nivel** 

- La abstracción en alto nivel es una capacidad para abstraer información, de manera que se aleja de los detalles técnicos o específicos y se enfoca en temas más generales y abstractos.

- Un ejemplo de la abstracción en alto nivel son las bibliotecas, esta herramienta proporciona conjuntos de funciones, que permiten a los desarrolladores a realizar operaciones complejas con unas pocas líneas de código.

  ![PatrickStarHeelsGIF](https://github.com/LizardMestre689/J25-Programming/assets/144990985/67af9d8d-d564-424b-8a9e-f6d2223057d1)

**Bajo Nivel**

- La abstracción a bajo nivel es totalmente lo opuesto, este se centra en abstraer información más específica o concreta.

- Un ejemplo de abstracción en bajo nivel en el hardware sería el acceso directo a la memoria, instrucciones de ensamblador, manejo de registros de CPU, etc.

![PatPatGIF](https://github.com/LizardMestre689/J25-Programming/assets/144990985/0f18e074-a07d-487a-a839-04f4bbc0701b)




---

## Java Program Template
```java
  public class Classname {   // Choose a meaningful Classname. Save as "Classname.java"
   public static void main(String[] args) {  // Entry point of the program
      // Your programming statements here!!!
   }
}
```

## Output via System.out.println() and System.out.print()
```java
public class PrintTest {   // Save as "PrintTest.java"
   public static void main(String[] args) {
      System.out.println("Hello world!");       // Advance the cursor to the beginning of next line after printing
      System.out.println("Hello world again!"); // Advance the cursor to the beginning of next line after printing
      System.out.println();                     // Print an empty line
      System.out.print("Hello world!");         // Cursor stayed after the printed string
      System.out.print("Hello world again!");   // Cursor stayed after the printed string
      System.out.println();                     // Print an empty line
      System.out.print("Hello,");
      System.out.print(" ");                    // Print a space
      System.out.println("world!");
      System.out.println("Hello, world!");
   }
}
```

## Variable declaration
- **Int:** Numbers without decimals
- **Double:** Numbers with decimals
- **String:** Words or characters
  
```java
int sum;              // Declare a variable named "sum" of the type "int" for storing an integer.
                      // Terminate the statement with a semi-colon.
double average;       // Declare a variable named "average" of the type "double" for storing a real number.
int number1, number2; // Declare 2 "int" variables named "number1" and "number2", separated by a comma.
int height = 20;      // Declare an "int" variable, and assign an initial value.
String msg = "Hello"; // Declare a "String" variable, and assign an initial value.
```

## Basic Arithmetic Operations
![image](https://github.com/Spaikyjordi/J25-programming-jordi/assets/144990855/5bcc08c7-c1b4-4116-9a6a-611a52730264)
## Comparison Operators
![image](https://github.com/Spaikyjordi/J25-programming-jordi/assets/144990855/73a12f54-d7a8-47a1-b90a-fc955dfa77cc)
## Combining Simple Conditions
![image](https://github.com/Spaikyjordi/J25-programming-jordi/assets/144990855/1dd8fb3d-2bb8-4705-94db-7a7ce88039b7)

## The Loop Stirckes Back
Suppose that you want to add all the integers from 1 to 1000. You could use a so-called loop in your program to perform a repetitive task, that is what the computer is good at.
  
```java
public class RunningNumberSum {  // Save as "RunningNumberSum.java"
   public static void main(String[] args) {
      final int LOWERBOUND = 1;      // Store the lowerbound
      final int UPPERBOUND = 1000;   // Store the upperbound
      int sum = 0;   // Declare an int variable "sum" to accumulate the numbers
                     // Set the initial sum to 0
      // Use a while-loop to repeatedly sum from the lowerbound to the upperbound
      int number = LOWERBOUND;
      while (number <= UPPERBOUND) {
            // number = LOWERBOUND, LOWERBOUND+1, LOWERBOUND+2, ..., UPPERBOUND for each iteration
         sum = sum + number;  // Accumulate number into sum
         ++number;            // increment number
      }
      // Print the result
      System.out.println("The sum from " + LOWERBOUND + " to " + UPPERBOUND + " is " + sum);
   }
}
```

### How it works?
final int LOWERBOUND = 1;


final int UPPERBOUND = 1000;


Declare two int constants to hold the upperbound and lowerbound, respectively.

int sum = 0;


Declares an int variable to hold the sum. This variable will be used to accumulate over the steps in the repetitive loop, and thus initialized to 0.
```java
int number = LOWERBOUND;
while (number <= UPPERBOUND) {
   sum = sum + number;
   ++number;
}
```

## Some information for studing
---
Java Programing 
- [W3Schools](https://www.w3schools.com/java/default.asp)
- ---
- [Introduction](https://www3.ntu.edu.sg/home/ehchua/programming/java/J1a_Introduction.html)
- [OOP Basics](https://www3.ntu.edu.sg/home/ehchua/programming/java/J3a_OOPBasics.html)
