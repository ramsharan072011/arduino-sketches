void setup() {
  // put your setup code here, to run once:
   
  Serial.begin(9600);
  
  float height = 3.8;
  int age = 8;
  int shoeSize = 7;
  char firstName[4] = "Ram";
  char lastName[7] = "Sharan";

  Serial.println(height);
  Serial.println(age);
  Serial.println(shoeSize);
  Serial.println(firstName);
  Serial.println(lastName);

}

void loop() {
  // put your main code here, to run repeatedly:

}
