/*
  PB not pressed RG on PB pressed RB on
  This program enables the builtin pullup resistor on the pushbutton pin by setting it as an INPUT_PULLUP.
  An RGB led is used to create different colors dpending on the state of the pushButton.
  When pushButton is not pressed, Red and Green is turned on.
  When pushButton is pressed, Red and Blue is turned on and Green will remain on.
  It will read the state of the pushButton using digitalRead() function.
  The pushButton's state will be displayed on Serial Monitor for troubleshooting purposes.
 */
 

 //declare variables for the pins
 int pushButton = 13;     //pushButton is conneted to pin 13
 int Red   = 10;          //pushButton is conneted to pin 10
 int Green = 11;          //pushButton is conneted to pin 11
 int Blue  = 12;          //pushButton is conneted to pin 12

void setup() {
  pinMode(pushButton, INPUT_PULLUP);     //initialize pin as an INPUT with internal pullup resistor enabled
  pinMode(Red,   OUTPUT);     //initialize Red pin as an OUTPUT
  pinMode(Green, OUTPUT);     //initialize Green pin as an OUTPUT
  pinMode(Blue,  OUTPUT);     //initialize Blue pin as an OUTPUT
  Serial.begin(9600);         //initialize Serial Monitor with baud rate of 9600
}

void loop() {
  int buttonState = digitalRead(pushButton);     //Read pushButton pin's state and store results in the buttonState variable    
  digitalWrite(Red, HIGH);              //turn on Red, which is always on
  digitalWrite(Green, buttonState);     //turn on Green led if pushButton is not pressed (HIGH)
  digitalWrite(Blue, !buttonState);     //turn on Blue led  if pushButton is pressed (LOW)

  ////Display pushButton's state on the Serial Monitor for troubleshooting
  Serial.print("PB=");                 //Print a label for pushButton's state
  Serial.print("\t");                  //Add a tab space for easier reading
  Serial.println(buttonState);         //Display pushButton's state on the Serial Monitor
}


