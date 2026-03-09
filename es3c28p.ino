#include "config.h"
#include <TFT_eSPI.h>

TFT_eSPI tft = TFT_eSPI();

void setup() {

  Serial.begin(115200);

  tft.init();
  tft.fillScreen(TFT_BLACK);
  tft.setRotation(TFT_ORIENTATION);

  tft.setTextColor(TFT_YELLOW, TFT_BLACK);
  tft.drawCentreString("ES3C28P", 160, 40, 4);

}

void loop() {

}
