void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int senorvalue = analogRead(A1);

  Serial.println(senorvalue);
 
  delay(1000);
}
