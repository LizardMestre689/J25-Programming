int dot = 500;
int dash = 3*dot;

void setup() { 
 pinMode(LED_BUILTIN, OUTPUT);
}

 

void morse_m(){
  digitalWrite(13, 1);  
  delay(dash);
  digitalWrite(13, 0); 
  delay(dot);
  digitalWrite(13, 1);  
  delay(dash);
  digitalWrite(13, 0); 
  delay(dash);
}
  void morse_a(){
  digitalWrite(13, 1);  
  delay(dot);
  digitalWrite(13, 0); 
  delay(dot);
  digitalWrite(13, 1);  
  delay(dash);
  digitalWrite(13, 0); 
  delay(dash);
}
 void morse_t(){
 digitalWrite(13, 1);  
  delay(dash);
  digitalWrite(13, 0); 
  delay(dash);
}
 void morse_e(){
digitalWrite(13, 1);  
  delay(dot);
  digitalWrite(13, 0); 
 }
 void morse_o(){
  digitalWrite(13, 1);  
  delay(dash);
  digitalWrite(13, 0); 
  delay(dot);
  digitalWrite(13, 1);  
  delay(dash);
  digitalWrite(13, 0); 
  delay(dot);
  digitalWrite(13, 1);  
  delay(dash);
  digitalWrite(13, 0); 
  delay(dash);
 
}

 void loop(){
  morse_m();
  morse_a();
  morse_t();
  morse_e();
  morse_o();
 }


