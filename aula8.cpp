#include <iostream>

using namespace std;

int main() {

    __asm("//startTest");
    end:
        cout << "Tchau" << endl;

    do {
        goto start;
    } while(true); 

    start:
        cout << "Ola" << endl;

    do {
        goto end;
    } while(true); 

    return 0;   
    __asm("//endTest");
}
