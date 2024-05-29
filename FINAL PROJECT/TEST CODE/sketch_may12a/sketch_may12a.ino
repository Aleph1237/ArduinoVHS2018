int verticalPins[] = {2,3,4,5,6,7,8,9,10};
int planes[] = {11,12,13};
void setup() {
 for (int i=2; i<11; i++)
{
  pinMode(verticalPins[i], OUTPUT);
}
for(int i=0; i<3; i++)
{
  pinMode(planes[i], OUTPUT);
}
}

void loop() {
for(int m=0; m<3; m++)
{
  digitalWrite(planes[m], HIGH);
  for (int i=0; i<9, i++;)
  {
    digitalWrite(verticalPins[i], HIGH);
    delay(500);
    digitalWrite(verticalPins[i], LOW);
  }
  digitalWrite(planes[m], LOW);
  }
}

