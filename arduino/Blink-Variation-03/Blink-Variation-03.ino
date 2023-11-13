int dot = 500;
int dash = 3*dot;

void setup() { 
 // put your setup code here, to run once:
 pinMode(LED_BUILTIN, OUTPUT);

}

void loop() {
  //M
  digitalWrite(13, 1);  
  delay(dash);
  digitalWrite(13, 0); 
  delay(dot);
  digitalWrite(13, 1);  
  delay(dash);
  digitalWrite(13, 0); 
  delay(dash);
  //A
  digitalWrite(13, 1);  
  delay(dot);
  digitalWrite(13, 0); 
  delay(dot);
  digitalWrite(13, 1);  
  delay(dash);
  digitalWrite(13, 0); 
  delay(dash);
  //T
  digitalWrite(13, 1);  
  delay(dash);
  digitalWrite(13, 0); 
  delay(dash);
  //E
  digitalWrite(13, 1);  
  delay(dot);
  digitalWrite(13, 0); 
  delay(dash);
  //O
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
