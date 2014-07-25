// Do not remove the include below
#include "Lib2DCMotorsL293D.h"

Lib2DCMotorsL293D::Lib2DCMotorsL293D(int lDCMPinA,int lDCMPinB,int lDCMPinPWM,int rDCMPinA,int rDCMPinB,int rDCMPinPWM) {

	lMotor = new DCMotor(lDCMPinA, lDCMPinB, lDCMPinPWM);
	rMotor = new DCMotor(rDCMPinA, rDCMPinB, rDCMPinPWM);

}

Lib2DCMotorsL293D::~Lib2DCMotorsL293D() {
	// TODO Auto-generated destructor stub
}

void Lib2DCMotorsL293D::configuraMotores() {

	//Motor1
	pinMode(lMotor->getPinA(), OUTPUT);
	pinMode(lMotor->getPinB(), OUTPUT);
	pinMode(lMotor->getPinPWM(), OUTPUT);

	//Motor2
	pinMode(rMotor->getPinA(), OUTPUT);
	pinMode(rMotor->getPinB(), OUTPUT);
	pinMode(rMotor->getPinPWM(), OUTPUT);

}

/**
 * Inicializar os motores
 */
void Lib2DCMotorsL293D::inicializaMotores() {

	digitalWrite(lMotor->getPinPWM(), HIGH);
	digitalWrite(rMotor->getPinPWM(), HIGH);

}

/**
 * Finalizar os motores
 */
void Lib2DCMotorsL293D::finalizaMotores() {

	digitalWrite(lMotor->getPinPWM(), LOW);
	digitalWrite(rMotor->getPinPWM(), LOW);

}


/**
 * Parar os motores
 */
void Lib2DCMotorsL293D::pararMotores() {

	//Motor1
	digitalWrite(lMotor->getPinA(), LOW);
	digitalWrite(lMotor->getPinB(), LOW);

	//Motor2
	digitalWrite(rMotor->getPinA(), LOW);
	digitalWrite(rMotor->getPinB(), LOW);

}

/**
 * Utilizado para calculo do percentual da velocidade
 */
int Lib2DCMotorsL293D::calculaPercentualVelocidade(int percentual) {

	int resultado = (MAX_VEL / 100) * percentual;

	if (resultado < MIN_VEL)
		resultado = MIN_VEL;

	if (resultado > MAX_VEL)
		resultado = MAX_VEL;

	return resultado;

}

/**
 * Seta a velocidade do MOTOR1
 */
void Lib2DCMotorsL293D::setarVelocidadeMotor1(int percentual) {
	analogWrite(lMotor->getPinPWM(), calculaPercentualVelocidade(percentual));

}

/**
 * Seta a velocidade do MOTOR2
 */
void Lib2DCMotorsL293D::setarVelocidadeMotor2(int percentual) {
	analogWrite(rMotor->getPinPWM(), calculaPercentualVelocidade(percentual));

}

/**
 * Seta a velocidade dos DOIS MOTORES
 */
void Lib2DCMotorsL293D::setarVelocidadeMotores(int percentual) {

	setarVelocidadeMotor1(percentual);
	setarVelocidadeMotor2(percentual);
}

//---------------- MARCHA FRENTE ------------------

/**
 * Andar para a frente com o MOTOR1
 */
void Lib2DCMotorsL293D::andarFrenteMotor1() {

	digitalWrite(lMotor->getPinA(), HIGH);
	digitalWrite(lMotor->getPinB(), LOW);

}

/**
 * Andar para a frente com o MOTOR2
 */
void Lib2DCMotorsL293D::andarFrenteMotor2() {

	digitalWrite(rMotor->getPinA(), HIGH);
	digitalWrite(rMotor->getPinB(), LOW);

}

/**
 * Andar para a frente com os dois motores
 */
void Lib2DCMotorsL293D::andarFrente() {

	pararMotores();
	andarFrenteMotor1();
	andarFrenteMotor2();

}

/**
 * Virar para a DIREITA
 */
void Lib2DCMotorsL293D::virarDireitaFrente() {

	pararMotores();
	setarVelocidadeMotor1(50);
	setarVelocidadeMotor2(10);

	andarFrente();

}
/**
 * Virar para a ESQUERDA
 */
void Lib2DCMotorsL293D::virarEsquerdaFrente() {

	pararMotores();
	setarVelocidadeMotor1(10);
	setarVelocidadeMotor2(50);

	andarFrente();

}

//---------------- MARCHA RE ------------------


/**
 * Andar para a tras com o MOTOR1
 */
void Lib2DCMotorsL293D::andarReMotor1() {

	digitalWrite(lMotor->getPinA(), LOW);
	digitalWrite(lMotor->getPinB(), HIGH);

}

/**
 * Andar para a tras com o MOTOR2
 */
void Lib2DCMotorsL293D::andarReMotor2() {

	digitalWrite(rMotor->getPinA(), LOW);
	digitalWrite(rMotor->getPinB(), HIGH);

}


/**
 * Andar para a tras com os dois motores
 */
void Lib2DCMotorsL293D::andarRe() {

	pararMotores();
	andarReMotor1();
	andarReMotor2();

}

/**
 * Virar para a DIREITA RE
 */
void Lib2DCMotorsL293D::virarDireitaRe() {

	pararMotores();
	setarVelocidadeMotor1(10);
	setarVelocidadeMotor2(50);

	andarRe();

}
/**
 * Virar para a ESQUERDA
 */
void Lib2DCMotorsL293D::virarEsquerdaRe() {

	pararMotores();
	setarVelocidadeMotor1(50);
	setarVelocidadeMotor2(10);

	andarRe();

}

