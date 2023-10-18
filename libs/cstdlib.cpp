#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

void parte1();
void parte2();
void parte3();

int main()
{
    parte3();
    return 0;
}

void parte3(){
    int n=-10;
    cout << abs(n) << endl;

    int res=3;
    div_t res;

    res=div(n,res);

    cout << res.quot << endl;

    // ldiv llabs lldiv RAND_MAX ldiv_t lldiv_t   
}

void parte2(){
    at_quick_exit(parte1);

    for(int i=0;i<4;i++){
        if(i<5){
            cout << i << endl;
        } else {
            exit(EXIT_SUCCESS);
        }
    }
    
    vector<int> vetor{5,312,3214,2141};

    // qsort(vetor,10,sizeof(int),[](const void* a,const void* b){
    //     return (*(int*)a - *(int*)b);
    // });

    // bsearch

    const char* p;

    p=getenv("PATH");
    cout << p << endl;

    system("clear");

    _Exit(EXIT_SUCCESS);
}

void parte1(){
    // register double num;
    // register char numero[80];

    // cin >> numero;
    // num = strtof(numero);

    // atof atoi atoll

    // srand(time());
    // for(int i=0;i<numero;i++){
    //     cout << rand()%100 << endl;
    // };

    // malloc relloc free realloc
    int *vetor;
    vetor =(*int)malloc(sizeof(int));

    for(int i=0;i<num;i++){
        vetor[i]=rand()%100;
        cout << vetor[i] << endl;
    };

    free(vetor);
}