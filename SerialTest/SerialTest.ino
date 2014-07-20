// Do not remove the include below
#include "SerialTest.h"

const int pinLed = 13;

int dado;

//The setup function is called once at startup of the sketch
void setup()
{

	Serial.begin(9600);
	pinMode(pinLed, OUTPUT);

}

// The loop function is called in an endless loop
void loop()
{

	if (Serial.available() > 0) {

		dado = Serial.read();

		Serial.println("Valor recebido: " + dado);



		switch (dado) {

			case 1:
				digitalWrite(pinLed, HIGH);
				Serial.println("Ligando o LED");
				break;

			case 2:
				digitalWrite(pinLed, LOW);
				Serial.println("Desligando o LED");
				break;



		}



	}

}
