/*
 * Generated using BlocklyDuino:
 *
 * https://github.com/MediaTek-Labs/BlocklyDuino-for-LinkIt
 *
 * Date: Wed, 31 Jul 2019 10:04:08 GMT
 */

#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd_i2c(0x3F);

int VR;

int LED;

void setup()
{
  pinMode(2, OUTPUT);
  lcd_i2c.begin(16, 2);
  analogWrite(2, 255);
  lcd_i2c.backlight();
  lcd_i2c.clear();
  lcd_i2c.setCursor(0,0);
  lcd_i2c.print("HELLO");
  lcd_i2c.setCursor(0,1);
  lcd_i2c.print("WORLD!!");
  delay(5000);
}


void loop()
{
  VR = analogRead(A0);
  LED = (map(VR,0,4095,0,255));
  analogWrite(2, LED);
  lcd_i2c.clear();
  lcd_i2c.setCursor(0,0);
  lcd_i2c.print("VR  : ");
  lcd_i2c.setCursor(4,0);
  lcd_i2c.print(VR);
  lcd_i2c.setCursor(0,1);
  lcd_i2c.print("LED : ");
  lcd_i2c.setCursor(5,1);
  lcd_i2c.print(LED);
  delay(300);
}