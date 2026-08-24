#include <Arduino.h>
#include <FastLED.h>

#define LED_PIN     23
#define NUM_LEDS    4
#define LED_TYPE    WS2812
#define COLOUR_ORDER GRB
#define BRIGHTNESS  75   // keep low on a breadboard power rail

CRGB leds[NUM_LEDS];

void setup() {
  Serial.begin(115200);
  delay(1000);
  Serial.println("WS2812 LED test starting...");
  
  FastLED.addLeds<LED_TYPE, LED_PIN, COLOUR_ORDER>(leds, NUM_LEDS);
  FastLED.setBrightness(BRIGHTNESS);
  FastLED.clear();
  FastLED.show();
}

void loop() {
  // All LEDs green together to confirm whole chain works at once

  fill_solid(leds, NUM_LEDS, CRGB::Green);
  FastLED.show();
  Serial.println("All LEDs: GREEN");
  delay(1000);

  FastLED.clear();
  FastLED.show();
  delay(1000);
}
