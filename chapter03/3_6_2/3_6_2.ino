/*
 * Generated using BlocklyDuino:
 *
 * https://github.com/MediaTek-Labs/BlocklyDuino-for-LinkIt
 *
 * Date: Wed, 31 Jul 2019 12:41:36 GMT
 */

#include <SPI.h>

#include <MFRC522.h>

String RFidNo;

MFRC522 rfid(/*SS_PIN*/ 10, /*RST_PIN*/ UINT8_MAX);

String mfrc522_readID()
{
  String ret;
  if (rfid.PICC_IsNewCardPresent() && rfid.PICC_ReadCardSerial())
  {
    MFRC522::PICC_Type piccType = rfid.PICC_GetType(rfid.uid.sak);

    for (byte i = 0; i < rfid.uid.size; i++) {
      ret += (rfid.uid.uidByte[i] < 0x10 ? "0" : "");
      ret += String(rfid.uid.uidByte[i], HEX);
    }
  }

  // Halt PICC
  rfid.PICC_HaltA();

  // Stop encryption on PCD
  rfid.PCD_StopCrypto1();
  return ret;
}

void setup()
{
  Serial.begin(9600);

  pinMode(3, OUTPUT);
  digitalWrite(3, LOW);
  Serial.println("大門已關閉");
  SPI.begin();
  rfid.PCD_Init();

}


void loop()
{
  RFidNo = mfrc522_readID();
  if (RFidNo != "") {
    if (RFidNo == "你的RFID卡號") {
      digitalWrite(3, HIGH);
      Serial.println("大門已開啟");
      delay(5000);
      digitalWrite(3, LOW);
      Serial.println("大門已關閉");

    } else {
      Serial.println("偵測到RFID卡片，不是開門卡片!");

    }

  }
  delay(1000);
}