
int water;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
  pinMode(A0,INPUT);
  pinMode(2,OUTPUT);
}

void loop() {
  water=analogRead(A0);
   //digitalWrite(2,LOW);  
  Serial.println(water);
  if(water>650 && water<920){
    digitalWrite(2,HIGH);
    
  }else if(water>550 && water<650){
    digitalWrite(2,HIGH);
    delay(250);
    digitalWrite(2,LOW);
    delay(250);
  }
    else {
    digitalWrite(2,LOW);  
  }
}
