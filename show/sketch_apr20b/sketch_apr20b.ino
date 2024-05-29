const int ledO = 13;//orange
const int ledG = 12;//green
const int ledR = 11;//red
int counta = 0;
int countb = 0;
int countc = 0;
const int tiny = 250;
const int small = 500;
const int large =1000;

void setup() {
  // put your setup code here, to run once:
pinMode(ledO, OUTPUT);
pinMode(ledG, OUTPUT);
pinMode(ledR, OUTPUT);
digitalWrite(ledO, LOW); 
digitalWrite(ledG, LOW);
digitalWrite(ledR, LOW);
}

void loop() {
  while(counta<3)
  {
    digitalWrite(ledO, HIGH); //all on, all off, out high mid off, out off mid high.
    delay(large);
    digitalWrite(ledR, HIGH);
    delay(small);
    digitalWrite(ledG, HIGH);
    delay(small);
    digitalWrite(ledO, LOW);
    digitalWrite(ledR, LOW);
    digitalWrite(ledG, LOW);
    delay(large);
    digitalWrite(ledO, HIGH);
    digitalWrite(ledG, LOW);
    digitalWrite(ledR, HIGH);
    delay(small);
    digitalWrite(ledO, LOW);
    digitalWrite(ledG, HIGH);
    digitalWrite(ledR, LOW);
    counta ++;
  }
  while (countb<3)
  {
    digitalWrite(ledO, HIGH);
    delay(tiny);
    digitalWrite(ledO, LOW);
    delay(small);
    digitalWrite(ledG, HIGH);
    delay(tiny);
    digitalWrite(ledG, LOW);
    delay(small);
    digitalWrite(ledR, HIGH);
    delay(tiny);
    digitalWrite(ledR, LOW);
    delay(large);
    digitalWrite(ledR, HIGH);
    delay(tiny);
    digitalWrite(ledR, LOW);
    delay(small);
    digitalWrite(ledG, HIGH);
    delay(tiny);
    digitalWrite(ledG, LOW);
    delay(small);
    digitalWrite(ledO, HIGH);
    delay(tiny);
    digitalWrite(ledO, LOW);
    countb ++;
  }
  while (countc<3)
  {
    digitalWrite(ledO, HIGH);
    delay(tiny);
    digitalWrite(ledG, HIGH);
    delay(tiny);
    digitalWrite(ledR, HIGH);
    delay(small);
    digitalWrite(ledO, LOW);
    delay(tiny);
    digitalWrite(ledG, LOW);
    delay(tiny);
    digitalWrite(ledR, LOW);
    delay(large);
    digitalWrite(ledR, HIGH);
    delay(tiny);
    digitalWrite(ledG, HIGH);
    delay(tiny);
    digitalWrite(ledO, HIGH);
    delay(small);
    digitalWrite(ledR, LOW);
    delay(tiny);
    digitalWrite(ledG, LOW);
    delay(tiny);
    digitalWrite(ledO, LOW);
    countc ++;
  }
}
