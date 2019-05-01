const int buzzer = 10;

const int c = 261;
const int d = 293;
const int e = 329;
const int f = 349;
const int f_s = 370;
const int g = 391;
const int a = 440;
const int b = 493;

int passo = 500;

void setup() {
  pinMode(buzzer, OUTPUT);
}

void loop() {
  pausar(passo*2);
  tocar(g, passo);
  tocar(a, passo);
  tocar(b, passo*2);
  tocar(d, passo*2);
  tocar(d, passo*2);
  tocar(b, passo*2);
  tocar(c, passo*2);
  tocar(c, passo*2);
  pausar(passo*2);
  tocar(g, passo);
  tocar(a, passo);
  tocar(b, passo*2);
  tocar(d, passo*2);
  tocar(d, passo*2);
  tocar(c, passo*2);
  tocar(b, passo*4);

  pausar(passo);
  tocar(g, passo);
  tocar(g, passo);
  tocar(a, passo);
  tocar(b, passo*2);
  tocar(d, passo*2);
  pausar(passo);
  tocar(d, passo);
  tocar(c, passo);
  tocar(b, passo);
  tocar(g, passo*2);
  tocar(c, passo*2);
  pausar(passo);
  tocar(c, passo);
  tocar(b, passo);
  tocar(a, passo);
  tocar(a, passo*2);
  tocar(b, passo*2);
  pausar(passo);
  tocar(a, passo);
  tocar(a, passo);
  tocar(g, passo);
  tocar(g, passo*2);
  pausar(passo*2);

  pausar(passo);
  tocar(g, passo);
  tocar(g, passo);
  tocar(a, passo);
  tocar(b, passo*2);
  tocar(d, passo*2);
  pausar(passo);
  tocar(d, passo);
  tocar(c, passo);
  tocar(b, passo);
  tocar(g, passo*2);
  tocar(c, passo*2);
  pausar(passo);
  tocar(c, passo);
  tocar(b, passo);
  tocar(a, passo);
  tocar(a, passo*2);
  tocar(b, passo*2);
  pausar(passo);
  tocar(a, passo);
  tocar(a, passo);
  tocar(g, passo);

  for(int i=0; i<2; ++i){
    tocar(g, passo*2);
    tocar(f_s, passo);
    tocar(d, passo);
    tocar(e, passo);
    tocar(c, passo);
    tocar(d, passo);
    tocar(b, passo);
    tocar(c, passo);
    tocar(a, passo);
    tocar(b, passo);
    tocar(g, passo);
    tocar(a, passo);
    tocar(g, passo);
    tocar(e, passo);
    tocar(g, passo);
  }
  tocar(g, passo*2);
  pausar(passo*2);

  delay(5000);
}

void tocar(int nota, int tempo){
  tone(buzzer, nota);
  delay(tempo);
  noTone(buzzer);
}

void pausar(int tempo){
  delay(tempo);
}
