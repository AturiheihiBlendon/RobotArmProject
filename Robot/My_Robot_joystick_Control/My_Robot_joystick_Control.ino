#include <Servo.h>
Servo MyServo_Base;
Servo MyServo_gripper;
Servo MyServo_left;
Servo MyServo_right;

//int Base_angle = 90;
//int Gripper_angle =;
int RM_angle = 135;
int LM_angle = 30;

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

  if (analogVal_xl < 340) RM_angle -=2.8125;
  else if (analogVal_xl > 680) RM_angle +=2.8125;
  RM_angle = min(180, max(90,RM_angle));
  MyServo_right.write(RM_angle);

  if (analogVal_xr < 340) LM_angle -=2.8125;
  else if (analogVal_xr > 680) LM_angle +=2.8125;
  LM_angle = min(100, max(0,LM_angle));
  MyServo_left.write(LM_angle);


  Serial.print("analogVal_xr: ");
  Serial.println(analogVal_xr);
  Serial.println( );
  Serial.print("LM_angle: ");
  Serial.println(LM_angle);




}
