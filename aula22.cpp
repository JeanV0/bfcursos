#include <iostream>

using namespace std;

struct Carro {
  string nome;
  string cor;
  int pot;
  int velMax;

	void insere(string stnome, int stpot, int stvelmax){
		nome=stnome;
		pot=stpot;
		velMax=stvelmax;
	}
};

int main()
{
  Carro car1;
	Carro *carros = new Carro[5];

  car1.nome="Tornando";
}
