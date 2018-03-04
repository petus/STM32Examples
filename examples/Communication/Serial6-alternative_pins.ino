/*
*  Serial6 with alternative pins example with Nucleo 64 STM32F411 which 
*  is supported in Arduino IDE by
*  www.github.com/stm32duino
*
*  Description:
*  Sends "Hello World" message through hardware alternative pins of Serial6  
*  Baudrate is 9600 Bd
*  Alternative pins are described in /core/variant/PeripheralPins.c
*  Change Serial interface to "All (up to 10)" in Arduino IDE -> Tools
*
*  Connection:
*  Serial6 is alternatively connected to PC6 and PC7
*  TX - PC6 -> connect TX of STM32 to RX of USB-UART converter
*  RX - PC7 -> connect RX of STM32 to TX of USB-UART converter
*  GND to GND
*
*  Made by http://stm32duino.eu (2018)
*/

// the setup function runs once when you press reset or power the board
void setup() 
{
    Serial6.setTx (PC6); // alternative Tx of Serial6
    Serial6.setRx (PC7); // alternative Rx of Serial6
    Serial6.begin(9600); // initialize Serial6
}

// the loop function runs over and over again forever
void loop()
{
    // send "Hello World" message through alternative pins of Serial6
    Serial6.println("Hello World");
    // wait one second
    delay(1000);
}
