void setup() {
  Serial.begin(9600);
  for (int numeroProblema = 1; numeroProblema <= 100; numeroProblema++) {
    if (numeroProblema % 2 == 1 || numeroProblema % 6 == 0) {
      Serial.println(numeroProblema);
    }
  }
}

void loop() {
  // Your loop code, if needed
}