const int relay = A5;        // A5 pin is connected to relay in starter shield

void setup()
{
  pinMode(relay,OUTPUT);     // relay is set as output
}

void loop()
{
  digitalWrite(relay,HIGH);    // to switch the relay from NC to NO
  delay(10)                 // to realise the swtiching in real time
  digitalWrite(relay,LOW);     // to bring it back to its original position 
  delay(10);
}

