//coking system 2 own recepie
int pan = 5;
int sal = 5;
bool oil = true;
double tomate = 5;

  void cookSomething() {
    String input = Serial.readString();
    if (input != "") {
      Serial.println();
      Serial.print("Has esctrio: ");
      Serial.println(input);
      input.trim();
      //decide(input);
    }
    Serial.println("You achived cook");
    if (pan >= 2 && sal >= 1 && tomate >= 0.5 && oil) {
      Serial.println("You have pan con tomate");
      pan = pan - 1;
      sal--;
      tomate = tomate - 0.5;

    }
  }
  void decide2(String input) {
    Serial.println("We are deciding");
    if (input == "cook") {
      cookSomething();
    }
    if (input == "pan") {
      pan++;
    }
    if (input == "sal") {
      sal++;
    }
    if (input == "tomate") {
      tomate++;
    }
  }
