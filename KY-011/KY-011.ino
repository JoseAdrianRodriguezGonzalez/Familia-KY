int redpin =3; // pin for red signal
int greenpin = 2; // pin for green signal
int val;

void setup() {
  pinMode(redpin, OUTPUT);
  pinMode(greenpin, OUTPUT);
}

void loop() {
  digitalWrite(redpin,HIGH);
}
