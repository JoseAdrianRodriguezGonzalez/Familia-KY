#include <IRremote.h>   //Incluye la librería del sensor

int SENSOR =7;    //Se crea una variable entera denominada "sensor" conectado en el pin 7
IRrecv irrecv(SENSOR);    //Crea un objeto del tipo "IRrecv" llamado irrecv y se le adjudica la variable "SENSOR" y se determina el pin en el que esta, ya que la librería tiene la funcionalidad de recibir y emitir,por lo que ahora las estamos ocupando para recibir
decode_results codigo;    //Crea un objeto del tipo "decode_results" llamado codigo 


void setup(){
  Serial.begin(9600);   //Se inicializa el monitor serie
  irrecv.enableIRIn();    //Se inicializa la recpeción de datos del modulo
}

void loop(){
  if (irrecv.decode(&codigo)){  //Se consulta si hay datos decodificados ya disponibles  
  Serial.println(codigo.value, HEX);    //Se escribe el codigo y el valor en hexadecimal
  irrecv.resume();    //Permite resumir el proceso de aquisición del codigo
  }
  delay(100);   //Demora de 100 milisegundos
}
