int trigger = 13;
int echo = 10;
float time;

void setup() {
  Serial.begin(9600);
  pinMode(trigger,OUTPUT);
  pinMode(echo,INPUT);
}



void loop() {

  digitalWrite(trigger,LOW); //dont send a wave
  delay(5);
  digitalWrite(trigger,HIGH); // send out a wave for
  delay(10); // 10 milliseconds
  digitalWrite(trigger,LOW);
  time = pulseIn(echo,HIGH) / 2;

  Serial.println(time);
  delay(250);

}
