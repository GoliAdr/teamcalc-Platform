#include <Arduino.h>
#include "member4.h"

void member4_multiply() {

  Serial.print("first number: ");
  while (!Serial.available()) {}         
  int a = Serial.parseInt();            
  while (Serial.available()) Serial.read();   
  Serial.println(a);                     

  Serial.print("second number: ");
  while (!Serial.available()) {}
  int b = Serial.parseInt();
  while (Serial.available()) Serial.read();
  Serial.println(b);

  Serial.print(a);
  Serial.print(" * ");
  Serial.print(b);
  Serial.print(" = ");
  Serial.println(a * b);
}
