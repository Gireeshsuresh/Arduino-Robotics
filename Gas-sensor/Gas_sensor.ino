int Sensor = A0;        // connecting sensor to analog port
int SensorVal;          // variable to store value

void setup()
{
  pinMode(Sensor, INPUT);    // sensor is set a input
  Serial.begin(9600);        // baud rate set
}
void loop()
{
  SensorVal = analogRead(Sensor);     //reading the value from sensor
  Serial.println(SensorVal);          // print in the serial monitor
  delay(100);
}

