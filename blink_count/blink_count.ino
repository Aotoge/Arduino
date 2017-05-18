int led = 13;
int count = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(led,OUTPUT);
}

void loop()
{
  digitalWrite(led,HIGH);
  delay(1000);
  digitalWrite(led,LOW);
  delay(1000);
    
  count++;
  Serial.print("LED on #");
  Serial.println(count);
}
