#include <iostream>
#include <stdio.h>

using namespace std;

void somar(float *a, float *b){
	*a += *b;
}

int main(){
	float a;
	float *b;
	int *p;
	int vetor[10];
	int *vetorReal;

	printf("Ola");
	vetorReal = vetor;

	float num=10;

	p=vetor;

	*(p+=1);
	// Incrementa 1 para ir proximo vetor indo para 4 bytes por ser int

	// c=&vetor[1];

	b=&a;

	*b=12;

	somar(b,&num);

	cout << a << endl;
}
