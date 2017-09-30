int IRsensor= A0;                // assigning sensor to A0;

void setup()
{
  pinMode(IRsensor,INPUT);       // setting as input
  Serial.begin(9600);            // for serial communication
}

void loop()
{
  int IRsensorVal = analogRead(A0);       // reading the analog value and storing in variable, for digital values digitalRead should be used.
  Serial.print(" IR sensor value = ");
  Serial.println(IRsensorVal);            // printing in the serial monitor.
  delay(100);
}
