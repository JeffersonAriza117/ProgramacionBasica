const int ledPin = 13; // Define the digital pin the LED is connected to

void setup() {
  pinMode(ledPin, OUTPUT); // Set the LED pin as an output
}

void loop() {
  // Blink the LED 5 times
  for (int i = 0; i < 5; i++) {
    digitalWrite(ledPin, HIGH); // Turn the LED on
    delay(200);                 // Wait for 200 milliseconds
    digitalWrite(ledPin, LOW);  // Turn the LED off
    delay(200);                 // Wait for 200 milliseconds
  }

  // After blinking 5 times, keep the LED off for a longer period
  delay(2000); // Wait for 2 seconds before the next sequence of blinks
}