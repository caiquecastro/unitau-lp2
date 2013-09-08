#include <iostream>
#include <cstdlib>

using namespace std;

float soma(float x, float y);
float soma(float x, float y, float z);
float soma(float vetor[], int tamanho);

float subtracao(float x, float y);
float subtracao(float x, float y, float z);
float subtracao(float vetor[], int tamanho);

float multiplicacao(float x, float y);
float multiplicacao(float x, float y, float z);
float multiplicacao(float vetor[], int tamanho);

float divisao(float x, float y);
float divisao(float x, float y, float z);
float divisao(float vetor[], int tamanho);

int main() {
	float n1 = 4, n2=2, n3 = 5, valores[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	cout << "SOMA:" << endl;
	cout << soma(n1,n2) << endl; 
	cout << soma(n1,n2,n3) << endl;
	cout << soma(valores, 10) << endl;

	return EXIT_SUCCESS;
}

float soma(float x, float y) {
	return x+y;
}
float soma(float x, float y, float z) {
	return x+y+z;
}
float soma(float vetor[], int tamanho) {
	float resultado=0;
	for(int i=0;i<tamanho;i++) {
		resultado += vetor[i];
	}
	return resultado;
}

float subtracao(float x, float y) {
	return 0-x-y;
}
float subtracao(float x, float y, float z) {
	return 0-x-y-z;
}
float subtracao(float vetor[], int tamanho) {
	float resultado=0;
	for(int i=0;i<tamanho;i++) {
		resultado -= vetor[i];
	}
	return resultado;
}

float multiplicacao(float x, float y) {
	return x*y;
}
float multiplicacao(float x, float y, float z) {
	return x*y*z;
}
float multiplicacao(float vetor[], int tamanho) {
	float resultado=1;
	for(int i=0;i<tamanho;i++) {
		resultado *= vetor[i];
	}
	return resultado;
}

float divisao(float x, float y) {
	return x/y;
}
float divisao(float x, float y, float z) {
	float resultado  = 1/x;
	resultado /= y;
	resultado /= z;
	return resultado;
}
float divisao(float vetor[], int tamanho) {
	float resultado = 1;
	for(int i=0;i<tamanho;i++) {
		resultado /= vetor[i];
	}
	return resultado;
}