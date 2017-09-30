int sensor = 7;        // can be connected to any sensor port.
int led = 3;            // as in starter shield

void setup()
{
  pinMode(sensor,INPUT);       // setting sensor as input
  pinMode(led,OUTPUT);         // setting led as output
}

void loop()
{
  int sensorVal = digitalRead(sensor);        // storing the sensor value in a varaiable
  
  if (sensorVal == LOW)                       // if South Pole near sensor then output is LOW
  {
    digitalWrite(led,HIGH);                   // turn the LED on
    delay (10);
  }
  else if ( sensorVal ==HIGH)                // if north pole is near sensor or no magnet present then output is HIGH
  {
    digitalWrite(led,LOW);                   // turn the LED off
    delay (10);
  }
}

