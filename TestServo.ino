#include<Servo.h>
Servo myservo;
int servoPin=8;
void setup() {
  // put your setup code here, to run once:
  myservo.attach(servoPin);
}

void loop() {
  // put your main code here, to run repeatedly:
  myservo.write(30);
  delay(1000);
  myservo.write(90);
  delay(1000);
  myservo.write(150);
  delay(1000);
  myservo.write(90);
  delay(1000);
}
