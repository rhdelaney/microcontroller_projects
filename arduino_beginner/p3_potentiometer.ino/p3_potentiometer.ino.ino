int zeroPotPin=0;// initialize analog pin 0
int eleventhLedPin=11;//initialize digital pin 11（PWM output）
int sens=0;// Temporarily store variables' value from the sensor

void setup() {
  pinMode(eleventhLedPin,OUTPUT);// define digital pin 11 as “output”
  Serial.begin(9600);// set baud rate at 9600
// attention: for analog ports, they are automatically set up as “input”
}
void loop() {
  sens = analogRead(zeroPotPin);// read the analog value from the sensor and assign it to val
  Serial.println(sens);// display value of val
  analogWrite(eleventhLedPin,sens/4);// turn on LED and set up brightness（maximum output of PWM is 255）
  delay(10);// wait for 0.01 second
}
