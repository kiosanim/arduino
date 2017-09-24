// Do not remove the include below
#include "IntegracaoArduinoRaspberryPIViaUSB.h"

const int ledPin = 13;

//The setup function is called once at startup of the sketch
void setup()
{
	pinMode(ledPin, OUTPUT);
	Serial.begin(9600);


}

void light(int n) {

	for (int x=0; x < n; x++) {
		digitalWrite(ledPin, HIGH);
		delay(100);
		digitalWrite(ledPin, LOW);
		delay(100);
	}
}

// The loop function is called in an endless loop
void loop()
{

	if (Serial.available()) {
		light(Serial.read() - '0');
	}
	delay(500);

}


