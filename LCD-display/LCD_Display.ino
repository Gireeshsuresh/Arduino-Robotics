
#include <LiquidCrystal.h>   // include the LCD Header file

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);    // initialize the library with the numbers of the interface pins as in the shield

void setup() 
{
   lcd.begin(16, 2);                 // set up the LCD's number of columns and rows:
   lcd.print("SP ROBOTIC WORKS");
   lcd.println("HELLO WORLD");      // Print a message to the LCD.
}

void loop() 
{
    lcd.setCursor(0, 1);         // set the cursor to column 0, line 1
    lcd.print(millis()/1000);    // print the number of seconds since reset:
}

