/*
*  Serial example with Nucleo 64 STM32F411 which is supported in Arduino IDE by
*  www.github.com/stm32duino
*
*  Description:
*  Sends "Hello World" message through onboard USB-UART converter (ST-Link)
*  Baudrate is 9600 Bd
*
*  Connection:
*  -
*
*  Made by Petr Sramek (2018)
*  https://www.linkedin.com/in/petr-%C5%A1r%C3%A1mek-7b0072107/
*/
// the setup function runs once when you press reset or power the board
void setup() 
{
    // initialize serial:
    Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop()
{
    // send "Hello World" message through onboard USB-UART converter (STLink)
    Serial.println("Hello World");
    // wait one second
    delay(1000);
}
