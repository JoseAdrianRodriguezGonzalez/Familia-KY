int SENSOR=7;
int LED=13;
int ESTADO;
void setup() {
  // put your setup code here, to run once:
pinMode(SENSOR,INPUT);
pinMode(LED,OUTPUT);
}

void loop() {
ESTADO=digitalRead(SENSOR);
digitalWrite(LED,!ESTADO);
delay(500);
}
