//  _ ___ _______     ___ ___ ___  ___ _   _ ___ _____ ___ 
// / |_  )__ /   \   / __|_ _| _ \/ __| | | |_ _|_   _/ __| 
// | |/ / |_ \ |) | | (__ | ||   / (__| |_| || |  | | \__ \ 
// |_/___|___/___/   \___|___|_|_\\___|\___/|___| |_| |___/ 
// 
// Contador de 7 segmentos
// 
// Made by Ricardo Barantini
// License: MIT
// Downloaded from: https://circuits.io/circuits/4946497-contador-de-7-segmentos

// Seven segment display
int a = 2;
int b = 3;
int c = 4;
int d = 5;
int e = 6;
int f = 8;
int g = 9;

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
}

void loop() {
  // Exibe do 0 ao 9 com intervalos de 1 segundo
  for (int i = 0; i < 10; i++) {
    displayDigit(i);
    delay(1000);
    turnOff();
  }
}
