/*
*  Serial1 example with Nucleo 64 STM32F411 which is supported in Arduino IDE by
*  www.github.com/stm32duino
*
*  Description:
*  Sends "Hello World" message through hardware Serial1
*  Baudrate is 9600 Bd
*
*  Connection:
*  Serial1 is connected to PA9 and PA10
*  TX - PA9 ( Arduino D8) -> connect TX of STM32 to RX of USB-UART converter
*  RX - PA10 (Arduino D2) -> connect RX of STM32 to TX of USB-UART converter
*  GND to GND
*
*  Made by http://stm32duino.eu (2018)
*/

// the setup function runs once when you press reset or power the board
void setup() 
{
    // initialize Serial1:
    Serial1.begin(9600);
}

// the loop function runs over and over again forever
void loop()
{
    // send "Hello World" message through Serial1
    Serial1.println("Hello World");
    // wait one second
    delay(1000);
}
