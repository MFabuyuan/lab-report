/*
  Arduino PB pullup (value displayed on serial monitor)
  This program configures a pushButton which is connected to a resistor the pulls down the voltage.
  The pin is set as an INPUT and reads the state of the pushButton using digitalRead() function.
  When pushButton is not pressed it reads LOW (0), and HIGH (1) when pushButton is pressed.
  The state of the pushButton will be displayed on Serial Monitor for troubleshooting purposes.
*/ 

 //declare a variable for the pin
 int pushButton  = 7;    //pushButton pin is connected to pin 7

void setup() {
  pinMode(pushButton, INPUT);   //initialize pushButton pin as an INPUT with internal pullup resistor
  Serial.begin(9600);           //initialize Serial Monitor
}

void loop() {
  int buttonState = digitalRead(pushButton);    //read pushButton pin's state and store results in the buttonState variable

  //display pushbutton's state on the Serial Monitor for troubleshooting
  Serial.print("PB=");                         //print a label for pushButton's state
  Serial.print("\t");                          //add a tab space for easier reading
  Serial.println(buttonState);                 //display pushButton's state to the Serial Monitor
}

