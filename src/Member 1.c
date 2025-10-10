

// Blink function for Arduino
void blink(int pin, int delayTime) {
  digitalWrite(pin, HIGH);  // Turn LED on
  delay(delayTime);         // Wait
  digitalWrite(pin, LOW);   // Turn LED off
  delay(delayTime);         // Wait
}

void setup() {
  int ledPin = 13;          // Most Arduino boards have an onboard LED on pin 13
  pinMode(ledPin, OUTPUT);  // Set the pin as output
}

void loop() {
  blink(13, 500);           // Blink LED every 500 milliseconds
}