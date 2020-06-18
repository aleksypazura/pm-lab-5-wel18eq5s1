#include <Arduino.h>
#include <LiquidCrystal.h>

//Inicjalizacja obiektu klasy LiquidCrystal: RS, E, DB4, DB%, DB6, DB7
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {  
    lcd.begin (16, 2);
    lcd.print("Pazura");
}

void loop() {  
    lcd.setCursor(0, 1);
    lcd.print(millis()/1000);
    delay(500);
}