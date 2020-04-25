void setup() {
  // put your setup code here, to run once:
  int photo_resisistor_value;
  pinMode(A0,INPUT);
  pinMode(7,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int photo_resisistor_value;
  photo_resisistor_value=analogRead(A0);
  Serial.println(photo_resisistor_value);
    if(photo_resisistor_value>499){
      digitalWrite(7,HIGH); 
    }
    else if (photo_resisistor_value<499) {
            digitalWrite(7,LOW); 
    }
}
