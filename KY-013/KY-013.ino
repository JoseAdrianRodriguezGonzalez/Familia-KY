int Vo;   //Se crea una variable Vo
float R1 = 100000; // resistencia fija del divisor de tension 
float logR2, R2, TEMPERATURA;   //Se declaran 3 variables, R2 es la resitencia del termistor
float c1 = 2.114990448e-03, c2 = 0.3832381228e-04, c3 = 5.228061052e-07;    //Son constantes
// coeficientes de SH en pagina: 
//http://www.thinksrs.com/downloads/programs/Therm%20Calc/NTCCalibrator/NTCcalculator.htm

void setup () {
Serial.begin (9600); // inicializa comunicacion serie a 9600 bps
}

void loop () {
  Vo = analogRead (A0); // lectura de A0
  R2 = R1 * (1023.0 / (float) Vo - 1.0); // conversion de tension a resistencia
  logR2 = log (R2); // logaritmo de R2 necesario para ecuacion
  TEMPERATURA = (1.0 / (c1 + c2 * logR2 + c3 * logR2 * logR2 * logR2)); // ecuacion SH
  TEMPERATURA = TEMPERATURA - 273.15; // Kelvin a Centigrados (Celsius)

  Serial.print ("Temperatura:"); // imprime valor en monitor serie
  Serial.print (TEMPERATURA);   //Se escribe la temperatura sacada dde las formulas de steinhard hard  Serial.println ("C"); 
  delay (500); // demora de medio segundo entre lecturas
}
