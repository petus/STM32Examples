/*
*  Serial6 example with Nucleo 64 STM32F411 which 
*  is supported in Arduino IDE by
*  www.github.com/stm32duino
*
*  Description:
*  Sends "Hello World" message through hardware Serial6  
*  Baudrate is 9600 Bd
*
*  Connection:
*  Serial6 is connected to PA11 and PA12
*  TX - PA11 -> connect TX of STM32 to RX of USB-UART converter
*  RX - PA12 -> connect RX of STM32 to TX of USB-UART converter
*  GND to GND
*
* Define serial and RX, TX pins
* HardwareSerial Serial6(rx, tx);
* 
*  Made by http://stm32duino.eu (2018)
*/

// set RX and TX pins
HardwareSerial Serial6(PA12, PA11);

// the setup function runs once when you press reset or power the board
void setup() 
{
    Serial6.begin(9600); // initialize Serial6
}

// the loop function runs over and over again forever
void loop()
{
    // send "Hello World" message through of Serial6
    Serial6.println("Hello World");
    // wait one second
    delay(1000);
}
