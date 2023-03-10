/*
  Light Chaser Program 2

  This program creates a light chaser effect using four LEDs connected to pins 8, 6, 4, and 2.
  Using digitalWrite() function, each LED will turn ON and OFF sequentially with a delay of 100 milliseconds.
  Vary the delay time to adjust the speed pattern.
  After the whiteLED turns off, the blueLED turns ON again and repeat the sequence again in reverse.
  This will create a loop in which the LEDs sequentially turn ON and OFF and then reverse back to their initial state.
*/

  //Define the pins that the LEDs are connected to.
  int redLed   = 8;
  int greenLed = 6;
  int blueLed  = 4;
  int whiteLed = 2;

void setup() {
  //Initialize the LED pins as outputs 
  pinMode(redLed,   OUTPUT); 
  pinMode(greenLed, OUTPUT);
  pinMode(blueLed,  OUTPUT);
  pinMode(whiteLed, OUTPUT);
}

  
void loop() {
  
  digitalWrite(8, HIGH);    //redLed turns ON
  delay(100);               //wait for a short time

  digitalWrite(8, LOW);     //redLed turns OFF
  digitalWrite(6, HIGH);    //greenLed turns ON
  delay(100);               //wait for a sshort time

  digitalWrite(6, LOW);     //greenLed turns OFF
  digitalWrite(4, HIGH);    //blueLed turns ON
  delay(100);               //wait for a short time

  digitalWrite(4, LOW);     //blueLed turns OFF
  digitalWrite(2, HIGH);    //whiteLed turns ON
  delay(100);               //wait for a short time

  digitalWrite(2, LOW);     //whiteLed turns OFF

  //blueLed turns on again
  digitalWrite(4, HIGH);    //blueLed turns ON
  delay(100);               //wait for a second

  digitalWrite(4, LOW);     //blueLED turns OFF
  digitalWrite(6, HIGH);    //greenLED turns ON
  delay(100);               //wait for a second

  digitalWrite(6, LOW);     //greenLed turns OFF
}
