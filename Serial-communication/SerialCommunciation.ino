int led = 3;         // LED connecting to starter shield

void setup()
{
  Serial.begin(9600);        // setting baud rate for communication
  pinMode(led, OUTPUT);      // set LED as output
}

void loop()
{
  int x=Serial.read()         // storing the read value in a variable
  if (x=='H')                 // checking the condition
  {
    digitalWrite(led,HIGH);          // LED turns ON
    delay (10);    
    Serial.print(" H received");     // checking which character is received in serial monitor
  
  else if (x=='L')
  {
    digitalWrite(led,LOW);     // LED turns OFF
    delay(10);
    Serial.print ("L received"); 
  }
  }
}
  
