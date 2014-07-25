/*
 * DCMotor.cpp
 *
 *  Created on: 24/07/2014
 *      Author: Fábio Sartori
 *      Classe que representa um DCMotor
 */

#include "DCMotor.h"



/**
 * Construtor
 * PinoA    do motor
 * PinoB    do motor
 * PinoPWMX do motor
 */
DCMotor::DCMotor(int pinAX, int pinBX, int pinPWMX) {

	pinA 	= pinAX;
	pinB 	= pinBX;
	pinPWM 	= pinPWMX;

}

int DCMotor::getPinA() {
	return pinA;
}

int DCMotor::getPinB() {
	return pinB;
}

int DCMotor::getPinPWM() {
	return pinPWM;
}

DCMotor::~DCMotor() {
	// TODO Auto-generated destructor stub
}

