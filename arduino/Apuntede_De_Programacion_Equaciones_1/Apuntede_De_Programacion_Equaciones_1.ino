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





