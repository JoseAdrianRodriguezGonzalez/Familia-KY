#define puls 2
#define laser 3
int ESTADO;
void setup() {
 pinMode(puls,INPUT);
 pinMode(laser,OUTPUT);
}

void loop() {
 while(digitalRead(puls)==HIGH){
  
 }
 ESTADO=digitalRead(laser);
 digitalWrite(laser, !ESTADO);
 while(digitalRead(puls)==LOW){
 }
}
