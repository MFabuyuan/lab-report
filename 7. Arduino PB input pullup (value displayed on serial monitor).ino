/*
  Arduino PB pullup (value displayed on serial monitor)
  This program enables the builtin pullup resistor on the pushbutton pin by setting it as an INPUT_PULLUP.
  It will read the state of the pushButton using digitalRead() function.
  When pushButton is not pressed it reads HIGH (1) and LOW (0) when pushButton is pressed.
  The state of the pushButton will be displayed on Serial Monitor for troubleshooting purposes.
*/ 

 //declare a variable for the pin
 int pushButton  = 13;    //pushButton pin is connected to pin 13
 
void setup() {
  pinMode(pushButton, INPUT_PULLUP);   //initialize pin as an INPUT with internal pullup resistor enabled
  Serial.begin(9600);     //initialize Serial Monitor with baud rate of 9600
}

void loop() {
  int buttonState = digitalRead(pushButton);   //Read pushButton pin's state and store results in the buttonState variable

  //display pushButton's state on the Serial Montior for troubleshooting
  Serial.print("PB=");                        //Print a label of for pushButton's state
  Serial.print("\t");                         //Add a tab space for easier reading
  Serial.println(buttonState);                //Display pushButton's state on the Serial Monitor
}

