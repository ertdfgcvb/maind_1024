
#include <Arduino.h>

#define PICO_LED_PIN 0

void setup() {
  pinMode(PICO_LED_PIN, OUTPUT);
  digitalWrite(PICO_LED_PIN, 1);
}

void loop() {
	digitalWrite(PICO_LED_PIN, 1);
	delay(300);
	digitalWrite(PICO_LED_PIN, 0);
	delay(300);
}