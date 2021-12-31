#include <Servo.h>
Servo MyServo_Base;
Servo MyServo_gripper;
Servo MyServo_left;
Servo MyServo_right;

void setup() {
  MyServo_left.attach(5);
  MyServo_right.attach(3);
  MyServo_gripper.attach(8);
  MyServo_Base.attach(7);
  Serial.begin(9600);

}

void loop() {
  //MyServo_gripper.write(Angle_gripper);
  //MyServo_Base.write(Angle_base);

  MyServo_right.write(180);
  MyServo_left.write(0);
}
