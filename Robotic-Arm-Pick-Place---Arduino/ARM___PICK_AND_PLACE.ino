#include <VarSpeedServo.h>       // header file for certain options

VarSpeedServo bs;                // base moving servo
VarSpeedServo s1;                // servo attached to the base
VarSpeedServo s2;                // elongation of the arm
VarSpeedServo s3;                // moving the gripper up and down
VarSpeedServo rs;                // rotating the gripper
VarSpeedServo gs;                // gripper opening and closing

void setup()
{
  bs.attach(2);                  //  attaching all the servos connected to the pins in the board
  s1.attach(3);
  s2.attach(4);
  s3.attach(5);
  rs.attach(6);
  gs.attach(7);

  bs.slowmove(90,50);           //  servoname.slowmove(servo position,servo speed)
  s1.slowmove(90,50);
  s2.slowmove(90,50);
  s3.slowmove(90,50);
  rs.slowmove(90,50);
  gs.slowmove(0,50);
  delay(2000);
}
void loop()

{

  bs.slowmove(0,50);             // each servo position is declared with the required delay
  delay(1500);

  gs.slowmove(60,50);
  delay(1500);
  
  bs.slowmove(120,50);
  delay(1500);
  
  s1.slowmove(180,50);
  s2.slowmove(45,50);
  s3.slowmove(135,50);
  delay(1500);
  
  gs.slowmove(0,50);
  delay(1500);
  
  s1.slowmove(90,50);
  s2.slowmove(90,50);
  s3.slowmove(90,50);
  delay(1500);
  
 
} 
