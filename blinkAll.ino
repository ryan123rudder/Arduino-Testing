void setup() {
  for(int i = 0; i <= 21; i++){
    pinMode(i, OUTPUT);
  }
}

void loop() {
  for(int i = 0; i <= 21; i++){
    digitalWrite(i, HIGH);
  }
  delay(50);
  for(int i = 0; i <= 21; i++){
    digitalWrite(i, LOW);
  }
  delay(50);
}
