void setup() {
  pinMode(13,OUTPUT);
  Serial.begin(9600);
  Serial.print("Hello");
  Serial.println("World");
}
void loop()
{
  char val;
  if(Serial.available())
  {
    val = Serial.read();
    switch(val)
    {
      
      case'0':
      digitalWrite(13,LOW);
      Serial.println("LED OFF");
      break;
      case'1':
      digitalWrite(13,HIGH);
      Serial.println("LED ON");
    }
  }
}
