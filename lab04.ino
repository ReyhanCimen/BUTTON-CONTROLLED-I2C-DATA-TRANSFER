#include <Wire.h>
#include "rgb_lcd.h"

rgb_lcd lcd;

const int buttonPin = A1;  
int buttonState = 0;       

void setup() {
  pinMode(buttonPin, INPUT);

 
  lcd.begin(16, 2);

  
  lcd.setRGB(0, 255, 0);
  lcd.setCursor(0, 0);
  lcd.print("CMPE453-Section2");

  delay(4000);
  lcd.clear();
}

void loop() {
  buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH) {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Welcome to Class");
    lcd.setCursor(0, 1);
    lcd.print("Button is ON");
  } else {
  
    lcd.clear();
    lcd.setRGB(0, 255, 0);  
    lcd.setCursor(0, 0);
    lcd.print("GoodBye to Class");
    lcd.setCursor(0, 1);
    lcd.print("Button is OFF");
  }

  delay(100); 
}