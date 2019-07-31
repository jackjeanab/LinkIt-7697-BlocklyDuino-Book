/*
 * Generated using BlocklyDuino:
 *
 * https://github.com/MediaTek-Labs/BlocklyDuino-for-LinkIt
 *
 * Date: Wed, 31 Jul 2019 09:18:07 GMT
 */



int i;

void setup()
{
  Serial.begin(9600);


  pinMode(7, OUTPUT);
}


void loop()
{
  for (i = 0; i <= 255; i++) {
    analogWrite(7, i);
    Serial.println(i);
    delay(400);
  }
}