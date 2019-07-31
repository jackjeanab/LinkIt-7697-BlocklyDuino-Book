/*
 * Generated using BlocklyDuino:
 *
 * https://github.com/MediaTek-Labs/BlocklyDuino-for-LinkIt
 *
 * Date: Wed, 31 Jul 2019 13:01:05 GMT
 */

#include <LWiFi.h>
#include "MCS.h"

int RandomNo;

char _lwifi_ssid[] = "你的WiFi熱點帳號";
char _lwifi_pass[] = "密碼";
MCSDevice mcs("MCS測試裝置的Device id", "MCS測試裝置的Device key");

MCSDisplayInteger classifier("classifier");

void setup()
{
  Serial.begin(9600);

  mcs.addChannel(classifier);
  Serial.println("WIFI連線開始");
  while (WiFi.begin(_lwifi_ssid, _lwifi_pass) != WL_CONNECTED) { delay(1000); }
  Serial.println("WIFI連線成功");
  Serial.println(String() + "IP是" + WiFi.localIP().toString());
  delay(1000);
  while(!mcs.connected()) { mcs.connect(); }
  Serial.println("MCS連線成功");
  Serial.begin(9600);
}


void loop()
{
  while (!mcs.connected()) {
    mcs.connect();
    if (mcs.connected()) { Serial.println("MCS Reconnected."); }
  }
  mcs.process(100);
  RandomNo = (random(1, 100));
  Serial.println(RandomNo);
  classifier.set(RandomNo);
  delay(1000);
}