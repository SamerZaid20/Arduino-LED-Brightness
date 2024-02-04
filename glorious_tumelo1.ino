// C++ code
int yellow=3;
void setup() {
  // put your setup code here, to run once:
pinMode(yellow,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
analogWrite(yellow,0);
delay(1000);
  analogWrite(yellow,64);
delay(1000);
analogWrite(yellow,127);
delay(1000);
analogWrite(yellow,191);
delay(1000);
analogWrite(yellow,255);
delay(1000);
}