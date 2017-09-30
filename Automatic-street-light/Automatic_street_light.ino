#include <LiquidCrystal.h>
LiquidCrystal lcd(13, 12, 8, 7, 4, 2);
int Read = 0;
int Formula = 0;
void setup()
{
  pinMode(A3, INPUT);
  pinMode(A5, INPUT);
  lcd.begin(16, 2);
}
void loop()
{
  Read = analogRead(A3);//Reading the sensor value
  Formula = map(Read, 0, 1023, 0, 100);//Mapping function
  lcd.setCursor(0, 0);
  lcd.print("Ambience:");
  lcd.print(Formula);
  lcd.print(" % ");
  if (Formula < 20)//Checking whether the value is less then 20
  {
    delay(3000);//waiting for 3 sec
    if (Formula < 20)//Again if the value is same,banner is switched on
    {
      digitalWrite(A5, HIGH);
      lcd.setCursor(0, 1);
      lcd.print("Banner:ON ");
      delay(1000);
    }

    else  //switched off
    {
      digitalWrite(A5, LOW);
      lcd.setCursor(0, 1);
      lcd.print("Banner:OFF");
      delay(1000);
    }
  }
  else//switched off
  {
    delay(3000);
    digitalWrite(A5, LOW);
    lcd.setCursor(0, 1);
    lcd.print("Banner:OFF");
  }
}
