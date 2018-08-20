#include "Arduino.h"

void setup()
{
  //init serial
  Serial.begin(9600);
}

void loop()
{
  int A0val = analogRead(0);
  int A1val = analogRead(1);

  Serial.print(A0val);
  Serial.print(" ");
  Serial.print(A1val);
  Serial.print("\n");
  
  delay(100);
}
