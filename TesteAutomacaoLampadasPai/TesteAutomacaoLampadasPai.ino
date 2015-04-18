// Do not remove the include below
#include "TesteAutomacaoLampadasPai.h"
#include <Arduino.h>
#include <HardwareSerial.h>

//Pino do botao 5
const int pinBotao = 5;

//Pino do relé
const int pinRele = 6;

//Variavel temporaria
int buttonState = 0;

//Status
int status = 0;

//The setup function is called once at startup of the sketch
void setup()
{


	pinMode(pinBotao, INPUT );
	pinMode(pinRele, OUTPUT );

	digitalWrite(pinBotao, HIGH);

	digitalWrite(pinRele, LOW);

	Serial.begin(9600);
}

// The loop function is called in an endless loop
void loop()
{
	buttonState = digitalRead(pinBotao);

	if (buttonState == LOW) {

		Serial.println("BOTAO PRESSIONADO");
		status = !status;
		digitalWrite(pinRele, !status);

	}


	delay(1000);

}
