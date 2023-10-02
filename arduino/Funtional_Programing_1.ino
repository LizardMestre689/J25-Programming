int dot = 500;
int dash = 3*dot;

void setup() {pinMode(LED_BUILTIN, OUTPUT);}

void loop() {

 //M
 void morseDash();
 void morseDash();
 delay(2*dot);
 //A
 void morseDot();
 void morseDash();
 delay(2*dot);
 //T
 void morseDash();
 delay(2*dot);
 //E
 void morseDot();
 delay(2*dot);
 //O
 void morseDash();
 void morseDash();
 void morseDash();
 delay(6*dot);
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




