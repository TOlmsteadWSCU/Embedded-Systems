/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Blink
*/
int led = 13; //This line of code was in the instructions and said it was already included but actually was not?.?.?.?

#define BLUE 3
#define GREEN 5
#define RED 6
int redValue = 255;
int blueValue = 0;
int greenValue = 0;
int delayTime = 10;
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);
  pinMode(RED, HIGH);
  pinMode(GREEN, LOW);
  pinMode(BLUE, LOW);
  
}

// the loop function runs over and over again forever
int loop() {
  digitalWrite(RED, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(10);                       // wait for a second
  digitalWrite(GREEN, LOW); // turn the LED off by making the voltage LOW
  delay(10);                       // wait for a second
}
int loop(){
  digitalWrite(GREEN, LOW);
  delay(10);
  digitalWrite(BLUE, LOW);
  delay(10);
}
int loop(){
  digitalWrite(BLUE, LOW);
  delay(10);
  digitalWrite(RED, HIGH);
  delay(10);
}

