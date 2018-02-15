/*
*  LED blinking with Nucleo 64 STM32F411 which is supported in Arduino IDE by
*  www.github.com/stm32duino
*
*  Description:
*  Turns on an LED for one second, then off for one second, repeatedly.
*
*  Connection:
*  Anode of LED is connected to PC10, Cathode of LED to GND
*
*  Made by Petr Sramek (2018)
*  https://www.linkedin.com/in/petr-%C5%A1r%C3%A1mek-7b0072107/
*/


// the setup function runs once when you press reset or power the board
void setup() 
{
    // initialize digital pin PC10 as an output.
    pinMode(PC10, OUTPUT);
}

// the loop function runs over and over again forever
void loop() 
{
    digitalWrite(PC10, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(1000);                // wait 1000ms
    digitalWrite(PC10, LOW);    // turn the LED off by making the voltage LOW
    delay(1000);                // wait 1000ms
}
