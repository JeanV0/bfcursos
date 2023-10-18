#ifndef VEICULO_H_INCLUDED
#define VEICULO_H_INCLUDED
#include <iostream>

class Veiculo{
	public:
		Veiculo(std::string tipoIni);
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

int Veiculo::getVel() {
	return vel;
}

std::string Veiculo::getTipo() {
	return tipo;
}

Veiculo::Veiculo(std::string tipoIni) {}

#endif
