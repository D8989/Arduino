int frequencia = 1000;
const int pinoBuzzer = 8;
const int pinoBotao1 = 6;
const int pinoBotao2 = 5;

void setup() {
  pinMode(pinoBuzzer, OUTPUT);
  pinMode(pinoBotao1, INPUT_PULLUP);
  pinMode(pinoBotao2, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(pinoBotao1) == LOW) {
    frequencia = frequencia + 100;
  }

  if (digitalRead(pinoBotao2) == LOW){
    frequencia = frequencia - 100;
  }

  tone(pinoBuzzer, frequencia);
  delay(1000);
  noTone(pinoBuzzer);
  delay(1000);
}
