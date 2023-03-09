/*
  Light Chaser Program 1

  This program creates a light chaser effect using four LEDs connected to pins 8, 6, 4, and 2.
  Using digitalWrite() function, each LED will turn ON and OFF sequentially with one second delay.
  Vary the delay time to adjust the speed pattern.

*/

  // Define the pins that the LEDs are connected to.
  int redLed   = 8;
  int greenLed = 6;
  int blueLed  = 4;
  int whiteLed = 2;

void setup() {
  // Initialize the LED pins as outputs 
  pinMode(redLed,   OUTPUT); 
  pinMode(greenLed, OUTPUT);
  pinMode(blueLed,  OUTPUT);
  pinMode(whiteLed, OUTPUT);
}

  
void loop() {
  
  digitalWrite(8, HIGH);     // redLed turns ON
  delay(1000);               // wait for a second

  digitalWrite(8, LOW);      // redLed turns OFF
  digitalWrite(6, HIGH);     // greenLed turns ON
  delay(1000);               // wait for a second

  digitalWrite(6, LOW);      // greenLed turns OFF
  digitalWrite(4, HIGH);     // blueLed turns ON
  delay(1000);               // wait for a second 

  digitalWrite(4, LOW);      // blueLed turns OFF
  digitalWrite(2, HIGH);     // whiteLed turns ON
  delay(1000);               // wait for a second

  digitalWrite(2, LOW);      // whiteLed turns OFF

}
