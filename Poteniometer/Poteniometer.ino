int ledPin = 10;

int potentiometerPin = 11;

int value;

float V1;





void setup() {

Serial.begin(9600);



}



void loop() {



value = analogRead(potentiometerPin);

V1 = (255./1023.)*value;

Serial.println(V1);



analogWrite(ledPin,V1);





}
