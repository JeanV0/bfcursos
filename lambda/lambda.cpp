#include <iostream>
#include <vector>

using namespace std;

int main()
{
    auto ola = "sada";
    auto maior=[=](int n1, int n2)->int{
        cout << ola << endl;
        return (n1>n2)?n1:n2;
    };

    cout << maior(1,2) << endl;

    return 0;
}