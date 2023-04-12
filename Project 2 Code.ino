#include <Servo.h>



Servo myservo;
int doorButtonPin = 6;
int doorButtonVal;

void setup() {
  // put your setup code here, to run once:
  myservo.attach(8);
  myservo.write(180);
  pinMode(doorButtonPin, INPUT);
}

void loop() {
  doorButtonVal = digitalRead(doorButtonPin);
  // put your main code here, to run repeatedly:
  if(doorButtonVal == HIGH){
  myservo.write(90);
  }
  
}
