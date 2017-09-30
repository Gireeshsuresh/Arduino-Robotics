const int sensor= A0;             // does not vary hence constant, can be connected to any analog pin
int RelativeHumidity;               // value of humidity is measured in terms of relative humidity
                                     // realative humidity = (actual vapor density / saturation vapor density) * 100% 
                                     
void setup()
{
  Serial.begin(9600);               // for serial communication
  pinMode(sensor,INPUT);          // setting as input
}
void loop()
{
  RelativeHumidity = analogRead(sensor);                       // storing the sensor value in a variable
  RelativeHumidity = RelativeHumidity * 0.0879765395894428;    // for direct RH calculation   (see explanation below)
  Serial.print("RELATIVE HUMIDITY =");                        // printing  in the serial monitor
  Serial.println(RelativeHumidity);
  delay(100);
}

/* (90/1023 =  0.0879765395894428)
   1023 = analog values range from 0 to 1023 hence max is considered
   90 = considering RH can go upto 0 to 90% max
   if 1023 = 90 ( for 1023 value RH ranges till 90)
    then for each
    90/1023. hence multiply the resultant number with the sensor value.
*/  
  
 
