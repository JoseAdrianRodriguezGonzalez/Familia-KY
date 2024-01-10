int buzzer =3;
void setup() {
  pinMode(buzzer, OUTPUT);
}

void loop() {
for(int i=0; i<=255;i++){
  analogWrite(buzzer,i);
  delay(50);
  analogWrite(buzzer,0);
  delay(50);
}
  }
