// Use Arduino's built-in LED pin
const int ledPin = LED_BUILTIN;

// LED ON/OFF duration in milliseconds
const int blinkDelay = 1000;

void setup() {
  // Configure the LED pin as an output
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Turn the LED ON
  digitalWrite(ledPin, HIGH);

  // Keep the LED ON for approximately 1 second
  delay(blinkDelay);

  // Turn the LED OFF
  digitalWrite(ledPin, LOW);

  // Keep the LED OFF for approximately 1 second
  delay(blinkDelay);
}
