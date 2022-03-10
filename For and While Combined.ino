int Time=4.25;
int y;
int x = 1;
int pin=10;
int pinNum=9;
int pin1=9;
int pin2=8;
int pin3=7;

void setup()
{
  Serial.begin(9600);
  pinMode(pin1, OUTPUT);
  pinMode(pin2,OUTPUT);
  pinMode(pin3, OUTPUT);
  while(x<4){
    for (y = 0; y < 256; y=y+=1){
            analogWrite(pin, y);
            delay(Time);
        }
    for (y = 255; y >= 0; y = y - 1){
      analogWrite(pin, y);
      delay(Time);
      }
    Serial.print("Cycle no ");
    Serial.println(x);
    digitalWrite(pinNum, HIGH);
    pinNum=pinNum-1;
    x = x + 1;
  }
}

void loop()
{
    
    
    
}
