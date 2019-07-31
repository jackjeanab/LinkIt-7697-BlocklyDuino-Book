/*
 * Generated using BlocklyDuino:
 *
 * https://github.com/MediaTek-Labs/BlocklyDuino-for-LinkIt
 *
 * Date: Wed, 31 Jul 2019 09:24:29 GMT
 */



void setup()
{
  Serial.begin(9600);


}


void loop()
{
  Serial.println(analogRead(A0));
  delay(400);
}