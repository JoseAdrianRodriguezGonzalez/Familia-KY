#include<OneWire.h>   //Se incluyen las librerías de onewire y dallas temperature, de la cual reduce el codigo
#include<DallasTemperature.h>
const int  pin =2;    //Está en el pin 2
OneWire Bus(pin);   //Se declara un objeto denominado "Bus" donde sus parametros son el pin 
DallasTemperature sensor(&Bus);   //Se instancia el "sensor" y se le da el bus
void setup() {
  Serial.begin(9600);   //Se inicializa el monitor serie
  sensor.begin(); //El sensor comienza
}

void loop() {
  sensor.requestTemperatures();   //El objeto sensor pide la temperatura
  float Temp = sensor.getTempCByIndex(0);   //Se cera una variable de la cual consigue el indice de temperatura
  Serial.print(Temp);   //Se imprimer la temperatura
  Serial.println(" C");   //Se imprime el"c"
  delay(1000);    //Una demor de 1 segundo1
}
