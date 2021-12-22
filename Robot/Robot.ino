#include <Servo.h>
Servo MyServo;

void setup() {
  MyServo.attach(7);
  Serial.begin(9600);

}

void loop() {
  int analogVal = analogRead(A0);
  int Angle = map(analogVal, 0, 1023, 0, 180);
  MyServo.write(Angle);
  Serial.println(Angle);

}
