#define Sen 2 //Se define el pin del sensor
#define led 3   //Se define el pin del led
bool ESTADO;    //Se crea el estado
void setup() {
  pinMode(Sen,INPUT);   //Se declara como entrada el sensor
  pinMode(led,OUTPUT);  //Se declara el led como salida
}

void loop() {
  ESTADO=digitalRead(Sen);    //El estado será igual a lo que se lea dcdel sensor
  if(ESTADO==LOW){    //Si el estado es bajo
    digitalWrite(led,HIGH);   //Se enciennde el led
delay(1000);    //Por 1 segundo
}
digitalWrite(led,LOW);    //Sino, se apaga
}
