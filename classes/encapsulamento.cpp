#include <iostream>
#include <memory>

using namespace std;

class Veiculo{
    public:
        Veiculo(const char* nome, const char* cor){

        };

        virtual void imp(){
            cout << "Kyan" << endl;
        }
    
    private:
        const char* cor;
    protected:
        const char* nome;
};

class Carro: public Veiculo{
    public:
        Carro(const char* nome, int potencia):nome(nome),velMax(potencia){
        }

        void imp() override{
            cout << "Kyan" << endl;
        }
    private:
        const char* nome;
        int velMax;
    protected:
};

int main()
{
    unique_ptr<Carro>c1(new Carro{"Jean",34});

    return 0;
}