//  _ ___ _______     ___ ___ ___  ___ _   _ ___ _____ ___ 
// / |_  )__ /   \   / __|_ _| _ \/ __| | | |_ _|_   _/ __| 
// | |/ / |_ \ |) | | (__ | ||   / (__| |_| || |  | | \__ \ 
// |_/___|___/___/   \___|___|_|_\\___|\___/|___| |_| |___/ 
// 
// Semáforo de 2 tempos
// 
// Made by Ricardo Barantini
// License: MIT
// Downloaded from: https://circuits.io/circuits/4931785-semaforo-de-2-tempos

int r1 = 7;
int y1 = 6;
int g1 = 5;

int r2 = 10;
int y2 = 9;
int g2 = 8;

void setup() {
  pinMode(r1, OUTPUT);
  pinMode(y1, OUTPUT);
  pinMode(g1, OUTPUT);
  pinMode(r2, OUTPUT);
  pinMode(y2, OUTPUT);
  pinMode(g2, OUTPUT);
}

void loop() {
  digitalWrite(r1, HIGH); // vermelho 1 acende
  digitalWrite(g2, HIGH); // verde 2 acende
  delay(3000);            // 3 segundos
  digitalWrite(g2, LOW);  // verde 2 apaga
  digitalWrite(y2, HIGH); // amarelho 2 acende
  delay(2000);            // 2 segundos
  digitalWrite(r1, LOW);  // vermelho 1 apaga
  digitalWrite(y2, LOW);  // amarelo 2 apaga
  digitalWrite(r2, HIGH); // vermelho 2 apaga
  digitalWrite(g1, HIGH); // verde 1 acende
  delay(5000);            // 5 segundos
  digitalWrite(g1, LOW);  // verde 1 apaga
  digitalWrite(y1, HIGH);
  delay(2000);
  digitalWrite(y1, LOW);
  digitalWrite(r2, LOW);
}
