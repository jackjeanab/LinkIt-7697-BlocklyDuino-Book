/*
 * Generated using BlocklyDuino:
 *
 * https://github.com/MediaTek-Labs/BlocklyDuino-for-LinkIt
 *
 * Date: Wed, 31 Jul 2019 09:27:13 GMT
 */



int VR;

int Map;

void setup()
{
  Serial.begin(9600);


  pinMode(7, OUTPUT);
}


void loop()
{
  VR = analogRead(A0);
  Map = (map(VR,0,4096,0,255));
  analogWrite(7, Map);
  Serial.println(Map);
}