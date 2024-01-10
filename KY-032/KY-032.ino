int sensor=7;
int ESTADO;
int LED= 2;
void setup() {
  // put your setup code here, to run once:
pinMode(sensor,INPUT);
pinMode(LED,OUTPUT);
}

void loop() {
  ESTADO=digitalRead(sensor);
  if(ESTADO==HIGH){
    digitalWrite(LED,HIGH);
  }
  else{
    digitalWrite(LED,LOW);
  }
  delay(500);
}
