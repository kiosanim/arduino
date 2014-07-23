// Do not remove the include below
#include "Controla2MotoresComL293D.h"

//MOTOR 1 - ESQUERDA
#define MOTOR_1_PINO_A 3
#define MOTOR_1_PINO_B 4
#define MOTOR_1_PWM 9

//MOTOR2 - DIREITA
#define MOTOR_2_PINO_A 5
#define MOTOR_2_PINO_B 6
#define MOTOR_2_PWM 10

//Velocidade Máxima dos Motores
#define MAX_VEL 255
#define MIN_VEL 0

void configuraMotores() {

	//Motor1
	pinMode(MOTOR_1_PINO_A, OUTPUT);
	pinMode(MOTOR_1_PINO_B, OUTPUT);
	pinMode(MOTOR_1_PWM, OUTPUT);

	//Motor2
	pinMode(MOTOR_2_PINO_A, OUTPUT);
	pinMode(MOTOR_2_PINO_B, OUTPUT);
	pinMode(MOTOR_2_PWM, OUTPUT);

}

/**
 * Inicializar os motores
 */
void inicializaMotores() {

	digitalWrite(MOTOR_1_PWM, HIGH);
	digitalWrite(MOTOR_2_PWM, HIGH);

}

/**
 * Finalizar os motores
 */
void finalizaMotores() {

	digitalWrite(MOTOR_1_PWM, LOW);
	digitalWrite(MOTOR_2_PWM, LOW);

}


/**
 * Parar os motores
 */
void pararMotores() {

	//Motor1
	digitalWrite(MOTOR_1_PINO_A, LOW);
	digitalWrite(MOTOR_1_PINO_B, LOW);

	//Motor2
	digitalWrite(MOTOR_2_PINO_A, LOW);
	digitalWrite(MOTOR_2_PINO_B, LOW);

}

/**
 * Utilizado para calculo do percentual da velocidade
 */
int calculaPercentualVelocidade(int percentual) {

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
void setarVelocidadeMotor1(int percentual) {
	analogWrite(MOTOR_1_PWM, calculaPercentualVelocidade(percentual));

}

/**
 * Seta a velocidade do MOTOR2
 */
void setarVelocidadeMotor2(int percentual) {
	analogWrite(MOTOR_2_PWM, calculaPercentualVelocidade(percentual));

}

/**
 * Seta a velocidade dos DOIS MOTORES
 */
void setarVelocidadeMotores(int percentual) {

	setarVelocidadeMotor1(percentual);
	setarVelocidadeMotor2(percentual);
}

//---------------- MARCHA FRENTE ------------------

/**
 * Andar para a frente com o MOTOR1
 */
void andarFrenteMotor1() {

	digitalWrite(MOTOR_1_PINO_A, HIGH);
	digitalWrite(MOTOR_1_PINO_B, LOW);

}

/**
 * Andar para a frente com o MOTOR2
 */
void andarFrenteMotor2() {

	digitalWrite(MOTOR_2_PINO_A, HIGH);
	digitalWrite(MOTOR_2_PINO_B, LOW);

}

/**
 * Andar para a frente com os dois motores
 */
void andarFrente() {

	pararMotores();
	andarFrenteMotor1();
	andarFrenteMotor2();

}

/**
 * Virar para a DIREITA
 */
void virarDireitaFrente() {

	pararMotores();
	setarVelocidadeMotor1(50);
	setarVelocidadeMotor2(10);

	andarFrente();

}
/**
 * Virar para a ESQUERDA
 */
void virarEsquerdaFrente() {

	pararMotores();
	setarVelocidadeMotor1(10);
	setarVelocidadeMotor2(50);

	andarFrente();

}

//---------------- MARCHA RE ------------------


/**
 * Andar para a tras com o MOTOR1
 */
void andarReMotor1() {

	digitalWrite(MOTOR_1_PINO_A, LOW);
	digitalWrite(MOTOR_1_PINO_B, HIGH);

}

/**
 * Andar para a tras com o MOTOR2
 */
void andarReMotor2() {

	digitalWrite(MOTOR_2_PINO_A, LOW);
	digitalWrite(MOTOR_2_PINO_B, HIGH);

}


/**
 * Andar para a tras com os dois motores
 */
void andarRe() {

	pararMotores();
	andarReMotor1();
	andarReMotor2();

}

/**
 * Virar para a DIREITA RE
 */
void virarDireitaRe() {

	pararMotores();
	setarVelocidadeMotor1(10);
	setarVelocidadeMotor2(50);

	andarRe();

}
/**
 * Virar para a ESQUERDA
 */
void virarEsquerdaRe() {

	pararMotores();
	setarVelocidadeMotor1(50);
	setarVelocidadeMotor2(10);

	andarRe();

}






/**
 * Será implementado quando utilizar 4 motores
 */
/**
void girarNoEixo() {
}
*/

//The setup function is called once at startup of the sketch
void setup()
{
	configuraMotores();
}

// The loop function is called in an endless loop
void loop()
{
//Add your repeated code here
}
