
void setup() 
{
  pinMode(A0, INPUT);
  pinMode(11,OUTPUT);
  Serial.begin(9600);
}

void loop() 
{
  int v = analogRead(A0);
  float val = v * 3.0/1024;
  Serial.println(val);
  analogWrite(11, val);
  delay(1000);
}
