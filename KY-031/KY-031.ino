void setup() {
  Serial.begin(9600);
}

void loop() {
int  ESTADO=analogRead(A0);
Serial.println(ESTADO);
  delay(500);
}
