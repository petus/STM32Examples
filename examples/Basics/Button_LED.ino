/*
*  Button and LED with Nucleo 64 STM32F411 which is supported in Arduino IDE by
*  www.github.com/stm32duino
*
*  Description:
*  If you connect the PC11 with GND, LED is blinking slowly
*  If you connect the PC11 with 3V3, LED is blinking faster
*
*  Connection:
*  Anode of LED is connected to PC10, Cathode of LED to GND
*  Button is connected between PC11 and GND
*
*  Made by http://stm32duino.eu (2018)
*/


// the setup function runs once when you press reset or power the board
void setup() 
{
    // initialize digital pin PC10 as an output.
    pinMode(PC10, OUTPUT);
    // initialize digital pin PC11 as an input.
    pinMode(PC11, INPUT);
}

// the loop function runs over and over again forever
void loop() 
{
    if(digitalRead(PC11))		    // read button
    {
        digitalWrite(PC10, HIGH);   // turn the LED on (HIGH is the voltage level)
        delay(100);                 // wait 100ms
        digitalWrite(PC10, LOW);    // turn the LED off by making the voltage LOW
        delay(100);                 // wait 100ms
    }
    else
    {
        digitalWrite(PC10, HIGH);   // turn the LED on (HIGH is the voltage level)
        delay(500);                 // wait 500ms
        digitalWrite(PC10, LOW);    // turn the LED off by making the voltage LOW
        delay(500);                 // wait 500ms
    }
}
