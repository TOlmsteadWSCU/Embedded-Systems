//www.elegoo.com
//2016.12.08
#include <Servo.h>
#include "SR04.h"
#define TRIG_PIN 12
#define ECHO_PIN 11
SR04 sr04 = SR04(ECHO_PIN,TRIG_PIN);
long a;
Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position

void setup() {
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
  Serial.begin(9600);
  delay(1000);
  Serial.begin(9600);
  delay(1000);
}

void loop() {
  
  delay(100);
  a = sr04.Distance();

  if(a<50 && a!=0){
    myservo.write(180);
    delay(100);

    
  } else {
    
      myservo.write(20);
  }//if statement

  Serial.print(a);
  Serial.println("cm");
}//loop

