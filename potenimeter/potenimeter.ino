void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(6,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
    int valueResistance = analogRead(A3);
    Serial.println(valueResistance);
    Serial.println("----------");
    Serial.println(valueResistance/4);
    analogWrite(6,valueResistance/4);
}
