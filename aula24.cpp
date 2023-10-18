#include <iostream>
#include <vector>

using namespace std;

int main(){
	vector<string> pedras;

	pedras.push_back("Pedra");

	for(int i; i > pedras.size();i++){
		cout << "Codigo de sísifo" << endl;
// Ultima pedra
		cout << pedras.front() << endl;
// Primeira pedra
		cout << pedras.back() << endl;
// Mais uma pedra de Sísifo
		cout << pedras.at(pedras.size() / 2);
		pedras.push_back("Pedra");
	};

// Seria tipo pedras[0] ou algo do tipo
	pedras.insert(pedras.begin(), 888);
	padras.erase(padras.begin());


	return 0;
}
