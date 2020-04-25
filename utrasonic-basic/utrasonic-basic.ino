const int trigPin = 2;           //connects to the trigger pin on the distance sensor
const int echoPin = 3;  

void setup() {
  // put your setup code here, to run once:
  pinMode(trigPin, OUTPUT);   //the trigger pin will output pulses of electricity
  pinMode(echoPin, INPUT); 
  Serial.begin(9600);
   Serial.println("aaaaaaaaaaaa");  
}

void loop() {
  // put your main code here, to run repeatedly:
    //send out an ultrasonic pulse that's 10ms long
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  int echoTime = pulseIn(echoPin, HIGH); 
   Serial.println(echoTime);   
    delayMicroseconds(1000);
}
