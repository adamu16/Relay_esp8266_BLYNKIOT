
// Fill-in information from your Blynk Template here
#define BLYNK_TEMPLATE_ID           "TMPLa5hVeER3"
#define BLYNK_DEVICE_NAME           "Relay"

#define BLYNK_FIRMWARE_VERSION        "0.1.0"

#define BLYNK_PRINT Serial
//#define BLYNK_DEBUG

#define APP_DEBUG

// Uncomment your board, or configure a custom board in Settings.h
//#define USE_SPARKFUN_BLYNK_BOARD
//#define USE_NODE_MCU_BOARD
//#define USE_WITTY_CLOUD_BOARD
//#define USE_WEMOS_D1_MINI

#include "BlynkEdgent.h"

BLYNK_WRITE(V7){
  int pinValue = param.asInt();
  digitalWrite(D7,pinValue);
}
void setup()
{
  pinMode(D7,OUTPUT);
  Serial.begin(115200);
  delay(100);

  BlynkEdgent.begin();
}

void loop() {
  BlynkEdgent.run();
}
