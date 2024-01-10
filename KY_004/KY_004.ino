const int led=2;  //Se declara el led
 int puls=7;    //Se declara el pulsador
bool ESTADO;    //Se declara el estado
void setup() {
  pinMode(led,OUTPUT);    //El led es salida
  pinMode(puls,INPUT);    //El pulsador es entrada
}

void loop() {
  while(digitalRead(puls)==HIGH){   //Mientra se lea que el pulsador está en alto
    }
    ESTADO=digitalRead(led);    //Se lee lo que hay dentro del led
    digitalWrite(led,!ESTADO);    //Se escribe lo contrario del valor leído del led
    while(digitalRead(puls)==LOW){    //Mientras el pulsador esté en bajo
    }
  }
