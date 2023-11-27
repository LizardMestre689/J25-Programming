void setup() {
  Serial.begin(9600);
  for (int numeroProblema = 1; numeroProblema <= 100; numeroProblema++) {
    if (isPrime(numeroProblema)) {
      Serial.println(numeroProblema);
    }
  }
}

void loop() {
  // Your loop code, if needed
}

bool isPrime(int num) {
  if (num <= 1) {
    return false;
  }
  for (int i = 2; i <= sqrt(num); i++) {
    if (num % i == 0) {
      return false;
    }
  }
  return true;
}
