//Serial Reader

void setup() {
 Serial.begin(9600);
}

void loop() {
String input = Serial.readString();
//local scope (Serial Input)
if(input!=""){
Serial.println();
Serial.println("You wirght:"+input);
input.trim();
decide(input);
}
}

void decide(String input){
  Serial.println("we are deciding with the input: "+input);
  if(input=="cook"){
    cook();
  }
}

void cook(){
  Serial.println("we are cooking");
}
