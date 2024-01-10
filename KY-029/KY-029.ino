int v=2;
int r=3;
void setup() {
  // put your setup code here, to run once:
pinMode(v,OUTPUT);
pinMode(r,OUTPUT);
}

void loop() {
  digitalWrite(v,HIGH);
  digitalWrite(r,LOW);
  delay(500);
  
  digitalWrite(v,LOW);
  digitalWrite(r,HIGH);
  delay(500);
  
  digitalWrite(v,HIGH);
  digitalWrite(r,HIGH);
  delay(500);
  
}
