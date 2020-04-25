#include <Servo.h>
int angle=0;
Servo s1;

void setup() {
  // put y)our setup code here, to run once:

s1.attach(9);
s1.write(0);
  
}

void loop() {
  // put your main code here, to run repeatedly:

  for(angle=0;angle <= 180 && angle >= 0;angle=angle+3){
    s1.write(angle);
    delay(20);
  }
  for(angle=180;angle >= 0 && ;angle=angle-3){
    s1.write(angle);
    delay(20);
  }  
}
