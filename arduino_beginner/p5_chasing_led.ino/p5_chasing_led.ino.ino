int firstPin = 2 ;  // the I/O pin for the first LED
int numLED = 6;   // number of LEDs

void setup() {
   for (int i = firstPin; i < firstPin + numLED; i ++) 
   {
     pinMode(i, OUTPUT);   // set I/O pins as output
   }
}

void loop() {
   for (int i = firstPin; i < firstPin + numLED; i ++) 
   {
     digitalWrite(i, LOW);    // set I/O pins as “low”, turn off LEDs one by one.
     delay(200);        // delay
   }
   for (int i = firstPin; i < firstPin + numLED; i ++) 
   {
     digitalWrite(i, HIGH);    // set I/O pins as “high”, turn on LEDs one by one
     delay(200);        // delay
   }  
}
