int redPin = 13;
int ontime = 1000;
int offtime = 1000;
int redBlink;
String wel = "welcome to the program";
String redInput ="enter the number of times you want red LED to blink : ";
String redMes ="RED led blink number: ";
int i;

void setup() {
  Serial.begin(9600);
  pinMode(redPin,OUTPUT);
  Serial.println(wel);
   
}

void loop() {
  Serial.println(redInput);
  while(Serial.available() ==0)
  { 
  }
    redBlink = Serial.parseInt();
    for(i = 0;i<redBlink; i++)
    {
      digitalWrite(redPin,HIGH);
      delay(ontime);
      digitalWrite(redPin,LOW);
      delay(offtime);
    }
  Serial.print(redMes);
  Serial.println(i);
}
