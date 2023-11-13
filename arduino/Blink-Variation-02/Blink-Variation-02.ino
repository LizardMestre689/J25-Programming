void setup() {
  
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(13, 1);  
  delay(1500);                  
  digitalWrite(13, 0);   
  delay(1000);      
  digitalWrite(13, 1);  
  delay(500);                  
  digitalWrite(13, 0);   
  delay(1000);      
}

 void loop() {
  
  digitalWrite(13, 1);  
  delay(125);                     
  digitalWrite(13, 0);   
  delay(125);
  digitalWrite(13, 1);  
  delay(125);                     
  digitalWrite(13, 0);   
  delay(125);
  digitalWrite(13, 1);  
  delay(125);                     
  digitalWrite(13, 0);   
  delay(125);
  digitalWrite(13, 1);  
  delay(125);                     
  digitalWrite(13, 0);   
 
}