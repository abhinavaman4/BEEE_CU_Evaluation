
int buttonState1 = 0; \\for volume up 

int buttonState2 = 0;  \\for volume down

void setup()
{
  pinMode(13,OUTPUT);
  
  pinMode(7,INPUT);
}
void loop()
{
  buttonState1 = digitalRead(7);
  if(buttonState1 == HIGH)
  {
    digitalWrite(13, HIGH);
    delay(20);
    digitalWrite(13, LOW);
  }
  else 
  {
    digitalWrite(13 , LOW);
  }
  buttonState2 = digitalRead(12);
  if(buttonState2 == HIGH)
  {
    digitalWrite(8, HIGH);
    delay(40);
    digitalWrite(8,LOW);
  }
  else
  {
    digitalWrite(8, LOW);
  }
}








