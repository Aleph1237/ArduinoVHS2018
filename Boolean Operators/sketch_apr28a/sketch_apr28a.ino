const int LED=7;
const int P=8;
const int V=9;
const int S=10;
const int T=11;

void setup() {
  // put your setup code here, to run once:
pinMode(P, INPUT);
pinMode(V, INPUT);
pinMode(S, INPUT);
pinMode(T, INPUT);
pinMode(LED, OUTPUT);
digitalWrite(LED, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
if(digitalRead(P==HIGH)&& digitalRead(V==HIGH) || (digitalWrite(P==HIGH) && digitalRead(S==HIGH) || (digitalWrite(P==HIGH) && digitalWrite(T==HIGH) || (digitalWrite(V==HIGH) && digitalWrite(V==HIGH) && digitalWrite(T==HIGH);
   digitalWrite(LED, HIGH);
   else digitalWrite(LED, LOW);
}

