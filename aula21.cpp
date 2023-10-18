#include <iostream>
#include <list>

using namespace std;

int main()
{
  list<int> aula;

  aula.push_back(1);
  aula.push_back(2);

  cout << aula.size() << endl;

  list<int>::iterator it=aula.begin();
  advance(it, 5);

  aula.insert(it,0);

  return 0;  
}
