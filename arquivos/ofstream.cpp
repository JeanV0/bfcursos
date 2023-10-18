#include <iostream>
#include <fstream>

using namespace std;

int main() {
	// ofstream, ifstream, fstrea

	ofstream arquivoS;

	arquivoS.open("cfbcursos.txt", ios::app);

	arquivoS << "Curso de C++" << endl;

	arquivoS.close();

	ifstream arquivoE;
	string linha;
	arquivoE.open("cfbcursos.txt");

	if (arquivoE.is_open()) {
		while(getline(arquivoE,linha)) {
			cout << linha << endl;
		};

	} else {
		cout << "Arquivo inexistente" << endl;
	}

	fstream arquivo;
	char opc='s';
	string nome;

	arquivo.open("jeancursos.txt", ios::out);

	while((opc=='s') || (opc=='S')) {
		cout << "DIGITE UM NOME" << endl;
		cin >> nome;
		arquivo << nome << endl;
		cout << "Quer continuar? [S/N]" << endl;
		cin >> opc;
	};

	arquivo.close();

	return 0;
}
