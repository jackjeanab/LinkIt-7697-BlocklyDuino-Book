/*
 * Generated using BlocklyDuino:
 *
 * https://github.com/MediaTek-Labs/BlocklyDuino-for-LinkIt
 *
 * Date: Wed, 31 Jul 2019 09:14:32 GMT
 */



void setup()
{
  pinMode(7, OUTPUT);
  digitalWrite(7, HIGH);
  pinMode(2, INPUT);
}


void loop()
{
  if (digitalRead(2)) {
    digitalWrite(7, HIGH);

  } else {
    digitalWrite(7, LOW);

  }
}