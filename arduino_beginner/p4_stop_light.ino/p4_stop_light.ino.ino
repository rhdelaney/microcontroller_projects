int redTenLed =10; // initialize digital pin 8.
int yellowSevenLed =7; // initialize digital pin 7.
int greenFourLed =4; // initialize digital pin 4.

void setup() {
  pinMode(redTenLed, OUTPUT);// set the pin with red LED as “output”
  pinMode(yellowSevenLed, OUTPUT); // set the pin with yellow LED as “output”
  pinMode(greenFourLed, OUTPUT); // set the pin with green LED as “output”
}
void loop() {
  digitalWrite(greenFourLed, HIGH);//// turn on green LED
  delay(5000);// wait 5 seconds

  digitalWrite(greenFourLed, LOW); // turn off green LED
  for(int i=0;i<3;i++)// blinks for 3 times 
  {
    delay(500);// wait 0.5 second
    digitalWrite(yellowSevenLed, HIGH);// turn on yellow LED
    delay(500);// wait 0.5 second
    digitalWrite(yellowSevenLed, LOW);// turn off yellow LED
  } 
  delay(500);// wait 0.5 second
  digitalWrite(redTenLed, HIGH);// turn on red LED
  delay(5000);// wait 5 seconds
  digitalWrite(redTenLed, LOW);// turn off red LED
}
