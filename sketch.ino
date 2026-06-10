#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);

const int sensorPin = A0;

void setup() {

Serial.begin(9600);

lcd.init();
lcd.backlight();

lcd.setCursor(0,0);
lcd.print("Air Quality");
delay(2000);
lcd.clear();

}

void loop() {

int sensorValue = analogRead(sensorPin);

Serial.print("Sensor Value : ");
Serial.println(sensorValue);

lcd.clear();

lcd.setCursor(0,0);
lcd.print("AQ:");
lcd.print(sensorValue);

lcd.setCursor(0,1);

if(sensorValue < 300)
{
lcd.print("Good");
}

else if(sensorValue < 600)
{
lcd.print("Moderate");
}

else
{
lcd.print("Poor Air");
}

delay(1000);

}
