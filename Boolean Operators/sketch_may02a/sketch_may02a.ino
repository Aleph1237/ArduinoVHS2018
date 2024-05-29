void setup() {
  // put your setup code here, to run once:
pinMode(13,OUTPUT);
pinMode(2, INPUT);
pinMode(3, INPUT);
pinMode(4, INPUT);
digitalWrite(13,LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
int pin2 = !digitalRead(2);
int pin3 = !digitalRead(3);
int pin4 = !digitalRead(4);
if(((pin2 && pin3) || (pin3 && pin4) || (pin2 && pin4) == HIGH) && ((pin2 && pin3 && pin4) != HIGH)){
  digitalWrite(13, HIGH);
}
else{
  digitalWrite(13, LOW);
}
}
