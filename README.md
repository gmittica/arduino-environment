arduino-environment
===================

Sketch that writes on serial port variables from humidity, temperature, moisture and light sensors.

It was tested with Groove Shield and sensors (http://seeedstudio.com/wiki/GROVE_System).
It needs the DHT library (https://github.com/Seeed-Studio/Grove_Temperature_And_Humidity_Sensor/tree/master/Humidity_Temperature_Sensor)

### Usage
Change pins, serial port and DHT sensor type, if needed.

### OutPut
Write on serial port a report each second like this one:
moisture:24
humidity:35.90 
temperature:22.10 
light:768

Humidity is a percentage, temperature is based on celcius, light from 0 to 1023;



