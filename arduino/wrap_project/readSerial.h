 void readSerial() {

    if (Serial.available()>0){
    String word = Serial.readString();
    word.trim();
    Serial.println(word);
    Serial.println("Longitud del string: ");
    Serial.println(word.length());
    decide(word);
    }
  }

void decide (String command){
  
    if (command.equals("play")) {
        playMusic();
      return;
    }
    if (command.equals("stop")){
        stopMusic();
    }
    if (command.startsWith("morse")){
      String sendToMorse = command.substring(5);
        outputMorse(sendToMorse);
    }
    if (command.equals("Cook")){
      String sendToCook = command.substring(4);
        cookSomething();
    }
 }

