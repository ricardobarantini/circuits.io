//  _ ___ _______     ___ ___ ___  ___ _   _ ___ _____ ___ 
// / |_  )__ /   \   / __|_ _| _ \/ __| | | |_ _|_   _/ __| 
// | |/ / |_ \ |) | | (__ | ||   / (__| |_| || |  | | \__ \ 
// |_/___|___/___/   \___|___|_|_\\___|\___/|___| |_| |___/ 
// 
// Led RGB
// 
// Made by ricardobarantini ricardobarantini
// License: MIT
// Downloaded from: https://circuits.io/circuits/4931576-led-rgb

// Pins
int r = 8;
int g = 10;
int b = 9;

void setup() {
  pinMode(r, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(b, OUTPUT);
}

void loop() {
  // Vermelho
  digitalWrite(r, HIGH);
  delay(1000);
  digitalWrite(r, LOW);
  
  // Verde
  digitalWrite(g, HIGH);
  delay(1000);
  digitalWrite(g, LOW);
  
  // Azul
  digitalWrite(b, HIGH);
  delay(1000);
  digitalWrite(b, LOW);
  
  // Amarelo
  digitalWrite(r, HIGH);
  digitalWrite(g, HIGH);
  delay(1000);
  digitalWrite(r, LOW);
  digitalWrite(g, LOW);
  
  // Ciano
  digitalWrite(g, HIGH);
  digitalWrite(b, HIGH);
  delay(1000);
  digitalWrite(g, LOW);
  digitalWrite(b, LOW);
  
  // Magenta
  digitalWrite(r, HIGH);
  digitalWrite(b, HIGH);
  delay(1000);
  digitalWrite(r, LOW);
  digitalWrite(b, LOW);
  
  // Branco
  digitalWrite(r, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(b, HIGH);
  delay(1000);
  digitalWrite(r, LOW);
  digitalWrite(g, LOW);
  digitalWrite(b, LOW);
}
