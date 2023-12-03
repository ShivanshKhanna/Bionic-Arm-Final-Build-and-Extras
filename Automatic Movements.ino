#include <Servo.h>
Servo myservo_1;
Servo myservo_2;
Servo myservo_3;
Servo myservo_4;
Servo myservo_5;

void setup() {
myservo_1.attach(9);
myservo_2.attach(A2);
myservo_3.attach(A3);
myservo_4.attach(8);
myservo_5.attach(A5);
Serial.begin(9600);
}
void loop() {
//fist
myservo_1.write(180);
delay(150);
myservo_2.write(180);
delay(150);
myservo_3.write(180);
delay(150);
myservo_4.write(180);
delay(150);
myservo_5.write(180);
delay(150);

//palm
myservo_1.write(0);
delay(150);
myservo_2.write(0);
delay(150);
myservo_3.write(0);
delay(150);
myservo_4.write(0);
delay(150);
myservo_5.write(0);
delay(150);

//Thumb
myservo_5.write(180);
delay(150);
myservo_5.write(0);

//Spiderman
myservo_1.write(180);
delay(150);
myservo_2.write(0);
delay(150);
myservo_3.write(0);
delay(150);
myservo_4.write(180);
delay(150);
myservo_5.write(180);
delay(150);





}
