#include <iostream>

using namespace std;

int main()
{
    int x[10]{1,2,3,4,5,6,7,8,9,0};

    const char* nome = "nome";

/**    for (int i=0; i<10;10++) {
        cout << x[i] << endl;
    }*/
    for(auto i:x) {
        cout << i << endl;
    }

    return 0;
}