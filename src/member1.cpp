#include <Arduino.c>

// Arduino Blink Example

const int ledPin = 13;  // Pin where the LED is connected (usually onboard)
const int blinkDelay = 500; // Blink interval in milliseconds

void setup() {
  // Initialize the digital pin as an output.
  pinMode(ledPin, OUTPUT);
}

void loop() {
  digitalWrite(ledPin, HIGH);  // Turn the LED on
  delay(blinkDelay);            // Wait for blinkDelay milliseconds
  digitalWrite(ledPin, LOW);   // Turn the LED off
  delay(blinkDelay);            // Wait again
}