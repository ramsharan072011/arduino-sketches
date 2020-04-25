#include <LiquidCrystal.h>
#include <Wire.h>
#include <Arducam_I2C.h>
#include <DHT.h>


// #define DHTPIN A5
// #define DHTTYPE DHT22 
// DHT dht(DHTPIN, DHTTYPE);
//LiquidCrystal_I2C lcd(0x27,16,2);
Arducam_I2C lcd(0x27,16,2);
DHT dht22(A2,DHT22);
DHT dht11(A3,DHT11);
float temp11,temp22,voltage;
double humidity11,humidity22,UV_Sensor_Value,UV_Index_value;

// initialize the library with the numbers of the interface pins
LiquidCrystal lcdSimple(12,11,5,4,3,2);

 void setup() {

  lcd.init();
  lcd.noBacklight();
  lcd.setCursor(0,0);
  lcd.print("Ram loves MAA!");
  // put your setup code here, to run once:
  Serial.begin(9600); 
  dht22.begin();
  dht11.begin();
  pinMode(A0,INPUT);
   // set up the LCD's number of columns and rows: 
  lcdSimple.begin(16,2);

  // Print a message to the LCD.
  lcdSimple.print("Ram Loves Papa");
}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.clear();
  lcd.setCursor(0,0);
   lcdSimple.print("Ram Loves Papa");
   lcd.setCursor(1,1);
   lcdSimple.print("Ram Loves Papa");
 lcd.print("");
  temp22 = dht22.readTemperature(true);
  humidity22 = dht22.readHumidity();
  
  if (isnan(temp22) or isnan(humidity22)){
    Serial.println("########################################################################");
    Serial.println("                            SYSTEM ERROR IN DHT 22!                     ");
    Serial.println("########################################################################");      
  } else {
      Serial.print("The temperature as per DHT22 is Farenheight:");
      Serial.println(temp22);
      Serial.print("The humidity as per DHT22 is:");
      Serial.println(humidity22);
      delay(5000);
  }
  temp11 = dht11.readTemperature();
  humidity11 = dht11.readHumidity();
   Serial.println(temp11);
  if (isnan(temp11) or isnan(humidity11)){
    Serial.println("########################################################################");
    Serial.println("                            SYSTEM ERROR IN DHT 11!                     ");
    Serial.println("########################################################################");  
  } else {
      Serial.print("The temperature as per DHT11 is:");
      Serial.println(temp11);
      Serial.print("The humidity as per DHT11 is:");
      Serial.println(humidity11);
      delay(5000);
  }

    Serial.println("########################################################################");
    Serial.println("                           UV SENSOR                    ");
    Serial.println("########################################################################"); 
UV_Sensor_Value = analogRead(A0);
voltage = UV_Sensor_Value * 5/1024;
UV_Index_value = voltage*.1;
Serial.print("The UV index is:");
Serial.println(UV_Index_value );
 delay(5000);

}
