// Do not remove the include below
#include "PiscaPisca.h"

const int pinLed = 13;

static int i = 0;

//The setup function is called once at startup of the sketch
void setup()
{
	pinMode(pinLed, OUTPUT);
	Serial.begin(9600);

}

// The loop function is called in an endless loop
void loop()
{
	digitalWrite(pinLed, HIGH);
	Serial.print("Piscada: ");
	Serial.println(i++);
	delay(1000);
	digitalWrite(pinLed, LOW);
	delay(1000);


}
