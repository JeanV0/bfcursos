#include <iostream>
#include <memory>

using namespace std;

int main()
{
    // unique_ptr<int>pnum(new int());
    shared_ptr<int>pnum(new int());
    shared_ptr<int>pnum1=pnum;

    *pnum=10;

    cout << *pnum << endl;

    return 0;
}