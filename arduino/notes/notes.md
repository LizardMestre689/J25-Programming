# 🗒️Notes from the class🗒️
---

# Notas de Primer Trimestre
---
**Function in programing**
---

Functions are subsets of code defined to be executed when they are called, they can have parameters that can change the behavior of the function (or not). And they can have a return (or not).  


**Function syntaxy's in C++** 
---

Definition: 

Return type (void none)---->Void name of the function (parameter inside) {Cod Code} 

We cannot define a duration inside the definition of another function 

Calling a function: 

Name of the function ();

Has to be the exact same name (case sensitive) 


**Examples of calling function:** (All are defined in a library) arduino.cpp 
---

Digital write (int pin, 1 or 0) 

Delay (long/int) 

Pin Mode (Pin, mode) 

![MonkeyPhoneCallGIF](https://github.com/LizardMestre689/J25-Programming/assets/144990985/05948ffe-d331-45a5-afc2-636852647c39)

**Examples of defining functions:** 
---

Void setup (no parameter) { 

Void loop () { 

Boilerplate---> code difficult to read difficult to maintain 

Digital wright (13, H) 

D (_) 

DW (13, L) 

D (_) 

Serial:  

Object-> type of complex valuable 

Handles communication through serial 

Talks and listens to the PC through USB 

**How?** 

Serial. begin (9600); 

Serial. println (“resp”) 

 

**Variables:**
---

Int dotDuration= i 

Variable is a place in memory where we can store data and it’s **identified** so we can store it. 

Variables can have **types**, to specifically how much memory do they need and the possibilities they can offer. 

In C++ and other highly types of programing languages, types are **mandatory** to be specified. 

Highly types Programing languages (C++,…) 

Common primitive variables:	----->	Objects (complex type of variables) 



**🧱Building blocks🧱**
---

Numbers (C++):  

int-numeral numbers ut to 32000 

Long- Bigger numbers 

8int/ 8uint: less memory/ less number 

Loat- decimal numbers 

String---> String 

Chat---> Name 

Booleans---> True/False 

 
**Syntax of variable in C++:**
---

Declaration:

Int 			dotDuration 		; 

Type of variable		Name/Identified	only 
 
**Assignment:** 

dotDurarion          =           500 

  Name		Equal       valve 

 
**Common assignment: C++** 
---


a= a+1; = a++; 

b=b-1; = b--;  
 
**Naming connection:**
---


Variables cannot have spaces. 

We usually use camel cases 

Objects -> start with a capital Serial 

Variables that do not change the value 

![BoyKidGIF](https://github.com/LizardMestre689/J25-Programming/assets/144990985/0e2ef500-01ec-4e9f-97db-57dad6a5af54)

**Constants**
---

![WawaCatLoveIsAConstantGIF](https://github.com/LizardMestre689/J25-Programming/assets/144990985/bd03c1da-dcd7-4284-af4e-e2d8d9c457fd) 

🐍SREAMING_SANKE_CASE🐍

In C++ you can enforce it: 

LUYI=4; ---> makes a compiling error❌ 

🥙Kebab-case 🥙

Serial: --> Its and object; -- First letter  

We are going to use method inside. 

Compilers or uploader: Is syntax error, or the code doesn't work. The Arduino is not connected. 

Arduino haves 6 meanings: The fiscal one, the CPU of the Arduino, the soft wear, toolchain of the Arduino that will read and translate   

Compiling: They take the code and translate it to machine code to be able to read it. 

Constants is a specific think  

A variable can change 🤨 

Interpreting: The code, it read line by line and resumed line by line 

JVM (Java Virtual Machine) 


**Exercises to study (っ °Д °;)っ**
---


```C++
// First Example

int a = 200;
int b = 100;
int c = 50;

void setup() {
 b = a;
 a = a + 200;
}

void loop() {
 digitalWrite(LED_BUILTING, HIGH);
 delay(b); //200
 digitalWrite(LED_BUILTING, LOW);
 delay(c); //50
}

// Second example

int a = 200;
int b = 100;
int c = 50;

void setup() {
 a = a - 50;//a = 150
 b = a; // b = 150
 a = a + 200; // a = 150 + 200 = 350
 c = a + b; // c = 350 + 150 = 500
}

void loop() {
 digitalWrite(LED_BUILTING, HIGH);
 delay(b); // b  = 150
 digitalWrite(LED_BUILTING, LOW);
 delay(c); // c = 500
}

// Third example
C++
int a = 200;
int b = 100;
int c = 50;

void setup() {
 x = b + c *2;
 digitalWrite(LED_BUILTING, OUTPUT);
 delay(c);
 b = b - 100;
 c = b + 100
 a = a + 200; 
 c = a + b; 
}

void loop() {
} 
```

### Notes from the notebook🗒️
---

![Pag 1](https://github.com/LizardMestre689/J25-Programming/assets/144990985/14df1ab5-e245-43f4-8c00-278684abc651)


![Pag 2](https://github.com/LizardMestre689/J25-Programming/assets/144990985/6e44771d-f1eb-4850-9628-d872dfd53550)


![Pag 3](https://github.com/LizardMestre689/J25-Programming/assets/144990985/cc485e01-8683-452d-9f7d-7d1e2215a237)


![Pag 4](https://github.com/LizardMestre689/J25-Programming/assets/144990985/507ed7e9-5e03-4cdb-bbca-d358b32f217e)


![Pag 5](https://github.com/LizardMestre689/J25-Programming/assets/144990985/a95acd6d-ff7e-42d2-ac63-4a3522f3e955)


![Pag 6](https://github.com/LizardMestre689/J25-Programming/assets/144990985/00db18c8-eba0-4e42-9007-6b3f67f32615)

---

# Notas de Segundo Trimestre
---
![IMG_3753](https://github.com/LizardMestre689/J25-Programming/assets/144990985/731baf49-e96f-4c82-8d78-36f5b647c1c2)

![IMG_3752](https://github.com/LizardMestre689/J25-Programming/assets/144990985/3de2189c-2441-431b-a89e-ab66405f772a)






# **Deveres de DNI**
---
**DNI**

The National Identity Document serves as a citizen's identity number in many Spanish-speaking nations. The DNI's logic uses a particular validation algorithm and usually consists of a numerical character followed by a letter.

**Numeric Part:**

/The numeric part of the DNI is typically 8 digits long.

/It uniquely identifies an individual.

**Letter:**

/The letter in the DNI is a checksum or verification digit.

/It is calculated based on the numeric part to ensure the validity of the DNI.

**· Calculation of the Letter:**

/Take the numeric part of the DNI and calculate the remainder when dividing it by 23.
/The remainder corresponds to a specific letter in a predefined sequence.
/The sequence is usually "TRWAGMYFPDXBNJZSQVHLCKE," where each letter corresponds to a specific value.

**For example:**

0: T, 1: R ,2: W, 3: A, 4: G, 5: M, 6: Y, 7: F, 8: P, 9: D, 10: X, 11: B, 12: N, 13: J, 14: Z, 15: S, 16: Q, 17: V, 18: H, 19: L, 20: C, 21: K, 22: E.

**Validation Process:**

To validate a DNI, you can follow these steps:

Take the numeric part of the DNI and calculate the remainder when dividing it by 23.
Compare the calculated remainder with the corresponding letter in the predefined sequence.
If they match, the DNI is considered valid

# **Array String methods**
---
**Array**

Strings

A string is a class that defines objects that are represented as a stream of characters. Most of the programs require to work with texts employ strings in the case of strings, memory is allocated dynamically. More memory can be allocated at run time on demand. As no memory is reallocated, no memory is wasted.

In C++, we can work with strings in a variety of ways. Reversing, concatenating, or sending anything as an argument to a function are a few examples.

Some of the most common examples are:


· **Initialization:**
Strings can be initialized using a default constructor or by assigning a character array.

· **Accessing Characters:**
Characters in a string can be accessed by index, and functions like front () and back () retrieve the first and last characters.

· **Concatenation:**
Strings can be combined using the + operator or the append () function.

· **Comparison:**
Strings can be compared for equality or lexicographical order.

· **Length and Capacity:**
 Methods like size () and length () provide the number of characters, while capacity () gives the allocated memory.

· **Modification:**
Strings can be modified by appending, erasing, or replacing substrings.

Example from (geeksforgeeks):
```
// C++ Program to demonstrate the working of

// getline(), push_back() and pop_back()

#include <iostream>

#include <string> // for string class

using namespace std;

// Driver Code

int main()

{

// Declaring string

string str;

// Taking string input using getline()

getline(cin, str);

// Displaying string

cout << "The initial string is : ";

cout << str << endl;

// Inserting a character

str.push_back('s');

// Displaying string

cout << "The string after push_back operation is : ";

cout << str << endl;

// Deleting a character

str.pop_back();

// Displaying string

cout << "The string after pop_back operation is : ";

cout << str << endl;

return 0;

}
```
Bibliography:

GeeksforGeeks. (2023, 17 febrero). STD String class in C. https://www.geeksforgeeks.org/stdstring-class-in-c/
Mahajan, U. (2022, 24 febrero). String in C++ - Scaler topics. Scaler Topics. https://www.scaler.com/topics/cpp/strings-in-cpp/
C++ Strings. (s. f.). https://www.w3schools.com/cpp/cpp_strings.asp

---
## Array Min Nunmber
---
```
void setup(){
Serial.begin(9600);
    int grades [] = {9,5,8,3,2,9,3,1,7};
  int min = grades[0];
  for (int i = 0; i < 9; i++) {
    if (grades[i] < min) {
     min = grades[i];
    }
  }
 //writes the min number with a delay
    Serial.println(min);
    delay(500);
    }


void loop(){
}
```
