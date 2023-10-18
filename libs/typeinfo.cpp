#include <iostream>
#include <typeinfo>

using namespace std;

class Veiculo{

};

int main(){
    if(typeid(int).before(typeid(char))) {
        cout << "Int vem antes de char" << endl;
    }

    Veiculo num;

    cout << "Tipod de num: " << typeid(num).name() << endl;

    return 0;
}