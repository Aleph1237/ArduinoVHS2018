 const int led = 13;
 const int small = 250;
 const int large = 1000;
 int counta = 0;
 int countb = 0;
 int countc = 0;

 void setup(){
  pinMode (led, OUTPUT);
  digitalWrite(led, LOW);
 }

void loop(){
  while(counta<3)
  {
    digitalWrite(led, HIGH);
    delay(small);
    digitalWrite(led, LOW);
    delay(small);
    counta ++;
  }
  while(countb<3)
  {
    digitalWrite(led, HIGH);
    delay(large);
    digitalWrite(led, LOW);
    delay(small);
    countb ++;
  }
while(countc<3)
{
  digitalWrite(led, HIGH);
  delay(small);
  digitalWrite(led, LOW);
  delay(small);
  countc ++;
}
counta = 0;
countb = 0;
countc = 0;
delay(3000);

}
