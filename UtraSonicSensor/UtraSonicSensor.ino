#include <Servo.h>

int trigger = 4;
int echo = 3;
int time=0;
int distance = 7;
float speed;
Servo servo1;

void setup() {
  Serial.begin(9600);
  pinMode(trigger,OUTPUT);
  pinMode(echo,INPUT);
  pinMode(2,OUTPUT);//Red
  pinMode(6,OUTPUT);//Yellow
  pinMode(5,OUTPUT);//Green
  pinMode(8,OUTPUT);//Buzzer   
  servo1.attach(A0);
  servo1.write(0);
  

}
void loop() 
{
       time = pulseIn(echo,LOW);
      digitalWrite(trigger,LOW); //dont send a wave
      delay(5);
      digitalWrite(trigger,HIGH); // send out a wave for
      delay(10); // 10 milliseconds
      //delayMicroseconds(10);
      digitalWrite(trigger,LOW);
      //delay(10); 
      time = pulseIn(echo,HIGH);
      Serial.println(time);
      speed = (time*.0343)/2; 
       delay(100);
       digitalWrite(5,HIGH);
        tone(8,100);
        if (time < 750)
        {   
            noTone(8);
            digitalWrite(5,LOW);
            digitalWrite(6,HIGH);
            tone(8,3000,1000);
            Serial.println('wash');
                for(int i = 0;i<90;i++)
                {
                     servo1.write(i);
                     delay(25);
                }
          
          for(int i = 90;i>=0;i--)
                {
                     servo1.write(i);
                     delay(50);
                }
                digitalWrite(6,LOW);
                digitalWrite(2,HIGH);
                tone(8,3000,500);
                delay(10000);
                digitalWrite(2,LOW);
                digitalWrite(5,HIGH);
                }
   
}
