// Do not remove the include below

#include "TesteSensorPresencaPIR.h"

#include <Arduino.h>

int pinLed = 13;
int pinPIR = 10;

int status = 0;

int armado = 1;

char dado;

void setup(){

  pinMode(pinLed, OUTPUT);
  pinMode(pinPIR, INPUT);
  //Inicia a porta serial
  //com baud rate de 9600
  Serial.begin(9600);


}

void loop(){




	if (armado == 0) {

		Serial.println("Digite a para rearmar o sistema !!!");
		  if (Serial.available()){

			  dado = Serial.read();

			  Serial.println();
			  Serial.println("Valor recebido: " + dado);

			  switch (dado) {

				case 97:
					digitalWrite(pinLed, LOW);
					armado=1;
					Serial.println("Ligando o LED");
					break;;

			  }

		  }
	} else {
		status = digitalRead(pinPIR);

		if (status == HIGH) {

			digitalWrite(pinLed, HIGH);
			armado=0;
			Serial.println("Movimento detectado");

		}
	}
	delay(1000);

}
