
void setup() {
  // put your setup code here, to run once:

pinMode(A0,INPUT);
pinMode(A1,INPUT);
pinMode(2,INPUT_PULLUP);
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
 
Serial.print("X:");  
Serial.println(analogRead(A0));
Serial.print("Y:"); 
Serial.println(analogRead(A1));
Serial.print("Button:"); 
Serial.println(digitalRead(2));
Serial.println("########################:"); 
delay(2000);
}
