/*
 * DCMotor.h
 *
 *  Created on: 24/07/2014
 *      Author: Fábio Sartori
 *      Classe que representa um DCMotor
 */

#ifndef DCMOTOR_H_
#define DCMOTOR_H_

class DCMotor {

	int pinA;
	int pinB;
	int pinPWM;

public:
	DCMotor(int pinAX, int pinBX, int pinPWM);

	int getPinA();

	int getPinB();

	int getPinPWM();

	virtual ~DCMotor();
};

#endif /* DCMOTOR_H_ */
