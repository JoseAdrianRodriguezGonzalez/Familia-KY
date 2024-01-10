int sensor;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
sensor=analogRead(A0);
Serial.println(sensor);
delay(500);
}
