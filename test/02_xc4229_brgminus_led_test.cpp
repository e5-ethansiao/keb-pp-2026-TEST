#include <Arduino.h>

#define LED_R 25
#define LED_G 26
#define LED_B 27

void setup() {
  pinMode(LED_R, OUTPUT);
  pinMode(LED_G, OUTPUT);
  pinMode(LED_B, OUTPUT);
}

void loop() {
  digitalWrite(LED_R, HIGH); digitalWrite(LED_G, LOW); digitalWrite(LED_B, LOW);
  delay(1000);
  digitalWrite(LED_R, LOW); digitalWrite(LED_G, HIGH); digitalWrite(LED_B, LOW);
  delay(1000);
  digitalWrite(LED_R, LOW); digitalWrite(LED_G, LOW); digitalWrite(LED_B, HIGH);
  delay(1000);
}