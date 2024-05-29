int verticalPins[] = {2,3,4,5,6,7,8,9,10};
int planes[] = {11,12,13};
void setup() {
  // put your setup code here, to run once:
for(int i=0, i<9; i++)
{
  pinMode(verticalPins[i],OUTPUT);
}
for(int i=0, i<3, i++)
{
  pinMode(planes[i], OUTPUT);
}
}

void loop() {
  // put your main code here, to run repeatedly:
for(int m=0, m<3, m++)
{
  digitalWrite(planes[m[, HIGH);
}
}
