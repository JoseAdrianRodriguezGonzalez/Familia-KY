#define r 4
#define g 3
#define b 2
void setup() {
  // put your setup code here, to run once:
pinMode(r,OUTPUT);
pinMode(g,OUTPUT);
pinMode(b,OUTPUT);

}

void loop() {
  for(int i=0; i<=255;i++){
  analogWrite(r,i);
  delay(50);
}
  for(int i=0; i<=255;i++){
  analogWrite(g,i);
  delay(50);

}
 for(int i=0; i<=255;i++){
  analogWrite(b,i);
  delay(50);

}
}
