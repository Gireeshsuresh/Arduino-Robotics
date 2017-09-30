#include <LiquidCrystal.h>    // include LCD header file

int ldr=A3;       // analog pin where ldr is connected in the shield

LiquidCrystal lcd(13, 12, 8, 7, 4, 2);   // initialise library with pin munbers as in the shield   

 void setup()
{
  pinMode(ldr,INPUT);      // setting ldr as input
  lcd.begin(16, 2);        // set the lcd rows and columns
  
}
 void loop()
{
  lcd.clear();              // to clear the previous value in lcd
  int ldrvalue=analogRead(ldr);      // reading value from ldr and storing it
  lcd.print("LDR_VALUE: ");         // just prints the name
  lcd.println(ldrvalue);              // prints the corresponding value
  delay(1000);                      // to make the reading changes visible
}

  
