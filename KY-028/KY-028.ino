

int sensor = A0;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  int a = analogRead(sensor);
  //a = a + (a * 18 / 10);
  // put your main code here, to run repeatedly:    lcd.setCursor(3,0);
    Serial.println("Temp: ");
    Serial.print(GetTemperature(a));
    Serial.println(" C");
  delay(1000);
}



double GetTemperature(int v)
{
  double r = 5000.0;
  double a = 2.131553636e-3, b = 0.9226361101e-4, c = 7.066914635e-7;
  double Temp;
  Temp = log( r / (1023.0 / v - 1.0)); 
  Temp = 1.0 / (a + b*Temp + c*Temp*Temp*Temp);
  Temp = Temp - 273.15; // Convert Kelvin to Celcius
  return Temp;
}
