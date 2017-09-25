// Do not remove the include below
#include "SensorDistanciaUltrasom.h"
#include "Ultrasonic.h"

//Pino que envia o sinal
#define trigPin 12
//Pino que le o sinal
#define echoPin 13

Ultrasonic ultrasonic(trigPin, echoPin);

void setup()
{
	Serial.begin(9600);
	pinMode(trigPin, OUTPUT);
	pinMode(echoPin, INPUT);


}

// The loop function is called in an endless loop
void loop()
{
	digitalWrite(trigPin, LOW);
	delayMicroseconds(2);
	digitalWrite(trigPin, HIGH);
	delayMicroseconds(10);

	digitalWrite(trigPin, LOW);

	int distancia = (ultrasonic.Ranging(CM));
	Serial.print("Distancia em CM: ");
	Serial.println(distancia);
	delay(1000);
}
