/*
Trabalho de fim de semestre - 2º Engenharia da Computação - UNITAU - Prof. Luis Eduardo
Arquivo: 09-a.cpp
Autor: Caíque de Castro S. Silva, Giovanna Alves dos Santos e João Victor Guedes
Objetivo: Escrever um algoritmo para ler dois valores numéricos e apresentar qual é o maior.
*/

#include <iostream> //para cout, cin
#include <cstdlib> //para EXIT_SUCCESS

using namespace std; //declara o namespace a ser utilizado

int main() {
	//declara variáveis
	float n1, n2;
	//solicita o primeiro valor
	cout << "Digite o primeiro valor:" << endl;
	cin >> n1;
	//solicita o segundo valor
	cout << "Digite o segundo valor:" << endl;
	cin >> n2;
	//verifica qual valor numérico é o maior
	if(n1 > n2) {
		cout << "O maior valor é " << n1 << endl; //imprime se n1 for maior que n2
	} else {
		cout << "O maior valor é " << n2 << endl; //imprime, em caso contrário
	}
	return EXIT_SUCCESS;
}