//  _ ___ _______     ___ ___ ___  ___ _   _ ___ _____ ___ 
// / |_  )__ /   \   / __|_ _| _ \/ __| | | |_ _|_   _/ __| 
// | |/ / |_ \ |) | | (__ | ||   / (__| |_| || |  | | \__ \ 
// |_/___|___/___/   \___|___|_|_\\___|\___/|___| |_| |___/ 
// 
// Semáforo com contador digital regressivo
// 
// Made by Ricardo Barantini
// License: MIT
// Downloaded from: https://circuits.io/circuits/4948059-semaforo-com-contador-digital-regressivo

// Seven segment display
int a = 2;
int b = 3;
int c = 4;
int d = 5;
int e = 6;
int f = 8;
int g = 9;

// Semáforo
int vermelho = 12;
int amarelo = 11;
int verde = 10;

// Acende segmento baseado no dígito
void displayDigit(int digit) {
  // a
  if (digit != 1 && digit != 4) {
    digitalWrite(a, LOW);
  }

  // b
  if (digit != 5 && digit != 6) {
    digitalWrite(b, LOW);
  }

  // c
  if (digit != 2) {
    digitalWrite(c, LOW);
  }

  // d
  if (digit != 1 && digit != 4 && digit != 7) {
    digitalWrite(d, LOW);
  }

  // e
  if (digit == 2 || digit == 6 || digit == 8 || digit == 0) {
    digitalWrite(e, LOW);
  }

  // f
  if (digit != 1 && digit != 2 && digit != 3 && digit != 7) {
    digitalWrite(f, LOW);
  }

  // g
  if (digit != 0 && digit != 1 && digit != 7) {
    digitalWrite(g, LOW);
  }
}

// Apaga todos segmentos
void turnOff() {
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
}

void setup() {
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(vermelho, OUTPUT);
  pinMode(amarelo, OUTPUT);
  pinMode(verde, OUTPUT);
}

void loop() {
  // Acende led vermelho
  digitalWrite(vermelho, HIGH);

  // Contador de 5 segundos
  for (int i = 5; i >= 0; i--) {
    displayDigit(i);
    delay(1000);
    turnOff();
  }

  // Apaga led vermelho
  digitalWrite(vermelho, LOW);

  // Acende led verde
  digitalWrite(verde, HIGH);

  // Contador de 5 segundos
  for (int i = 5; i >= 0; i--) {
    displayDigit(i);
    delay(1000);
    turnOff();
  }

  // Apaga led verde
  digitalWrite(verde, LOW);

  // Acende led amarelo
  digitalWrite(amarelo, HIGH);

  // Delay de 2 segundos
  delay(2000);

  // Apaga led amarelo
  digitalWrite(amarelo, LOW);
}
