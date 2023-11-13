//Serial Reader 4
int bread = 1;
int garlic = 0;
int tomato = 1;
int milk = 2;
int rice = 0;
bool cinnamon = true;
bool oil = true;
double salt = 1;
 
void setup() {
 Serial.begin(9600);
}
 
void loop() {
 String input = Serial.readString();
 if (input != "") {
  Serial.println();
 Serial.println("You have wright: " + input);
 input.trim();
 decide(input);
 }
}
 
 void decide(String input) {
   Serial.println("We are deciding");
 if (input == "cook") {
 cook();
 }
 else if(input == "bread") {
  bread++;
 }
 else if(input == "garlic") {
  garlic++;
 }
  else if(input == "salt") {
  salt++;
 }
 else if(input == "tomato") {
  tomato++;
 }
  if (input == "prepare") {
  prepareRicepudding();
}
 else if(input == "rice") {
    rice++;
  }
else if(input == "milk") {
    milk++;
  }
else if(input == "cinnamon") {
    cinnamon++;
  }
 else if (input == "show"){
  Serial.println("These are the ingredients that we have");
  Serial.print(bread);
  Serial.println("bread");
  Serial.println(garlic);
  Serial.println("garlic");
  Serial.println(tomato);
  Serial.println("tomato");
  Serial.println(milk);
  Serial.println("milk");
  Serial.println(rice);
  Serial.println("rice");
  Serial.println(salt);
  Serial.println("salt");
  if(oil){Serial.println("We have oil");}
  else{Serial.println("We don't have oil");}
  if(cinnamon){Serial.println("We have cinnamon");}
  else{Serial.println("We don't have cinnamon");}
 }

 }
void cook() {
 Serial.println("We are cooking");
 if (bread >= 1 && garlic >= 1 && salt >= 0.25 && tomato >= 1 && oil ) {
 Serial.println("you have bread con tomato");
 bread--;
 garlic--;
 salt = salt - 0.25;
 tomato--;
 }
 }

 void prepareRicepudding() {
   Serial.println("We are preparing Rice pudding");
 if (rice >= 1 && milk >= 2 && cinnamon) {
  Serial.println("you have cooked Rice pudding");
  rice = rice--;
  milk = milk - 2;
 }
 }