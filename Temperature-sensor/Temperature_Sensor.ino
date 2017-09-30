const int temp = A0;      // this does not vary hence constant, can be connected to any analog pin

void setup()
{
  Serial.begin(9600);          // for serial communication
  pinMode(temp,INPUT);         // setting as input
}

void loop()
{
  int sensorVal = analogRead(temp);      //storing the sensor value in a variable
  sensorVal= sensorVal*0.48828125;       // to get direct temperature value (see explanation below)
  Serial.begin("Temperature=");
  Serial.begin(sensorVal);               // printing the value in serial monitor 
  Serial.begin("*c");
  delay(1000);
}

 /*  ((Supply voltage *1000/1024)/10)= 0.48828125
    supply voltage = 5.0v
   1000 = to convert volt to milli volt 
   1024 = 2^10 to read analog values
   10 = every 10 mv is proportional to 1 celcius
 */
