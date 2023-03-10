/*
  Arduino PB pullup (value displayed on serial monitor)

  This program enables the builtin pullup resistor on the pushbutton pin by setting it as an INPUT_PULLUP.
  When pushButton is not pressed it reads HIGH (1).
  When pushButton is pressed it reads LOW (0).
  The state of the pushButton will display on the Serial Monitor.
*/ 

 //define the pin number for the pushButton
 int pushButton = 8;

void setup() {
  pinMode(8, INPUT_PULLUP);   //initialize pin as an INPUT_PULLUP
  Serial.begin(9600);         //initialize Serial Monitor
}

void loop() {
  int buttonState = digitalRead(pushButton);  //Read pushButton's state
  Serial.print("PB=");                        //Print a label for pushButton's state
  Serial.print("\t");                         //Add a tab space
  Serial.println(buttonState);                //Display pushButton's state on the Serial Monitor
  
}
