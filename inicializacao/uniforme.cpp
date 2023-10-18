#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Veiculo{
    public:
        int aceleraBb;
        Veiculo(int acelara) {
            this->aceleraBb = acelara;
        };
};

int main()
{
    vector<int> valores{1,2,3,4};
    map<int, string> capitais{
        {1,"CEGA VISTA"}
    };

    Veiculo vrum{2121};

    return 0;
}