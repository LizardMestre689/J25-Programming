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
