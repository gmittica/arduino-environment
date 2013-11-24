/**
  Author: Gabriele Mittica
  Licence: public
  requires dht for advance humidity and temperature sensor
*/
#include "DHT.h";

const int moisturePin = A3; //moisture sensor pin
const int lightPin = A1; //light sensor pin
const float humidityTemperaturePin = A0; //hunidity+temperature pint
const float humidityTemperatureType = DHT22; //type of senso (DHT11, DHT22, DHT21)

//environment variables
int moistureValue = 0;  
int lightValue = 0;
float humidityValue = 0;
float temperatureValue = 0;

DHT dht(humidityTemperaturePin, humidityTemperatureType);

void setup() {
  //start serial and dht
   dht.begin();
   Serial.begin(9600);  
}

void loop() {
  // read values from sensors
  moistureValue = analogRead(moisturePin);
  lightValue = analogRead(lightPin); 
  humidityValue = dht.readHumidity();
  temperatureValue = dht.readTemperature(); 
 
  //ZzzZ..zzZZ....zZz..zZZ    
  delay(1000);  

  //write to serial  
  Serial.print("moisture:" );                       
  Serial.println(moistureValue);
  Serial.print("light:");
  Serial.println(lightValue);  
  Serial.print("humidity:");
  Serial.println(humidityValue);
  Serial.print("temperature:");
  Serial.println(temperatureValue);
}
