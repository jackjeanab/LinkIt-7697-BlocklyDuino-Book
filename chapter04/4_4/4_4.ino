/*
 * Generated using BlocklyDuino:
 *
 * https://github.com/MediaTek-Labs/BlocklyDuino-for-LinkIt
 *
 * Date: Wed, 31 Jul 2019 12:51:57 GMT
 */

#include <LRemote.h>

LRemoteLabel label1;
LRemoteSlider slider1;
LRemoteSlider slider2;
LRemoteSlider slider3;
LRemoteLabel label2;

void setup()
{
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  LRemote.setName("jackjean");
  LRemote.setOrientation(RC_PORTRAIT);
  LRemote.setGrid(3, 5);
    label1.setPos(0, 0);
    label1.setText("RGB LED遙控");
    label1.setSize(3, 1);
    label1.setColor(RC_GREY);
    LRemote.addControl(label1);

    slider1.setPos(0, 1);
    slider1.setSize(3, 1);
    slider1.setText("藍燈");
    slider1.setValueRange(0, 255, 255);
    slider1.setColor(RC_BLUE);
    LRemote.addControl(slider1);

    slider2.setPos(0, 2);
    slider2.setSize(3, 1);
    slider2.setText("綠燈");
    slider2.setValueRange(0, 255, 255);
    slider2.setColor(RC_GREEN);
    LRemote.addControl(slider2);

    slider3.setPos(0, 3);
    slider3.setSize(3, 1);
    slider3.setText("紅燈");
    slider3.setValueRange(0, 255, 255);
    slider3.setColor(RC_PINK);
    LRemote.addControl(slider3);

    label2.setPos(0, 4);
    label2.setText("曾希哲製作");
    label2.setSize(3, 1);
    label2.setColor(RC_GREY);
    LRemote.addControl(label2);
  LRemote.begin();
  analogWrite(9, 255);
  analogWrite(8, 255);
  analogWrite(7, 255);
}


void loop()
{
  LRemote.process();
  if (slider1.isValueChanged()) {
    analogWrite(8, slider1.getValue());

  }
  if (slider2.isValueChanged()) {
    analogWrite(9, slider2.getValue());

  }
  if (slider3.isValueChanged()) {
    analogWrite(7, slider3.getValue());

  }
  delay(100);
}