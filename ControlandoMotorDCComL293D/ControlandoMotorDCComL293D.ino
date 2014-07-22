// Do not remove the include below
#include "ControlandoMotorDCComL293D.h"

//Perna 1 do motor 1
int motorPin3 = 3;

//Perna 2 do motor 2
int motorPin4 = 4;

//Pino para ativar o motor 1
int spinMotorPin = 9;

//The setup function is called once at startup of the sketch
void setup()
{

	pinMode(motorPin3, OUTPUT);
	pinMode(motorPin4, OUTPUT);
	pinMode(spinMotorPin, OUTPUT);

	//Ligando o motor
	digitalWrite(spinMotorPin, HIGH);
	delay(2000);

}

// The loop function is called in an endless loop
void loop()
{
	//Parar o Motor
	digitalWrite(motorPin3, LOW);
	digitalWrite(motorPin4, LOW);

	//Definindo Motor1
	//NUNCA COLOCAR OS DOIS COMO HIGH
	digitalWrite(motorPin3, HIGH);
	digitalWrite(motorPin4, LOW);

	delay(2000);

	//Ligando o motor em 25% da velocidade
	analogWrite(spinMotorPin, 64);
	//Aguardando 2s
	delay(2000);

	//Subindo a velocidade do motor para 50%
	analogWrite(spinMotorPin, 127);
	//Aguardando 2s
	delay(2000);

	//Subindo a velocidade do motor para 75%
	analogWrite(spinMotorPin, 191);
	//Aguardando 2s
	delay(2000);

	//Subindo a velocidade do motor para 100%
	analogWrite(spinMotorPin, 255);
	delay(2000);

	//Parar o Motor
	digitalWrite(motorPin3, LOW);
	digitalWrite(motorPin4, LOW);

	//Inverter o motor
	digitalWrite(motorPin3, LOW);
	digitalWrite(motorPin4, HIGH);

	//Ligando o motor em 25% da velocidade
		analogWrite(spinMotorPin, 64);
		//Aguardando 2s
		delay(2000);

		//Subindo a velocidade do motor para 50%
		analogWrite(spinMotorPin, 127);
		//Aguardando 2s
		delay(2000);

		//Subindo a velocidade do motor para 75%
		analogWrite(spinMotorPin, 191);
		//Aguardando 2s
		delay(2000);

		//Subindo a velocidade do motor para 100%
		analogWrite(spinMotorPin, 255);
		delay(2000);




}
