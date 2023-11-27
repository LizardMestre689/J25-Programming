void setup() {
  Serial.begin(9600);
  for (int numeroProblema = 1; numeroProblema <= 100; numeroProblema++) {
    if (numeroProblema % 10 == 3 || (numeroProblema / 10) % 10 == 3 || numeroProblema / 100 == 3) {
      Serial.println(numeroProblema);
    }
  }
}

void loop() {
  // Your loop code, if needed
}