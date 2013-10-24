/*
Trabalho de fim de semestre - 2º Engenharia da Computação - UNITAU - Prof. Luis Eduardo
Arquivo: 11.cpp
Autor: Caíque de Castro S. Silva, Giovanna Alves dos Santos e João Victor Guedes
Objetivo: Utilizando a sobrecarga de métodos, crie 3 métodos que realizem a soma, subtração,
multiplicação e divisão dos valores de entrada e possuam o nome da respectiva operação
aritmética. Por exemplo, a soma de todos os termos deverá apresentar o nome "somatoria".
O primeiro método deverá receber como entrada 2 parâmetros. O segundo deverá receber como
entrada 3 parâmetros. O terceiro método deverá receber como entrada um vetor de elementos.
Para todos os métodos, os parâmetros de entrada deverão ser do tipo float e o retorno das
referidas funções também.
*/

#include <iostream> //para cin, cout
#include <cstdlib> //para EXIT_SUCCESS

using namespace std; //declaração de namespace

//protótipos das funções
float soma(float x, float y); //overloading para 2 argumentos float
float soma(float x, float y, float z); //overloading para 3 argumentos float
float soma(float vetor[], int tamanho); //overloading para 1 matriz de float e o tamanho da matriz

float subtracao(float x, float y); //overloading para 2 argumentos float
float subtracao(float x, float y, float z); //overloading para 3 argumentos float
float subtracao(float vetor[], int tamanho); //overloading para 1 matriz de float e o tamanho da matriz

float multiplicacao(float x, float y); //overloading para 2 argumentos float
float multiplicacao(float x, float y, float z); //overloading para 3 argumentos float
float multiplicacao(float vetor[], int tamanho); //overloading para 1 matriz de float e o tamanho da matriz

float divisao(float x, float y); //overloading para 2 argumentos float
float divisao(float x, float y, float z); //overloading para 3 argumentos float
float divisao(float vetor[], int tamanho); //overloading para 1 matriz de float e o tamanho da matriz

int main() {
	//declaração de variáveis
	float n1 = 4, n2=2, n3 = 5, valores[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	//chamada das funções de soma
	cout << "SOMA:" << endl;
	cout << soma(n1,n2) << endl; //2 parametros float
	cout << soma(n1,n2,n3) << endl; //3 parametros float
	cout << soma(valores, 10) << endl; //1 array de float e o tamanho desse array

	//chamada das funções de subtração
	cout << "SUBTRAÇÂO:" << endl; 
	cout << subtracao(n1,n2) << endl; //2 parametros float
	cout << subtracao(n1,n2,n3) << endl; //3 parametros float
	cout << subtracao(valores, 10) << endl; //1 array de float e o tamanho desse array

	cout << "MULTIPLICAÇÃO:" << endl;
	cout << multiplicacao(n1,n2) << endl; //2 parametros float
	cout << multiplicacao(n1,n2,n3) << endl; //3 parametros float
	cout << multiplicacao(valores, 10) << endl; //1 array de float e o tamanho desse array

	cout << "DIVISÃO:" << endl;
	cout << divisao(n1,n2) << endl; //2 parametros float
	cout << divisao(n1,n2,n3) << endl; //3 parametros float
	cout << divisao(valores, 10) << endl; //1 array de float e o tamanho desse array

	return EXIT_SUCCESS;
}
//função para soma de 2 valores float
float soma(float x, float y) {
	return x+y;
}
//função para soma de 3 valores float
float soma(float x, float y, float z) {
	return x+y+z;
}
//função para soma de dos elementos de um array de float
float soma(float vetor[], int tamanho) {
	float resultado=0;
	for(int i=0;i<tamanho;i++) {
		resultado += vetor[i];
	}
	return resultado;
}
//função para subtração de 2 valores float
float subtracao(float x, float y) {
	return 0-x-y;
}
//função para subtração de 3 valores float
float subtracao(float x, float y, float z) {
	return 0-x-y-z;
}
//função para subtração dos elementos de um array de float a partir de um valor inicial zero (0)
float subtracao(float vetor[], int tamanho) {
	float resultado=0;
	for(int i=0;i<tamanho;i++) {
		resultado -= vetor[i];
	}
	return resultado;
}
//função para multiplicação de 2 valores float
float multiplicacao(float x, float y) {
	return x*y;
}
//função para multiplicação de 3 valores float
float multiplicacao(float x, float y, float z) {
	return x*y*z;
}
//função para multiplicação dos elementos de um array de float
float multiplicacao(float vetor[], int tamanho) {
	float resultado=1;
	for(int i=0;i<tamanho;i++) {
		resultado *= vetor[i];
	}
	return resultado;
}
//função para divisão de 2 valores float
float divisao(float x, float y) {
	return x/y;
}
//função para divisão de 3 valores float
float divisao(float x, float y, float z) {
	float resultado  = 1/x;
	resultado /= y;
	resultado /= z;
	return resultado;
}
//função para divisão dos elementos de um array de float
float divisao(float vetor[], int tamanho) {
	float resultado = 1;
	for(int i=0;i<tamanho;i++) {
		resultado /= vetor[i];
	}
	return resultado;
}