#include <map>
#include <iostream>

using namespace std;

int main()
{
    map<int, string> prod;

    prod[0] = "Mouse";
    prod[1] = "Teclado";
    prod[2] = "Monitor";

    prod.insert(pair<int,string>{3, "Gabinete"});

    prod.erase(3);

    for (auto n:prod) {
        cout << n.second << endl;
    }

    map<int,string>::iterator itmap=prod.find(1);

    if(itmap=prod.end(){
        cout << "Dont existe" << endl;
    }) else {
        cout << itmap->second << endl;
    }

    return 0;
}