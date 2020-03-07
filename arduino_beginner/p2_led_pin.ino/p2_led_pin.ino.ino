int tenthPin = 10; // define digital pin 10.

void setup() {
  pinMode(tenthPin, OUTPUT);// define pin with LED connected as output.
}

void loop() {
  digitalWrite(tenthPin, HIGH); // set the LED on.
  delay(1000); // wait for a second.
  digitalWrite(tenthPin, LOW); // set the LED off.
  delay(1000); // wait for a second
}
