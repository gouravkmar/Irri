#include <Arduino.h>

// put function declarations here:

void setup()
{
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(12, OUTPUT);
  pinMode(14, OUTPUT);
}

// the loop function runs over and over again forever
void loop()
{
  digitalWrite(12, HIGH);
  digitalWrite(14, HIGH);
  // turn the LED on (HIGH is the voltage level)
  delay(20000); // wait for a second
  digitalWrite(12, LOW);
  digitalWrite(14, LOW);
  // turn the LED on (HIGH is the voltage level)
  delay(20000); // wait for a second
}
