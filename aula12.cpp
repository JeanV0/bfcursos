#include <iostream>

using namespace std;

int main() {
    int teste;

    (true) ? teste=1 : teste=2;

    while(teste++ <= 10) {
        cout << "Ola" << endl;
    }

    return 0;
}
