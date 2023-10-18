#ifndef AVIAO_H_INCLUDED
#define AVIAO_H_INCLUDED
#include <iostream>
#include "veiculo.h"

class Aviao : public Veiculo{
	public:
		Aviao(std::string tipoIni);
		int getVel();
		int getVelMax();
		std::string getTipo();

		void setVel();
		void setVelMax();
		void setTipo();
	private:
		int vel=0;
		int velmax;
		std::string tipo;
};

int Aviao::getVel() {
	return vel;
}

std::string Aviao::getTipo() {
	return tipo;
}

Aviao::Aviao(std::string tipoIni) {}

#endif
