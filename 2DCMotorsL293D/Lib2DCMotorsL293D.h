// Only modify this file to include
// - function definitions (prototypes)
// - include files
// - extern variable definitions
// In the appropriate section

#ifndef _Lib2DCMotorsL293D_H_
#define _Lib2DCMotorsL293D_H_
#include "Arduino.h"
#include "DCMotor.h"
//add your includes for the project Lib2DCMotorsL293D here


//Velocidade Máxima dos Motores
#define MAX_VEL 255
#define MIN_VEL 0

class Lib2DCMotorsL293D {

private:
	DCMotor *lMotor;
	DCMotor *rMotor;

public:
	Lib2DCMotorsL293D(int lDCMPinA, int lDCMPinB, int lDCMPinPWM, int rDCMPinA, int rDCMPinB, int rDCMPinPWM);
	void configuraMotores();
	void inicializaMotores();
	void finalizaMotores();
	void pararMotores();
	int calculaPercentualVelocidade(int percentual);
	void setarVelocidadeMotor1(int percentual);
	void setarVelocidadeMotor2(int percentual);
	void setarVelocidadeMotores(int percentual);
	void andarFrenteMotor1();
	void andarFrenteMotor2();
	void andarFrente();
	void virarDireitaFrente();
	void virarEsquerdaFrente();
	void andarReMotor1();
	void andarReMotor2();
	void andarRe();
	void virarDireitaRe();
	void virarEsquerdaRe();

	virtual ~Lib2DCMotorsL293D();
};

//Do not add code below this line
#endif /* _Lib2DCMotorsL293D_H_ */
