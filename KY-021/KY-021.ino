int ESTADO;
int LED=7;
int ky21=2;
void setup() {
pinMode(ky21,INPUT);
pinMode(LED,OUTPUT);
}

void loop() {
  ESTADO=digitalRead(ky21);
  if(ESTADO==HIGH){
    digitalWrite(LED,LOW);
  }
  else{
    digitalWrite(LED,HIGH);
  }
}
