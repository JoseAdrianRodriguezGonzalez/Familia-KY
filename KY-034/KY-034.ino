int LED=7;
void setup() {
  // put your setup code here, to run once:
pinMode(LED,OUTPUT);
}

void loop() {
  digitalWrite(LED,HIGH);
  delay(2000);
  digitalWrite(LED,LOW);
  delay(2000);
}
