

int mterminal_1 = 5;       // motor terminals assigned to PWM pins
int mterminal_2 = 6;      //  3,5,6,9,10,11 are available PWM pins


void setup() 
{                
  pinMode(mterminal_1, OUTPUT);    // motor is an output device, set as output
  pinMode(mterminal_2, OUTPUT);
}

void loop() 
{
  analogWrite(mterminal_1,255);      // analog function is used to vary the speed
  analogWrite(mterminal_2,0);        //  motor runs at full speed
  delay(1000);
  
  analogWrite(mterminal_1,150);     // number can be varied to vary the speed
  analogWrite(mterminal_2,0);       // motor runs at much reduced speed
  delay(1000);  

  analogWrite(mterminal_1,0);       //motor stops
  analogWrite(mterminal_2,0);    
  delay(1000);  
}
