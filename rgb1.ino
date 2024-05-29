const int pin3= 3;
const int pin5= 5;
const int pin6= 6;

void setup() {
  // put your setup code here, to run once:
pinMode (pin3, OUTPUT);// blue
pinMode (pin5, OUTPUT);// green
pinMode (pin6, OUTPUT);// red
}

void loop() {
analogWrite (pin3, 1000);
analogWrite (pin5, 0);
analogWrite (pin6, 1000);
delay(250);
analogWrite (pin3, 1000);
analogWrite (pin5, 1000);
analogWrite (pin6, 255);
delay(250); 
analogWrite (pin3, 0);
analogWrite (pin5, 0);
analogWrite (pin6, 0);
delay(250);
analogWrite (pin3, 1000);
analogWrite (pin5, 0);
analogWrite (pin6, 0);
delay(250); 
analogWrite (pin3, 0);
analogWrite (pin5, 1000);
analogWrite (pin6, 0);
delay(250);
analogWrite (pin3, 0);
analogWrite (pin5, 0);
analogWrite (pin6, 1000);
delay(250); 
analogWrite (pin3, 1000);
analogWrite (pin5, 1000);
analogWrite (pin6, 1000);
delay(250);
analogWrite (pin3, 1000);
analogWrite (pin5, 0);
analogWrite (pin6, 500);
delay(250); 
analogWrite (pin3, 250);
analogWrite (pin5, 500);
analogWrite (pin6, 250);
delay(250);
analogWrite (pin3, 500);
analogWrite (pin5, 500);
analogWrite (pin6, 500);
delay(250); 
}
