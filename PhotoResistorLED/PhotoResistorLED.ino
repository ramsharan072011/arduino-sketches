int photo_resisistor_value,tilt_detector;
void setup() {
  // put your setup code here, to run once:
  pinMode(A0,INPUT);
  pinMode(7,OUTPUT);
  pinMode(4,OUTPUT);
  digitalWrite(4,HIGH); 
  Serial.begin(9600);
  
}

void loop() {
   // your main code here, to run repeatedly:
  photo_resisistor_value=analogRead(A0);
  tilt_detector=digitalRead(4);
  Serial.println(tilt_detector);
    if(photo_resisistor_value>499 &&162019
    tilt_detector == 0){
      digitalWrite(7,HIGH); 
    }
    else if (photo_resisistor_value<499 && tilt_detector == LOW) {
            digitalWrite(7,LOW); 
    }
}
