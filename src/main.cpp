#include <Arduino.h>
#include "member1.h"
#include "member3.h"
#include "member4.h"

static void printMenu() {
  Serial.println("\n0=Blink  1=Sum  2=Multiply");
}

void setup() {
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
  printMenu();
}

void loop() {
  if (!Serial.available()) return;
  char c = Serial.read();
  if (c=='\r' || c=='\n') return;

  switch (c) {
    case '0': member1_blink();      break;    //Blinki Blink
    case '1': member3_sum();        break;    // Member 3 handles reading a,b + prints result
    case '2': member4_multiply();   break;    // Member 4 handles reading a,b + prints result
    default:  Serial.println("Invalid choice");
  }

  // clear rest of the line and reprint menu
  while (Serial.available()) Serial.read();
  printMenu();
}
