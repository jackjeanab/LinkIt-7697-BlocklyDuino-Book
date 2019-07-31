/*
 * Generated using BlocklyDuino:
 *
 * https://github.com/MediaTek-Labs/BlocklyDuino-for-LinkIt
 *
 * Date: Wed, 31 Jul 2019 09:25:58 GMT
 */



int VR;

int Map;

void setup()
{
  Serial.begin(9600);

  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  analogWrite(7, 255);
  analogWrite(8, 255);
  analogWrite(9, 255);
}


void loop()
{
  VR = analogRead(A0);
  Map = (VR / 4095) * 255;
  analogWrite(7, Map);
  Serial.println(Map);
}