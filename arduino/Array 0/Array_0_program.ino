
void setup() {
  Serial.begin(9600);

}

void loop(){
  // Intercambiar los dos primeros caracteres de la cadena
   String WebiWabo = "WebiWabo";
  Serial.println(WebiWabo);

  char temp1 = WebiWabo[1];
  WebiWabo[1] = WebiWabo[0];
  WebiWabo[0] = temp1;


// Intercambiamos de lugar la letra (a y i)

  char temp2 = WebiWabo[4];
  WebiWabo[4] = WebiWabo[6];
  WebiWabo[6] = temp2;
  Serial.println(WebiWabo);

// Sustituimos la segunda (B) por una (V)

delay(2000);

}
