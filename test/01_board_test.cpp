#include <Arduino.h>

void setup() {
  Serial.begin(115200);
  delay(1000);
  Serial.println("ESP32 WROOM-32 boot OK");
  Serial.printf("Chip model: %s, cores: %d, revision: %d\n",
                ESP.getChipModel(), ESP.getChipCores(), ESP.getChipRevision());
  Serial.printf("Flash size: %d bytes\n", ESP.getFlashChipSize());
}

void loop() {
  Serial.println("alive...");
  delay(2000);
}
