int sensor=3;
int ESTADO;
void setup() {
  pinMode(3,INPUT);
  Serial.begin(9600);
}

void loop() {
  ESTADO=digitalRead(sensor);
  if(ESTADO==HIGH){
    Serial.println("¡Hay fuego!");
  }
  else{
    Serial.println("No hay fuego");
  }
  delay(1000);
}
