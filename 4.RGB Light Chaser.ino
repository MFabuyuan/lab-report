 /*
   RGB Chaser Program

   This program creates an RGB light chaser effect with colors of Red, Green, and Blue connected to pins 9, 8, and 7.
   Each color will turn On and OFF sequentially with one second delay.
   Vary the delay time to adjust the speed pattern.
   analogWrite() function is used to set the brightness of each color.
   O value represents off state, while 255 represents full brightness.
   Vary the values of Red, Blue, and Green to create different colors.
*/ 

 //define the pin number for the RGB LED
 int Red = 9;
 int Green = 8;
 int Blue = 7;


void setup() {
  // Initialize pins as outputs
  pinMode(Red, OUTPUT);
  pinMode(Green, OUTPUT);
  pinMode(Blue, OUTPUT);
}

// the loop routine runs over and over again
void loop() {
  analogWrite(9, 255);    //pin 9 is set to maximum value (255), Red light is displayed
  analogWrite(8, 0);      //pin 8 is set to 0 value, no light
  analogWrite(7, 0);      //pin 7 is set to 0 value, no light
  delay(1000);            //wait for a second
  
  analogWrite(9, 0);      //pin 9 is set to 0, no light
  analogWrite(8, 255);    //pin 8 is set to maximum value (255), Green light is displayed
  analogWrite(7, 0);      //pin 7 is set to 0, no light
  delay(1000);            //wait for a second
  
  analogWrite(9, 0);      //pin 9 is set to 0, no light
  analogWrite(8, 0);      //pin 8 is set to 0, no light
  analogWrite(7, 255);    //pin 7 is set to maximum value (255), Blue light is displayed
  delay(1000);            //wait for a second

  //set the brightness of all pins 9(Red), 8(Green), & 7(Blue) to create White color
  analogWrite(9, 255);  
  analogWrite(8, 255);
  analogWrite(7, 255);
  delay(1000);             //wait for a second

  //turn back to Blue
  analogWrite(9, 0);       //pin 9 is set to 0, no light
  analogWrite(8, 0);       //pin 8 is set to 0, no light
  analogWrite(7,255);      //pin 7 is set to maximum value (255), Blue light is displayed
  delay(1000);             //wait for a second

  analogWrite(9, 0);       //pin 9 is set to 0, no light
  analogWrite(8, 255);     //pin 8 is set to maximum value (255), Green light is displayed
  analogWrite(7, 0);       //pin 7 is set to 0, no light
  delay(1000);             //wait for a second


}
