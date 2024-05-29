const int button = 2;
const int led = 13;

void setup() {
  pinMode(button, INPUT_PULLUP);
  pinMode(led, OUTPUT);
  digitalWrite(led, LOW);
}   

void loop() {
  if (digitalRead (button) == LOW) {
    digitalWrite(led, HIGH);

  }
  else
  {
    digitalWrite(led, LOW);
  }
}
