const int ledPin = 13;
const int onPin = 2;
const int offPin = 3;
const int sensorPin = 4;
int ledState = 0;
void setup() {
  pinMode(onPin, INPUT);
  pinMode(offPin, INPUT);
  pinMode(sensorPin, INPUT);
  pinMode(ledPin, OUTPUT);
  }
void loop() {

  if (digitalRead(sensorPin == HIGH));{
 digitalWrite(ledPin, HIGH);
  }
 else
 digitalWrite(ledPin, LOW);
 
 

}

    
