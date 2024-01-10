#define IRledPin 12
#define IRSend 2
#define NumIRsignals 76
      
int IRsignal[] = {
// ON, OFF (in 10's of microseconds)
  922, 466,
  54, 62,
  56, 60,
  56, 62,
  56, 176,
  54, 62,
  56, 62,
  54, 62,
  56, 62,
  54, 176,
  56, 176,
  54, 176,
  58, 60,
  58, 174,
  54, 176,
  58, 174,
  54, 176,
  56, 176,
  58, 60,
  56, 174,
  56, 62,
  54, 62,
  56, 62,
  58, 58,
  56, 62,
  54, 62,
  58, 174,
  58, 58,
  56, 176,
  58, 172,
  56, 176,
  58, 174,
  54, 178,
  56, 4022,
  920, 236,
  58, 3396,
  924, 232,
  58, 0};
  
void setup(void) {
  Serial.begin(9600); 
  pinMode(IRledPin, OUTPUT);
  pinMode(IRSend, INPUT);
  digitalWrite(IRledPin, LOW);
  digitalWrite(IRSend, HIGH);
  
}

void loop() {
  if (digitalRead(IRSend) == LOW) {
      Serial.println("SENDING SIGNAL!");
      for (int i = 0; i < NumIRsignals; i+=2) { 
        pulseIR(IRsignal[i]*10);  
        delayMicroseconds(IRsignal[i+1]*10); 
      } 
      delay(1000);
  }
}

void pulseIR(long microsecs) {
  cli();
  while (microsecs > 0) {
   digitalWrite(IRledPin, HIGH); 
   delayMicroseconds(10); 
   digitalWrite(IRledPin, LOW); 
   delayMicroseconds(10); 
   microsecs -= 26;
  }
  sei();
}
