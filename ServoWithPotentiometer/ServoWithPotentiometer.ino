#include <Servo.h>


double ram,angle;
Servo servo;

void setup() {
  // put your setup code here, to run once:
 pinMode(A1,INPUT);
 servo.attach(9);
 Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  ram = analogRead(A1);
  angle=(180.0/1024.0)*ram;
  Serial.println(angle); 
  servo.write(angle);
  delay(20);

}
