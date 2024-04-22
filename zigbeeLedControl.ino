#include <SoftwareSerial.h>
SoftwareSerial XBee(4, 5);

void  setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  XBee.begin(9600);
  Serial.begin(9600);
}

void loop()
{
  if (XBee.available())
  { 

    char a=XBee.read();

    if(a=='1')
    {
    digitalWrite(LED_BUILTIN, HIGH);
    Serial.println("led is turned on");
    } 
  
    if(a=='0')
    {
      digitalWrite(LED_BUILTIN, LOW); 
      Serial.println("led is turned off");
    }
  }
}