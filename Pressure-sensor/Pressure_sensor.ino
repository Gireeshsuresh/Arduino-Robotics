int Sensor = A0;           // connecting sensor to analog port
int absolutePressure;      // variable to store value

void setup()
{
  pinMode(Sensor , INPUT);      // sensor set as input
  Serial.begin(9600);           // baud rate set
}
void loop()
{
  absolutePressure = analogRead(Sensor);                   // reading the value from sensor
  absolutePressure = ((absolutePressure / 0.045)- 0.095);  // calculation from  sensor value ( if MPX 6115A IC is used)
  Serial.println(absolutePressure);                       // displaying in the serial monitor
  delay(100);
}



/*
If MPX 6250A IC is used then the calculation is as follows
absolutePressure = ((absolutePressure / 0.02) - 0.040))
*/
