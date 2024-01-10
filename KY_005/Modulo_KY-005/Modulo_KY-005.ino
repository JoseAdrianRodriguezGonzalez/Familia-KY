/*
 * AFPT - Arduino Fácil Para Todos
 * 
 * Prueba Arduino UNO + KY005
 * 
 * Modulo_KY-005.ino
 * 
 * www.fantasystudios.es/arduino
 * 
 * Creado el 19 de Abril de 2020
 * Por Manuel Peláez
 * 
 */


//Cargamos las librerias necesarias
#include <IRremote.h>
#include <IRremoteInt.h>

//Inicializamos la libreria como emisor IR
IRsend irsend;

//declaramos las variables con las entradas de los pulsadores
int pulsador_1 = 6;
int pulsador_2 = 7;

//declaramos las variables que usaremos para leer el estado de los pulsadores
int estado_pulsador_1 = 0;
int estado_pulsador_2 = 0;


void setup() {
  // put your setup code here, to run once:
  //inicializamos la comunicación serie a 9600 baudios
  Serial.begin(9600);

  Serial.println("Emisor inicializado");

  //configuramos los pines de entrada y el pin de salida 13
  pinMode(pulsador_1, INPUT);
  pinMode(pulsador_2, INPUT);
  pinMode(LED_BUILTIN, OUTPUT);
}


void loop() {
  // put your main code here, to run repeatedly:
  //leemos el estado de los pulsadores y lo almacenamos
  estado_pulsador_1 = digitalRead(pulsador_1);
  estado_pulsador_2 = digitalRead(pulsador_2);

  //Si los dos pulsadores estan pulsados marcamos el error y no ejecutamos el programa
  if (estado_pulsador_1 & estado_pulsador_2) {
    Serial.println("Error, pulsados los dos botones");
  }
  //Si no hemos pulsado ningun pulsador o solo uno seguimos con el programa
  else {
    //Si hemos pulsado en pulsador 1 mandamos el codigo a90 o POWER en el codigo IR Sony
    if (!estado_pulsador_1) {
    digitalWrite(LED_BUILTIN, HIGH);                              //encendemos el led de la salida 13
    Serial.println("Emisión código 0xa90 - POWER para TV Sony");  //mandamos el mensaje de emision al puerto serie
    //enviamos el codigo a90 tres veces con una pausa de 100ms entre ellas
    for(int i=0;i<3;i++) {
      irsend.sendSony(0xa90, 12);
      delay(100);
      }
    }
    //Si hemos pulsado en pulsador 2 mandamos el codigo a70 o MENU en el codigo IR Sony
    else if (!estado_pulsador_2) {
      digitalWrite(LED_BUILTIN, HIGH);                            //encendemos el led de la salida 13
      Serial.println("Emisión código 0x070 - MENU para TV Sony"); //mandamos el mensaje de emision al puerto serie
      //enviamos el codigo 070 tres veces con una pausa de 100ms entre ellas
      for(int i=0;i<3;i++) {
        irsend.sendSony(0x070, 12);
        delay(100);
        }
    }
    //Si no hemos pulsado ningun pulsador apagamos el led de la salida 13 y no enviamos nada por IR
    else {
    digitalWrite(LED_BUILTIN, LOW);
    }
  }

delay(1);   // con esto ganamos estabilidad en la ejecución del programa

}
