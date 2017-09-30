int sensor= A0;                    // sensor assigned to Ao
int mterminal_1= 10;               // assigning one terminal of motor to pin 10
int mterminal_2= 11;               // assigning other terminal of motor to pin 11, (5,6 can also be used)

void setup()
{
  pinMode(sensor,INPUT);               // setting sensor as input
  pinMode(mterminal_1,OUTPUT);         // setting motor as output
  pinMode(mterminal_2,OUTPUT);
}

void loop()
{
  int sensorVal= digitalRead(sensor);       //  storing the sensor value in a variable
  
  if (sensorVal == HIGH)                     // checking the sensor condition
  {
    digitalWrite(mterminal_1,HIGH);          // motor moves in one direction
    digitalWrite(mterminal_2,LOW);
    delay(100);
  }
  else if (sensorVal == LOW)
  {
    digitalWrite(mterminal_1,LOW);           // making the motor stops
    digitalWrite(mterminal_2,LOW);
    delay(100);
  }
}
