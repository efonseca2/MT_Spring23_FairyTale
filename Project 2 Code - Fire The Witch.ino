#include <Servo.h>



Servo doorServo;
int doorButtonPin = 6;
int doorButtonVal;

Servo chestServo;
int chestButtonPin = 7;
int chestButtonVal;

Servo cellServo;
int cellButtonPin = 4;
int cellButtonVal;

void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:
  doorServo.attach(8);
  doorServo.write(180);
  pinMode(doorButtonPin, INPUT);

  chestServo.attach(12);
  chestServo.write(70);
  pinMode(chestButtonPin, INPUT);

  cellServo.attach(10);
  cellServo.write(90);
  pinMode(cellButtonPin, INPUT);
}

void loop() {
  
  doorButtonVal = digitalRead(doorButtonPin);
  // put your main code here, to run repeatedly:
  if(doorButtonVal == HIGH){
  doorServo.write(90);
  }

  chestButtonVal = digitalRead(chestButtonPin);
  if(chestButtonVal == HIGH){
    chestServo.write(0);
  }
  Serial.println(chestButtonVal);\

  cellButtonVal = digitalRead(cellButtonPin);
  if(cellButtonVal == HIGH){
    cellServo.write(150);
  }
  
  
}
