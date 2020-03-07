int ledElevenPin = 11;// initialize pin 11
int inSevenPin = 7;// initialize pin 7
int val;// define val

void setup() {
  pinMode(ledElevenPin,OUTPUT);// set LED pin as “output”
  pinMode(inSevenPin,INPUT);// set button pin as “input”
}

void loop() {
  val = digitalRead(inSevenPin);// read the level value of pin 7 and assign if to val
  if (val == LOW)// check if the button is pressed, if yes, turn on the LED
  { 
    digitalWrite(ledElevenPin,LOW);
  }
  else
  { 
    digitalWrite(ledElevenPin,HIGH);
  }
}
