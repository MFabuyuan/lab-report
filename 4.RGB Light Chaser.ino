 /*
   RGB Chaser Program
  This program creates an RGB light chaser effect using RGB led.
  The RGB led will change colors sequentially with a delay of 100 milliseconds.
  The onDelay and offDelay variables are used to control the delay time between turning the LEDs on and off.
  The RGB light chaser pattern's speed can be varied by adjusting the onDelay and offDelay variables.
*/ 


 //delcare variables for the pins and the delay time
 int Red   = 10;         //Red pin is connected to pin 10
 int Green = 11;         //Gren pin is connected to pin 11
 int Blue  = 12;         //Blue pin is connected to pin 12
 int onDelay  = 100;    //variable for delay time when led is on (in milliseconds)
 int offDelay = 100;    //variable for delay time when led is off (in milliseconds)

void setup() {
  pinMode(Red,   OUTPUT);     //initialize Red pin as an OUTPUT
  pinMode(Green, OUTPUT);     //initialize Green pin as an OUTPUT
  pinMode(Blue,  OUTPUT);     //initialize Blue pin as an OUTPUT
}

void loop() {
  digitalWrite(Red, HIGH);        //turn on Red led    
  delay(onDelay);                 //wait for onDelay time
  digitalWrite(Red, LOW);         //turn off Red led
  delay(offDelay);                //wait for offDelay time

  digitalWrite(Green, HIGH);      //turn on Green led
  delay(onDelay);                 //wait for onDelay time
  digitalWrite(Green, LOW);       //turn off Green led
  delay(offDelay);                //wait for offdDelay time

  digitalWrite(Blue, HIGH);       //turn on Blue led 
  delay(onDelay);                 //wait for onDelay time
  digitalWrite(Blue, LOW);        //turn off Blue led 
  delay(offDelay);                //wait for offDelay time

  digitalWrite(Red,   HIGH);      //turn on Red led 
  digitalWrite(Green, HIGH);      //turn on Green led 
  digitalWrite(Blue,  HIGH);      //turn on Blue led 
  delay(onDelay);                 //wait for onDelay time
  digitalWrite(Red,   LOW);       //turn off Red led
  digitalWrite(Green, LOW);       //turn off Green led
  digitalWrite(Blue,  LOW);       //turn off Blue led
  delay(offDelay);                //wait for offDelay time

  digitalWrite(Blue, HIGH);       //turn on Blue led 
  delay(onDelay);                 //wait for onDelay time
  digitalWrite(Blue, LOW);        //turn off Blue led 
  delay(offDelay);                //wait for offDelay time

  digitalWrite(Green, HIGH);      //turn on Green led 
  delay(onDelay);                 //wait for onDelay time
  digitalWrite(Green, LOW);       //turn off Green led
  delay(offDelay);                //wait for offDelay time
}
