int dotDuration = 500;


void setup() {pinMode(LED_BUILTIN, OUTPUT);}

void loop() {

 morse_M();
 morse_A();
 morse_T();
 morse_E();
 morse_O();
 delay(dotDuration*4);
 }

 void morse_M(){
 morseBlink(3);
 morseBlink(3);
 delay(dotDuration*2);
}

void morse_A(){
 morseBlink(1);
 morseBlink(3);
 delay(dotDuration*2);
}

void morse_T(){
 morseBlink(3);
 delay(dotDuration*2);
}

void morse_E(){
 morseBlink(1);
 delay(dotDuration*2);
}

void morse_O(){
 morseBlink(3);
 morseBlink(3); 
 morseBlink(3);
 delay(dotDuration*2);
}

void morseBlink(int NumberOfDots){
  
  digitalWrite(LED_BUILTIN, 1);
  delay(NumberOfDots*dotDuration); 
  digitalWrite(LED_BUILTIN, 0);
  delay(dotDuration); 
}