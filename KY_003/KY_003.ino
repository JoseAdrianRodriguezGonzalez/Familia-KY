const int hall=2;   //Se declara el sensor
const int led=3;    //Se declara el led
bool ESTADO;    //Se declara el estado
void setup() {
pinMode(hall,INPUT);    //Se declara el sensor
pinMode(led,OUTPUT);    //Se declara el led
}

void loop() {
  ESTADO=digitalRead(hall);   //Se lee el estado del sensor
  digitalWrite(led, !ESTADO);   //Se enciende o apaga conforme el estado del sensor
}
