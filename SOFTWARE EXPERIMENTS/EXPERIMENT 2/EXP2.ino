
// NAME: RAHUL
// ROLL NO: 123456
// CLASS: ECE
// ECA1407 EMBEDDED SYSTEM - SLOT A

#include <LiquidCrystal.h>

// LCD: RS, E, D4, D5, D6, D7
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup()
{
    pinMode(8, OUTPUT);
    pinMode(9, OUTPUT);

    lcd.begin(16, 2);

    lcd.setCursor(0, 0);
    lcd.print("ARDUINO WORKING");

    lcd.setCursor(0, 1);
    lcd.print("LCD TEST");

    digitalWrite(8, HIGH);
    digitalWrite(9, LOW);
}

void loop()
{
}

