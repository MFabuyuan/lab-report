/*
  The Arduino Blink Program
  
  This code will blink the LED on and off.
  Pin 13 is used on the arduino board, and it is connected to an LED.
  The LED will continously blink for 1 second and then off for 1 second. 
*/

void setup() {
  pinMode(13, OUTPUT);  // Initialize pin 13 as an output
}

void loop() {
  digitalWrite(13, 1);     // LED turns ON 
  delay(1000);             // wait for a second

  digitalWrite(13, 0);     // LED turns OFF
  delay(1000);             // wait for a second
}
