void setup() {Serial.begin(9600);}

void loop() {
 morse_M();
 morse_A();
 morse_T();
 morse_E();
 morse_O();
 Serial.println();
 delay(1000);
}

 void morseDot(){
  Serial.print(".");
 }

 void morseDash(){
  Serial.print("_");
 }

 void morse_M(){
 morseDash();
 morseDash();
 Serial.print("/");
}

 void morse_A(){
 morseDot();
 morseDash();
 Serial.print("/");
}

void morse_T(){
 morseDash();
 Serial.print("/");
}

void morse_E(){
 morseDot();
 Serial.print("/");
}

void morse_O(){
 morseDash();
 morseDash();
 morseDash();
 Serial.print("/");
}