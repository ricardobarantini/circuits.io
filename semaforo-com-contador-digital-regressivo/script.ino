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

void displayDigit(int digit) {
	if (digit != 1 && digit != 4) {
		digitalWrite(a, LOW);
	}

	if (digit != 5 && digit != 6) {
		digitalWrite(b, LOW);
	}

	if (digit != 2) {
		digitalWrite(c, LOW);
	}

	if (digit != 1 && digit != 4 && digit != 7) {
		digitalWrite(d, LOW);
	}

	if (digit == 2 || digit == 6 || digit == 8 || digit == 0) {
		digitalWrite(e, LOW);
	}

	if (digit != 1 && digit != 2 && digit != 3 && digit != 7) {
		digitalWrite(f, LOW);
	}

	if (digit != 0 && digit != 1 && digit != 7) {
		digitalWrite(g, LOW);
	}
}

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
	digitalWrite(vermelho, HIGH);
	for (int i = 5; i >= 0; i--) {
		displayDigit(i);
		delay(1000);
		turnOff();
	}
	digitalWrite(vermelho, LOW);
	digitalWrite(verde, HIGH);
	for (int i = 5; i >= 0; i--) {
		displayDigit(i);
		delay(1000);
		turnOff();
	}
	digitalWrite(verde, LOW);
	digitalWrite(amarelo, HIGH);
	delay(2000);
	digitalWrite(amarelo, LOW);
}