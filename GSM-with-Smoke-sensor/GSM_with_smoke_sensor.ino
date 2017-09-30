#include <SPGSM.h>
SPGSM gsm;
void setup()
{
  gsm.begin(9600);
  Serial.begin(9600);
}
void loop()
{
  int value=analogRead(A0);
  if (value>=500)
  {
    Serial.println("Sensor is sensed");
    Serial.println("FIRE ALERT");
    gsm.call("xxxxx",10000);  
    delay (2000);
   }  
}
  
  


