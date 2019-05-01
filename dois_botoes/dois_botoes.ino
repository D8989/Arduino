int b1 = 9;
int b2 = 6;

int led1 = 12;
int led2 = 8;

void setup() {
  pinMode(b1, INPUT); // botão 1
  pinMode(b2, INPUT); // botão 2

  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);

}

void loop() {
  if(digitalRead(b1) == HIGH){
    acenderLed(led1);
  }
  else {
    apagarLed(led1);
  }

  if(digitalRead(b2) == LOW){
    acenderLed(led2); 
  }
  else {
    apagarLed(led2);
  }
}

void acenderLed(int led){
  digitalWrite(led, HIGH);
}

void apagarLed(int led){
  digitalWrite(led, LOW);
}
