/* Obstacle Avoider Robot with left priority - takes left turn at the junction */

const int LM_1 = 3;             // left motor terminal 1   , motor pin numbers can be changed in the program if bith motors rotate in different directions
const int LM_2 = 5;             // left motor terminal 2
const int RM_1 = 6;             // right motor terminal 1
const int RM_2 = 11;            // right motor terminal 2
const int LS = A0;              // left sensor connected to port A0
const int CS = A1;              // center sensor connected to port A1
const int RS = A2;              // right sensor connected to port A2

void setup()
{
  pinMode(LM_1,OUTPUT);          // all four motor pins are assigned as OUTPUT
  pinMode(LM_2,OUTPUT);
  pinMode(RM_1,OUTPUT);
  pinMode(RM_2,OUTPUT);
  pinMode(LS,INPUT);             // all three sensors are assigned as INPUT
  pinMode(CS,INPUT);
  pinMode(RS,INPUT);
}

void loop ()
{
  int LS_val = digitalRead(LS);        // the value of sensor is read and stored in the respective variables
  int CS_val = digitalRead(CS);
  int RS_val = digitalRead(RS);
  
  if (LS_val== LOW && CS_val== LOW && RS_val== LOW)             // no obstacle detected by the sensor
  {
    forward();                                                  // moves forward
  }
  else if (LS_val== LOW && CS_val== LOW && RS_val== HIGH)       // obstacle is detected by right sensor
  {
    left();                                                     // turns left and avoides obstacle
  }
  else if (LS_val== LOW && CS_val== HIGH && RS_val== LOW)       // obstacle is detected by center sensor 
  {
    left();                                                     //  turns left to avoid obstacle because this follows left priority
  }
  else if (LS_val== HIGH && CS_val== LOW && RS_val== LOW)       //  obstacle detected by left sensor
  {
    right();                                                    //  turns right to avoid obstacle 
  }
  else if (LS_val== LOW && CS_val== HIGH && RS_val== HIGH)      // obstacle is detected by center and right sensor
  {
    left();                                                     //  turns left to avoid obstacle
  }
  else if (LS_val== HIGH && CS_val== HIGH && RS_val== LOW)      // obstacle is detected by left and center sensor
   {
    right();                                                    // turns right to avoid obstacle
  }
  else if (LS_val== HIGH && CS_val== LOW && RS_val== HIGH)       // obstacle is detected by left and right sensor
  {
    left();                                                      // turns left as per priority
  }
  else if (LS_val== HIGH && CS_val== HIGH && RS_val== HIGH)      // all three sensors detects obstacle
  {
    left();                                                      // takes left turn as per priority and avoids obstacle
  }
}

void forward()                                                   // forward function defined
{
  digitalWrite(LM_1,HIGH);                                       // both the terminals are made to move forward
  digitalWrite(LM_2,LOW);
  digitalWrite(RM_1,HIGH);
  digitalWrite(RM_2,LOW);
  return;
}

void left()                                                       // left function defined, this makes the robot move backward a little and take left turn to avoid obstacle
{
  digitalWrite(LM_1,LOW);                                         // instructions to move backward
  digitalWrite(LM_2,HIGH);
  digitalWrite(RM_1,LOW);
  digitalWrite(RM_2,HIGH);
  delay(500);                                                      // delay is given for proper movement
  digitalWrite(LM_1,LOW);                                          // makes the left motor move backward
  digitalWrite(LM_2,HIGH);
  digitalWrite(RM_1,HIGH);                                         // makes the right motor move forward
  digitalWrite(RM_2,LOW);                                          // robot turns left
  delay(500);
  return;
}

void right()                                                       // right function defined, this makes the robot move backward a little and take right turn to avoid obstacle
{
  digitalWrite(LM_1,LOW);                                          // instructions to move backward
  digitalWrite(LM_2,HIGH);
  digitalWrite(RM_1,LOW);
  digitalWrite(RM_2,HIGH);
  delay(500);                                                      // delay is given for proper movement
  digitalWrite(LM_1,HIGH);                                         // makes the left motor move forward
  digitalWrite(LM_2,LOW);
  digitalWrite(RM_1,LOW);                                          // makes the right motor move backward
  digitalWrite(RM_2,HIGH);                                         // robot turns right
  delay(500);
  return;
}

