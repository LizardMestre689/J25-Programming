void setup() {
  Serial.begin(9600);
  for (int numeroProblema = 1; numeroProblema <= 100; numeroProblema++) {
    int sum = 0;
    int temp = numeroProblema;

    while (temp > 0) {
      sum += temp % 10;
      temp /= 10;
    }

    if (sum == 10 || sum == 5) {
      Serial.println(numeroProblema);
    }
  }
}

void loop() {

}
