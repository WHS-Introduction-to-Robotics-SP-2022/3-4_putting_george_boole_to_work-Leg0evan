/* This sketch will be used to create a cycle where three lights turn
on in sequence and the Serial monitor displays the status of those 
lights. */

// Initialize variables

int x = 1;
int pinNum=9;
int pin1=9;
int pin2=8;
int pin3=7;

void setup()
{
    // Start Serial Moniter and set up pins
    Serial.begin(9600);
    pinMode(pin1, OUTPUT);
    pinMode(pin2,OUTPUT);
    pinMode(pin3, OUTPUT);
    
    while (x < 4) {
        // Display the cycle number in the Serial Monitor
        Serial.print("Cycle no ");
        Serial.println(x);
        
        // Turn on each LED in sequence
        digitalWrite(pinNum, HIGH);
        pinNum=pinNum-1;
        delay(2000);
        x = x + 1;
    }
}

void loop()
{

}
