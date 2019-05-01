void setup() {
  pinMode(9, INPUT); // pino com botão como entrda
  pinMode(12, OUTPUT); // pino com led como saída
}

void loop() {
  if (digitalRead(9) == HIGH) { // se botão pressionado
    digitalWrite(12, HIGH); // acende led
  }
  else {
    digitalWrite(12, LOW);
  }
}
