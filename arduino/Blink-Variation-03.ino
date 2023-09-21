int dotDuration = 500;

void setup() { 
 // put your setup code here, to run once:
 pinMode(LED_BUILTIN, OUTPUT);

}

void loop() {
  //M
  digitalWrite(13, 1);  
  delay(dotDuration*3);
  digitalWrite(13, 0); 
  delay(dotDuration);
  digitalWrite(13, 1);  
  delay(dotDuration*3);
  digitalWrite(13, 0); 
  delay(dotDuration*3);
  //A
  digitalWrite(13, 1);  
  delay(dotDuration);
  digitalWrite(13, 0); 
  delay(dotDuration);
  digitalWrite(13, 1);  
  delay(dotDuration*3);
  digitalWrite(13, 0); 
  delay(dotDuration*3);
  //T
  digitalWrite(13, 1);  
  delay(dotDuration*3);
  digitalWrite(13, 0); 
  delay(dotDuration*3);
  //E
  digitalWrite(13, 1);  
  delay(dotDuration);
  digitalWrite(13, 0); 
  delay(dotDuration*3);
  //O
  digitalWrite(13, 1);  
  delay(dotDuration*3);
  digitalWrite(13, 0); 
  delay(dotDuration);
  digitalWrite(13, 1);  
  delay(dotDuration*3);
  digitalWrite(13, 0); 
  delay(dotDuration);
  digitalWrite(13, 1);  
  delay(dotDuration*3);
  digitalWrite(13, 0); 
  delay(dotDuration*3);
  //Space

}
