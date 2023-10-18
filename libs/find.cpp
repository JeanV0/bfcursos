#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<int>vetor;
    vector<int>::iterator it;
    int num,qtde=10;

    while(qtde>0){
        cin >> num;
        it=find(vetor.begin(),vetor.end(),num);
        if(it!=vetor.end()){
            cout << "Já existe" << endl;
        } else{
            vetor.push_back(num);
        };
    };

    
    
    p=find(num.begin(),num.end(),6);
    if(p!=vetor+tam){
        cout << "Não encontrado" << endl;
    }

    return 0;
}