int input=8;
int output = 13;
boolean laststate = LOW;
boolean LED = LOW;

void setup()
{
  pinMode(input,INPUT);
  pinMode(output,OUTPUT);
}

void loop()
{
  if(digitalRead(input)==HIGH && laststate == LOW)
  {
    LED = !LED;
    laststate = HIGH;
  }
  else 
  {
    laststate = digitalRead(input);
  }
  digitalWrite(output,LED); // here LED will have HIGH / LOW
}
