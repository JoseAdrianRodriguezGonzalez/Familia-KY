int tiltPin = 2;      // pin number for tilt switch signal 
int ledPin =  13;     // pin number of LED 
int tiltState = 0;    // variable for reading the tilt switch status

void setup() {  
  pinMode(ledPin, OUTPUT);  // set the LED pin as output      
  pinMode(tiltPin, INPUT);  // set the tilt switch pin as input
}

void loop(){
  // get the tilt switch state
  tiltState = digitalRead(tiltPin);

  // check if tilt switch is tilted.
  if (tiltState == HIGH) {     
    digitalWrite(ledPin, HIGH);  
  } 
  else {
    digitalWrite(ledPin, LOW); 
  }
}
