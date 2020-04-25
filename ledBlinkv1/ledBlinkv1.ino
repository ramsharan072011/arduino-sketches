void setup() {
  // put your setup code here, to run once:
  pinMode(2,OUTPUT);
  pinMode(4,INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {


  int led=0,temp=0;
  int b1=1;
  int b2=1;
  b2=digitalRead(4);
  Serial.println(b1);
  Serial.println(b2);
  delay(100);
    if(b1!=b2){
    if(led==0){
      led=1;
    }else{
      led=0;
    }
    temp=b1;
    b1=b2;
    b2=temp;
  }
  digitalWrite(2,1);

}
