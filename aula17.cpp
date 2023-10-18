#include <iostream>

using namespace std;

void pause(int abhb = 2);

int main(int argc, char *argv[] ) {
    for (int legal=1, teste=2; legal <= 10; legal++, teste++) {
        cout << "Teste" << endl;
    }

    pause();
    return 0;
}

void pause(int abhb) {
    system("pause");
}
