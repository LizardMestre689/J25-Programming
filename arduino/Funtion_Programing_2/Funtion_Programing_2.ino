int dot = 500;
int dash = 3*dot;

void setup() {pinMode(LED_BUILTIN, OUTPUT);}

void loop() {

 morse_M();
 morse_A();
 morse_T();
 morse_E();
 morse_O();
 delay(dot*4);
 }

 void morseDot(){
  digitalWrite(13, 1);  
  delay(dot);
  digitalWrite(13, 0); 
  delay(dot);
 }
 
 void morseDash(){
  digitalWrite(13, 1);  
  delay(dash);
  digitalWrite(13, 0); 
  delay(dot);
 }

void morse_M(){
 void morseDash();
 void morseDash();
 delay (2*dot);
}

 void morse_A(){
 void morseDot();
 void morseDash();
 delay(2*dot);
}

void morse_T(){
 void morseDash();
 delay(2*dot);
}

void morse_E(){
 void morseDot();
 delay(2*dot);
}

void morse_O(){
 void morseDash();
 void morseDash();
 void morseDash();
 delay(2*dot);
}








