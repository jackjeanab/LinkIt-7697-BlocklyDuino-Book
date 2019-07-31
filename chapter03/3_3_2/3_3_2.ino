/*
 * Generated using BlocklyDuino:
 *
 * https://github.com/MediaTek-Labs/BlocklyDuino-for-LinkIt
 *
 * Date: Wed, 31 Jul 2019 12:33:12 GMT
 */



int Sw;

int SwOld;

int LED;

void setup()
{
  Sw = 1;
  SwOld = 1;
  LED = 0;
  pinMode(5, INPUT);
  pinMode(LED_BUILTIN, OUTPUT);
}


void loop()
{
  Sw = digitalRead(5);
  if (SwOld == 1 && Sw == 0) {
    LED = 1 - LED;
    delay(100);

  }
  SwOld = Sw;
  if (LED == 1) {
    digitalWrite(LED_BUILTIN, HIGH);

  } else {
    digitalWrite(LED_BUILTIN, LOW);

  }
}