/*
*  PWM and LED with Nucleo 64 STM32F411 which is supported in Arduino IDE by
*  www.github.com/stm32duino
*
*  Description:
*  The light intensity of LED is changed by PWM
*
*  Connection:
*  The LED Anode is connected to PA0, LED Cathode to GND
*
*  Made by Petr Sramek (2018)
*  https://www.linkedin.com/in/petr-%C5%A1r%C3%A1mek-7b0072107/
*/

// the setup function runs once when you press reset or power the board
void setup() 
{
    // initialize digital pin PA0 as an output.
    pinMode(PA0, OUTPUT);
}

// the loop function runs over and over again forever
void loop() 
{
    analogWrite(PA0, 250);    // PWM output for PA0, shines more
    delay(500);               // delay 500ms 
    analogWrite(PA0, 50);     // PWM output for PA0, shines less
    delay(500);               // delay 500ms

}
