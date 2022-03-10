/* This sketch will be used to create a cycle where a light fades up
from completely off to completely on over the course of two seconds*/

// Initialize variables
int Time=4.25;
int pin=10;
int y;

void setup()
{
    // Set up the LED pin
    pinMode(pin,OUTPUT);
    
    // Fade LED from 0 to full power over one second
    for (y = 0; y < 256; y=y+=1){
        analogWrite(pin, y);
        delay(Time);
    }
    
    // Fade LED from full power to 0 over one second
    for (y = 255; y >= 0; y = y - 1){
        analogWrite(pin, y);
        delay(Time);
    }

}

void loop()
{

}
