void setup() {
  // put your setup code here, to run once:
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
}
void loop() {
  // put your main code here, to run repeatedly:
analogWrite(2,150);
analogWrite(3,200);
analogWrite(4,255);
 
}
