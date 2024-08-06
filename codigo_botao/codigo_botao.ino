// C++ code
// 
int buttonState = 0;
void setup() 
{
  pinMode(9, OUTPUT);
  pinMode(7, INPUT);
}

void loop() 
{
  buttonState = digitalRead(7);
if (buttonState == HIGH) {
    digitalWrite(9,HIGH);
  } else {
    digitalWrite(9,LOW);
  }
}
