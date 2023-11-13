//Serial Reader
int pan = 1;
int ajo = 0;
int sal = 1;
bool oil = true;
double tomate = 1;
 
void setup() {
 Serial.begin(9600);
}
 
void loop() {
 String input = Serial.readString();
 if (input != "") {
  Serial.println();
 Serial.println("Tu as escrito: " + input);
 input.trim();
 decide(input);
 }
}
 
 void decide(String input) {
 if (input == "cook") {
 cook();
 }
 if(input == "pan") {
  pan++;
 }
  if(input == "ajo") {
  ajo++;
 }
  if(input == "sal") {
  sal++;
 }
  if(input == "tomate") {
  tomate++;
 }
 }

void cook() {
 Serial.println("We are cooking");
 if (pan >= 1 && ajo >= 1 && sal >= 0.25 && tomate >= 1 && oil ) {
 Serial.println("you have Pan con tomate");
 pan = pan - 1;
 ajo--;
 sal = sal - 0.25;
 tomate--;
 }
}
