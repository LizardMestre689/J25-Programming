
  void setup(){

    int grades [] = {9,5,8,3,2,9,3,1,7};
  int min = grades[0];
  for (int i = 0; i < 8; i++) {
    if (grades[i] < min) {
     min = grades[i];
     //Writh the min number with a delay
  Serial.println(i);
  delay(500);
    }
  }
}

void loop(){
}
