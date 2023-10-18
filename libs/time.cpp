#include <iostream>
#include <ctime>
#include <cmath>

using namespace std;

int main()
{

    clock_t t;

    t=clock();

    cout << ((float)t)/CLOCKS_PER_SEC5 << endl;    
    
    t=clock();

    cout << ((float)t)/CLOCKS_PER_SEC << endl;

    return 0;
}