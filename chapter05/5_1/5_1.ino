/*
 * Generated using BlocklyDuino:
 *
 * https://github.com/MediaTek-Labs/BlocklyDuino-for-LinkIt
 *
 * Date: Wed, 31 Jul 2019 12:54:29 GMT
 */

#include <LWiFi.h>

char _lwifi_ssid[] = "你的熱點帳號";
char _lwifi_pass[] = "密碼";

void setup()
{
  Serial.begin(9600);

  Serial.println("開始Wi-Fi連線");
  while (WiFi.begin(_lwifi_ssid, _lwifi_pass) != WL_CONNECTED) { delay(1000); }
  Serial.println("Wi-Fi連線成功!!");
  Serial.print("linkit7697的IP：");
  Serial.println(WiFi.localIP().toString());
}


void loop()
{

}