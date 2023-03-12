/*
  This program enables the builtin pullup resistor on the pushbutton pin by setting it as an INPUT_PULLUP.
  It will read the state of the pushButton using digitalRead() function.
  When pushButton is not pressed it RGB Led is HIGH (1) and white color appears.
  RGB Led is LOW (0) when pushButton is pressed.
  The state of the pushButton will be displayed on Serial Monitor for troubleshooting purposes.
*/ 
 

 //declare variables for the pins
 int pushButton = 13;     //pushButton pin is connected to pin 13
 int Red   = 10;          //Red pi is connected to pin 10
 int Green = 11;          //Green pin is connected to pin 11
 int Blue  = 12;          //Blue pin is connected to pin 12

void setup() {
  pinMode(pushButton, INPUT_PULLUP);   //initialize pin as an INPUT with internal pullup resistor enabled
  pinMode(Red,   OUTPUT);    //initialize Red pin as an OUTPUT
  pinMode(Green, OUTPUT);    //initialize Green pin as an OUTPUT
  pinMode(Blue,  OUTPUT);    //initialize Blue pin as an OUTPUT
  Serial.begin(9600);        //initialize Serial Monitor with baud rate of 9600
 }

void loop() {
  int buttonState = digitalRead(pushButton);    //read pushButton pin's state and store results in the buttonState variable
  if (buttonState==HIGH) {        //pushButton is not pressed RGB led is on (HIGH), white color appears
    digitalWrite(Red,   HIGH);    //turn on Red led
    digitalWrite(Green, HIGH);    //turn on Green led
    digitalWrite(Blue,  HIGH);    //turn on Blue led
  }

  else {                          //pushButton is pressed RGB led is off
    digitalWrite(Red,   LOW);     //turn off Red led
    digitalWrite(Green, LOW);     //turn off Green led
    digitalWrite(Blue,  LOW);     //turn off Blue led
  }
  
  //display pushButton's state on the Serial Monitor for troubleshooting
  Serial.print("PB=");            //print a label for pushButton's state
  Serial.print("\t");             //add a tab space for easier reading
  Serial.println(buttonState);    //display pushButton's state on the Serial Monitor
}

