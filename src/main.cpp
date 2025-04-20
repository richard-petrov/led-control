#include <Arduino.h>

// put function declarations here:
int myFunction(int, int);

void setup() {
  pinMode(LED_BUILTIN, OUTPUT); // Initialize the LED pin as an output
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH); // Turn the LED on (HIGH is the voltage level)
  delay(500); // Wait for a second
  digitalWrite(LED_BUILTIN, LOW); // Turn the LED off by making the voltage LOW
  delay(500); // Wait for a second
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}