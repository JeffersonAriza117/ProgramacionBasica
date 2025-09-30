const int ledPin = 13;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Blink the LED 5 times
  for (int i = 0; i < 5; i++) {
    digitalWrite(ledPin, HIGH); 
    delay(200);                 
    digitalWrite(ledPin, LOW);  
    delay(200);                 
  }

  delay(2000); 
}