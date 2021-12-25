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
  int analogVal_xl = analogRead(A0);
  int analogVal_yl = analogRead(A1);

  int analogVal_xr = analogRead(A2);
  int analogVal_yr = analogRead(A3);



  int Angle_gripper = map(analogVal_xl, 450, 1023, 52, 100);
  int Angle_base = map(analogVal_yr, 0, 1023, 0, 180);

  int Angle_left = map(analogVal_xr, 0, 1023, 0, 180);
  int Angle_right = map(analogVal_yl, 0, 1023, 180, 0);


  MyServo_gripper.write(Angle_gripper);
  MyServo_Base.write(Angle_base);

  MyServo_right.write(Angle_right);
  MyServo_left.write(Angle_left);

  
  Serial.print("Gripper angle: ");
  Serial.print(Angle_gripper);
  Serial.print("  Right Motor: ");
  Serial.println(Angle_right);

  //  Serial.print("Base angle: ");
  //  Serial.print(Angle_base);
  //  Serial.print("  Left Motor: ");
  //  Serial.println(Angle_left);

}
