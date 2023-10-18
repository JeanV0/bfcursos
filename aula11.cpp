#include <iostream>

using namespace std;

int main() {
    int teste;

    (true) ? teste=1 : teste=2;

    switch (teste)
    {
    case 1:
    case 2:
        break;
    }

    return 0;
}
