int red=0,blue=0,green=0;

void setup() {
  // put your setup code here, to run once:
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,INPUT_PULLUP);
pinMode(6,INPUT_PULLUP);
pinMode(7,INPUT_PULLUP);
pinMode(8,INPUT_PULLUP);

}
void loop() { 
  if((digitalRead(5)==0) && (digitalRead(6)==1) && (digitalRead(7)==1)){ //blue
    blue++;
    analogWrite(4,blue);
  }
  if((digitalRead(5)==1) && (digitalRead(6)==0) && (digitalRead(7)==1)){  // Green
    green++;
    analogWrite(3,green); 
  }
  if((digitalRead(5)==1) && (digitalRead(6)==1) && (digitalRead(7)==0)){ // Red
    red++;
    analogWrite(2,red); 
  }
  if(digitalRead(8)==0){
    analogWrite(4,0);
    analogWrite(3,0);
    analogWrite(2,0);
    red=0;
    blue=0;
    green=0;
    delay(1000); 
  }
  delay(100); 
}
