#include <Arduino.h>
#include "member1.h"
#include "member3.h"
#include "member4.h"

static void printMenu() {
  Serial.println("\n0 = Blink   1 = Sum   2 = Multiply");
}

void setup() {
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
  printMenu();
}

void loop() {
  if (!Serial.available()) return;

  char c = Serial.read();
  if (c == '\r' || c == '\n') return; 
  switch (c) {
    case '0': member1_blink();      break;    // blinky blink
    case '1': member3_sum();        break;    // Button 1 for sum funtion
    case '2': member4_multiply();   break;    // Button 2 for multiply
    default:  Serial.println("Invalid choice");
  }

  while (Serial.available()) Serial.read();
  printMenu();
}
