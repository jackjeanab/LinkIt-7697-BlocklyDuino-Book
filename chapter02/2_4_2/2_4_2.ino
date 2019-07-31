/*
 * Generated using BlocklyDuino:
 *
 * https://github.com/MediaTek-Labs/BlocklyDuino-for-LinkIt
 *
 * Date: Wed, 31 Jul 2019 09:09:45 GMT
 */



void setup()
{
  Serial.begin(9600);


  pinMode(2, INPUT);
}


void loop()
{
  Serial.println(digitalRead(2));
  delay(1000);
}