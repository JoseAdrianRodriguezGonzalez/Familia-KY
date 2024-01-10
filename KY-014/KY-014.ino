float factor=0.75;
float maximo=0;
int minimoEntreLatidos=300;
float valorAnterior=500;
int latidos=0;

void setup() {
  pinMode(13,OUTPUT);
  Serial.begin(9600);
  Serial.println("Iniciando mediciones");
}

void loop() {
static unsigned long tiempoLPM= millis();
static unsigned long entreLatidos= millis();

int valorLeido =analogRead(A0);

float valorFiltrado =factor*valorAnterior+(1-factor)*valorLeido;
float cambio=valorFiltrado-valorAnterior;
valorAnterior = valorFiltrado;

if((cambio>=maximo)&&(millis()>entreLatidos+minimoEntreLatidos)){
  maximo= cambio;
  digitalWrite(13,HIGH);
  latidos++;
}
else{
  digitalWrite(13,LOW);
}
maximo=maximo*0.97;
if(millis()>=tiempoLPM+15000){
  Serial.print("Latidos por minuto: ");
  Serial.println(latidos*4);
  latidos=0;
  tiempoLPM=millis();
}
delay(50);
}
