/*
Fire the Witch
Team Members: Camilo Medel and Evan Fonseca
Description: Code for interactive narrative enclosure which uses servos and sensor switches to tell a story.
*/

#include <Servo.h>


//VARIABLES
//escape door initilization
Servo doorServo;
int doorButtonPin = 6;
int doorButtonVal;

//chest initilization
Servo chestServo;
int chestButtonPin = 7;
int chestButtonVal;

//captivity cell initilization
Servo cellServo;
int cellButtonPin = 4;
int cellButtonVal;

//SETUP CODE THAT PLACES SERVOS AT THEIR ORIGINAL POSITIONS
void setup() {
  //escape door setup
  doorServo.attach(8);
  doorServo.write(180);
  pinMode(doorButtonPin, INPUT);

  //chest setup
  chestServo.attach(12);
  chestServo.write(70);
  pinMode(chestButtonPin, INPUT);

  //captivity cell setup
  cellServo.attach(10);
  cellServo.write(90);
  pinMode(cellButtonPin, INPUT);
}

//CONDITIONAL STATEMENTS FOR MOVING SERVOS FOR WHEN A CORRELATING SENSOR SWITCH IS SWITCHED
void loop() {
  //escape door conditional
  doorButtonVal = digitalRead(doorButtonPin);
  if (doorButtonVal == HIGH) {
    doorServo.write(70);
  }

  //chest conditional
  chestButtonVal = digitalRead(chestButtonPin);
  if (chestButtonVal == HIGH) {
    delay(5000);
    chestServo.write(0);
  }
  Serial.println(chestButtonVal);

  //captivity cell conditional
  cellButtonVal = digitalRead(cellButtonPin);
  if (cellButtonVal == HIGH) {
    delay(3000);
    cellServo.write(140);
  }
}
