//  _ ___ _______     ___ ___ ___  ___ _   _ ___ _____ ___ 
// / |_  )__ /   \   / __|_ _| _ \/ __| | | |_ _|_   _/ __| 
// | |/ / |_ \ |) | | (__ | ||   / (__| |_| || |  | | \__ \ 
// |_/___|___/___/   \___|___|_|_\\___|\___/|___| |_| |___/ 
// 
// Luzes
// 
// Made by ricardobarantini ricardobarantini
// License: MIT
// Downloaded from: https://circuits.io/circuits/4923343-luzes

// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int laranja = 13;
int verde = 12;
int amarelo = 11;
int vermelho = 10;

// the setup routine runs once when you press reset:
void setup() {
  // initialize the digital pin as an output.
  pinMode(laranja, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(amarelo, OUTPUT);
  pinMode(vermelho, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(vermelho, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);               // wait for a second
  digitalWrite(amarelo, HIGH);
  delay(500);
  digitalWrite(verde, HIGH);
  delay(500);
  digitalWrite(laranja, HIGH);
  digitalWrite(vermelho, LOW);    // turn the LED off by making the voltage LOW
  delay(500);               // wait for a second
  digitalWrite(amarelo, LOW);
  delay(500);
  digitalWrite(verde, LOW);
  delay(500);
  digitalWrite(laranja, LOW);
}
