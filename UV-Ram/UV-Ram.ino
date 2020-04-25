void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int sensorVlaue = analogRead(A5);
   Serial.println("A5 Pin Value:");
   Serial.println(sensorVlaue);
   Serial.println("*****");
   
   float volt = sensorVlaue *  (5.0 / 1023.0);
   Serial.println("volt:");
   Serial.println(volt);
   Serial.println("*****");

   float uvIndiex = volt / .1;
  Serial.println("UV Index:");
  Serial.println( uvIndiex);
  delay(2000); 
  Serial.println("#############################");
}
