
 int led1,led2,prev=1,curr;
 
void setup() {
  // put your setup code here, to run once:
   pinMode(2,OUTPUT); //RED
   pinMode(4,INPUT_PULLUP); //BLUE
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
 
  curr=digitalRead(4);
  Serial.println("curr");
  Serial.println(curr);
  Serial.println("prev");
  Serial.println(prev);
  if(curr==0){
    prev=0;
  }
  if(curr==1 and prev==0){
    prev=1;
    if(led1==0){
              digitalWrite(2,1);
              led1=1;
    }
    else{
              digitalWrite(2,0);
              led1=0;
    }
  }

  if(curr==1 and prev==0){
    prev=1;
  }
  delay(100);

}
