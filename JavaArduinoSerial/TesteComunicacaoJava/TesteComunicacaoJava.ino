// Do not remove the include below

#include "TesteComunicacaoJava.h"

#include <Arduino.h>
#include <HardwareSerial.h>

const int pinLed = 13;

char dado;

void setup(){

  pinMode(pinLed, OUTPUT);
  //Inicia a porta serial
  //com baud rate de 9600
  Serial.begin(9600);


}

void loop(){

	Serial.println("Digite a para ligar o LED e b para Desligar !!!");

  //Verifica se possui alguma entrada de dados
  //na entrada Serial
  if (Serial.available()){

	  dado = Serial.read();

	  Serial.println("Valor recebido: " + dado);

	  switch (dado) {

		case 97:
			digitalWrite(pinLed, HIGH);
			Serial.println("Ligando o LED");
			break;

		case 98:
			digitalWrite(pinLed, LOW);
			Serial.println("Desligando o LED");
			break;

	  }
  }
  delay(1000);

}
