/*
  The Arduino Blink Program
  This is program will blink an LED connected to pin 13 with a 1-second on and 1-second off delay, sequentially.
  The blink pattern's speed can be varied by adjusting the onDelay and offDelay variables.
*/


 //declare variables for the pin and the delay time 
 int LED_BUILTIN = 13;           //Led pin is connected to pin 13
 int onDelay  = 1000;    //variable for delay time when Led is on (in milliseconds)
 int offDelay = 1000;    //variable for delay time when Led is off (in milliseconds)

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);  //initalize Led pin as an OUTPUT
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);    //turn on the Led
  delay(onDelay);                     //wait for onDelay time

  digitalWrite(LED_BUILTIN, LOW);     //turn off the led
  delay(offDelay);                    //wait for offDelay time      
}

