
int mterminal_1 = 5;     // two terminals of one motor is assigned to motor pins
int mterminal_2 = 6;     // pins 10, 11 can also be used


void setup() 
{                
  pinMode(mterminal_1, OUTPUT);     // motor is an output device so setting them as output pins
  pinMode(mterminal_2, OUTPUT);
}

void loop() 
{
  digitalWrite(mterminal_1,HIGH);           // makes the motor rotate in one direction
  digitalWrite(mterminal_2,LOW);
  delay(1000);                              // delay to differentiate between two direections 
  digitalWrite(mterminal_1,LOW);            // makes the motor rotate in other direction
  digitalWrite(mterminal_2,HIGH);
  delay(1000);
 }
