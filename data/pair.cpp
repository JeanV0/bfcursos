#include <iostream>
#include <utility>

using namespace std;

int main()
{
    pair<int, string> par=make_mair(1,"Jean");

    cout << par.first << " - " << par.second << endl;

    return 0;
}