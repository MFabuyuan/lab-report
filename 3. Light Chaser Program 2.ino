/*
  Light Chaser Program 2
  This program creates a light chaser effect using four LEDs.
  The LEDs will turn on and off sequentially with a delay of 100 milliseconds.
  The onDelay and offDelay variables are used to control the delay time between turning the LEDs on and off.
  The light chaser pattern's speed can be varied by adjusting the onDelay and offDelay variables.
*/

  //declare variables for the pins and the delay time
  int redLed   = 10;      //redLed pin is connected to pin 10
  int greenLed = 11;      //greenLed pin is connected to pin 11
  int blueLed  = 12;      //blueLed pin is connected to pin 12
  int whiteLed = 13;      //whiteLed pin is connected to pin 13
  int onDelay  = 100;     //variable for delay time when LED is on (in milliseconds)
  int offDelay = 100;     //variable for delay time when LED is off (in milliseconds)

void setup() { 
  pinMode(redLed,   OUTPUT);     //initialize redLed pin as an OUTPUT
  pinMode(greenLed, OUTPUT);     //initialize greenLed pin as an OUTPUT
  pinMode(blueLed,  OUTPUT);     //initialize blueLed pin as an OUTPUT
  pinMode(whiteLed, OUTPUT);     //initialize whiteLed pin as an OUTPUT
}
  
void loop() { 
  digitalWrite(redLed, HIGH);      //turn on redLed  
  delay(onDelay);                  //wait for onDelay time
  digitalWrite(redLed, LOW);       //turn off redLed
  delay(offDelay);                 //wait for offDelay time

  digitalWrite(greenLed, HIGH);    //turn on greenLed
  delay(onDelay);                  //wait for onDelay time
  digitalWrite(greenLed, LOW);     //turn off greenLed
  delay(offDelay);                 //wait for offDelay time

  digitalWrite(blueLed, HIGH);     //turn on blueLed
  delay(onDelay);                  //wait for onDelay time
  digitalWrite(blueLed, LOW);      //turn off blueLed 
  delay(offDelay);                 //wiat for offDelay time

  digitalWrite(whiteLed, HIGH);    //turn on whiteLed
  delay(onDelay);                  //wait for onDelay time
  digitalWrite(whiteLed, LOW);     //turn off whiteLed
  delay(offDelay);                 //wait for offDelay time

  digitalWrite(blueLed, HIGH);     //turn on blueLed
  delay(onDelay);                  //wait for onDelay time
  digitalWrite(blueLed, LOW);      //turn off blueLed
  delay(offDelay);                 //wait for offDelay time

  digitalWrite(greenLed, HIGH);    //turn on greenLed
  delay(onDelay);                  //wait for onDelay time
  digitalWrite(greenLed, LOW);     //turn off greenLed
  delay(offDelay);                 //wait for offDelay time
}
