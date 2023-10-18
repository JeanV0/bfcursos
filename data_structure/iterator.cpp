#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<string> produtos={"mouse","teclado"};
	vector<string>::iterator it;

	it=produtos.end() - 1;

	cout << *it << endl;

	it=produtos.begin();

	cout << *it << endl;
	cout << *next(it, 1) << endl; 
}
