/*
  Arduino PB pullup (value displayed on serial monitor)

  This program configures a pushButton on the Arduino board's pin 8 and displays the state of the button on the Serial Monitor.
  A pullup resistor is connected to the pin.
  The pin is in INPUT mode.
  When pushButton is not pressed it reads HIGH (1), and LOW (0) when pushButton is pressed.
*/ 

 //define the pin number for the pushButton
 int pushButton = 8;

void setup() {
  pinMode(8, INPUT);   //initialize pin as an INPUT
  Serial.begin(9600);   //initialize Serial Monitor
}

void loop() {
  int buttonState = digitalRead(pushButton);  //Read pushButton's state
  Serial.print("PB=");                        //Print a label for pushButton's state
  Serial.print("\t");                         //Add a tab space
  Serial.println(buttonState);                //Display pushButton's state to the Serial Monitor
  
}
