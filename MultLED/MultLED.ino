void setup() {
  // put your setup code here, to run once:
  pinMode(3,OUTPUT); //BLUE
  pinMode(5,OUTPUT); //GREEN
  pinMode(6,OUTPUT); //RED
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(3,HIGH);
  delay(2000);
  digitalWrite(3,LOW);
  digitalWrite(5,HIGH);
  delay(2000);
  digitalWrite(3,HIGH);
  digitalWrite(5,HIGH);
  delay(2000);
  digitalWrite(3,LOW);
  digitalWrite(5,LOW);
}
