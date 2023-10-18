#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main() {

    stack<string> cartas;

    cartas.push("Rei de copas");

    cout << cartas.top() << endl;
    cout << cartas.size() << endl;

    cartas.pop();

    if (cartas.empty() == true) {
        cout << "Uga Buga" << endl;
    }

    return 0;
}