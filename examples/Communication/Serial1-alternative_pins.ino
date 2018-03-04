/*
*  Serial1 with alternative pins example with Nucleo 64 STM32F411 which 
*  is supported in Arduino IDE by
*  www.github.com/stm32duino
*
*  Description:
*  Sends "Hello World" message through hardware alternative pins of Serial1  
*  Baudrate is 9600 Bd
*  Alternative pins are described in /core/variant/PeripheralPins.c
*
*  Connection:
*  Serial1 is alternatively connected to PB6 and PB7
*  TX - PB6 -> connect TX of STM32 to RX of USB-UART converter
*  RX - PB7 -> connect RX of STM32 to TX of USB-UART converter
*  GND to GND
*
*  Made by http://stm32duino.eu (2018)
*/

// the setup function runs once when you press reset or power the board
void setup() 
{
    Serial1.setTx (PB6); // alternative Tx of Serial1
    Serial1.setRx (PB7); // alternative Rx of Serial1
    Serial1.begin(9600); // initialize Serial1
}

// the loop function runs over and over again forever
void loop()
{
    // send "Hello World" message through alternative pins of Serial1
    Serial1.println("Hello World");
    // wait one second
    delay(1000);
}
