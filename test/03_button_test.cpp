#include <Arduino.h>

// test_button.cpp
#define BUTTON_PIN 4

void setup() {
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  Serial.begin(115200);
}

void loop() {
  static bool lastState = HIGH;
  bool state = digitalRead(BUTTON_PIN);
  if (state != lastState) {
    Serial.println(state == LOW ? "Button PRESSED" : "Button RELEASED");
    lastState = state;
  }
  delay(20); // basic debounce
}