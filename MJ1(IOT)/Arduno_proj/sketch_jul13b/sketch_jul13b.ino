const int ledPin = 10;
const int ledPin2 = 8;
const int ledPin3 = 7;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  digitalWrite(ledPin, HIGH);   // Turn LED on
  digitalWrite(ledPin2, LOW);   // Turn LED on
  digitalWrite(ledPin3, LOW);   // Turn LED on
  delay(50);                  // Wait 1 second
  digitalWrite(ledPin, LOW);   // Turn LED on
  digitalWrite(ledPin2, HIGH);   // Turn LED on
  digitalWrite(ledPin3, LOW);   // Turn LED on
  delay(50); 
  digitalWrite(ledPin, LOW);   // Turn LED on
  digitalWrite(ledPin2, LOW);   // Turn LED on
  digitalWrite(ledPin3, HIGH);   // Turn LED on
  delay(50);                  // Wait 1 second
}   