#include <Arduino.h>

void member4_multiply() {
  Serial.print("Enter 1st number: ");
  int a = serial.ParseInt();
  Serial.print("Enter 2nd number: ");
  int b = serial.ParseInt();
  Serial.print("Multiplication result is: ");
  Serial.println(a*b);
}