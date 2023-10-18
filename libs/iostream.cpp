#include <iostream>

using namespace std;

int main()
{
    char nome[20];

    auto n=cin.get();
    cin.ignore(80,' ');
    cout << nome << "- Tamanho" << cin.gcount() << endl;

    return 0;
}