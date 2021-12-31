#include <Servo.h>
Servo MyServo_Base;
Servo MyServo_gripper;
Servo MyServo_left;
Servo MyServo_right;

void setup() {
  MyServo_left.attach(5);
  MyServo_right.attach(3);
  MyServo_gripper.attach(7);
  MyServo_Base.attach(8);
  Serial.begin(9600);

}

void loop() {
  MyServo_gripper.write(90);
//  MyServo_Base.write(0);

//  MyServo_right.write(180);
//  MyServo_left.write(30);
}
