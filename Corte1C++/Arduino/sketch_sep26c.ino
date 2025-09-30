const int ledPin = 13; // Definir el pin led

void setup() {
  pinMode(ledPin, OUTPUT); // definir el pin elegido como OUTPUT
}

void loop() {
  while (true) { // loop infinito
    digitalWrite(ledPin, HIGH); // encender
    delay(1000);                // esperar 1 segundo (1000ms=1s)
    digitalWrite(ledPin, LOW);  // apagar
    delay(1000);                // esperar 1 segundo (1000ms=1s)
  }
