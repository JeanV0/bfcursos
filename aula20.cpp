#include <iostream>
#include <list>

using namespace std;

int main()
{
  list<int> aula;
  aula.push_back(1);
  aula.push_back(2);
  aula.push_back(3);
  aula.push_back(4);
  aula.push_back(5);
  aula.push_back(6);


  cout << aula.size() << endl;

  list<int>::iterator it=aula.begin();
  advance(it, 5);
  aula.insert(it,0);
  aula.erase(--it);

  return 0;  
}
