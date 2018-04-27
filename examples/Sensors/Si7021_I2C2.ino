/*
*  Si7021 temperature/humidity sensor (I2C2 bus) example with Nucleo 64 
*  STM32F411 which is supported in Arduino IDE by
*  www.github.com/stm32duino
*
*  Description:
*  Measures temperature and humidity from Si7021 which is connected to 
*  I2C2 bus and sends through Serial (STLink, 9600 Bd)
*
*  Connection:
*  Nucleo 64 | Si7021
*  PB10 (D6) - SCL
*  PB3 (D3) - SDA
*  3V3 - Vin
*  GND - GND
*
*  Si7021 Arduino library by LowPower Lab
*  https://github.com/LowPowerLab/SI7021
*
*  Made by http://stm32duino.eu (2018)
*
*/

#include <Wire.h>
#include <SI7021.h>

SI7021 sensor;

// the setup function runs once when you press reset or power the board
void setup() 
{
  Wire.setSCL(PB_10);  // alternative pinout of I2C2_SCL - PB10 (D6) 
  Wire.setSDA(PB_3);   // alternative pinout of I2C2_SDA - PB3 (D3) 

  sensor.begin();	// initialization of Si7021 sensor
  Serial.begin(9600);   // initialization of Serial (STLink), 9600 Bd
  
  // wait for serial
  while (!Serial) {
    delay(100);
  }

  Serial.println("Test of Si7021");
  
  if (!sensor.begin()) 
  {
    Serial.println("Si7021 sensor wasn't found");
    while (true);
  }
}


// the loop function runs over and over again forever
void loop() 
{
  // send data through onboard USB-UART converter (STLink)
  Serial.print("Temperature: ");
  Serial.print(String(sensor.getCelsiusHundredths()/100.0, 2*/)); // 2450 = 24.50 °C
  Serial.println(" °C");

  Serial.print("Humidity: ");
  Serial.print(sensor.getHumidityPercent());
  Serial.println(" %");
  delay(1000);
}
