#include <Servo.h>

Servo myservo = Servo();

const int servoPin = 0;

void setup() {
}

void loop() {
  for (int pos = 0; pos <= 180; pos++) {  // go from 0-180 degrees
    myservo.write(servoPin, pos);         // set the servo position (degrees)
    delay(100);
  }
  for (int pos = 180; pos >= 0; pos--) {  // go from 180-0 degrees
    myservo.write(servoPin, pos);         // set the servo position (degrees)
    delay(100);
  }
}
