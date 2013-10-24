/*
Trabalho de fim de semestre - 2º Engenharia da Computação - UNITAU - Prof. Luis Eduardo
Arquivo: 09-b.cpp
Autor: Caíque de Castro S. Silva, Giovanna Alves dos Santos e João Victor Guedes
Objetivo: Faça um algoritmo que leia um número (Inteiro) e mostra uma mensagem se este número é
par ou ímpar e se é positivo ou negativo
*/

#include <iostream> //para cin, cout
#include <cstdlib> //para EXIT_SUCCESS

using namespace std; //declaração do namespace utilizado

int main() {
	//declaração de variáveis
	int numero;
	//lê o valor digitado pelo usuário
	cout << "Digite um numero inteiro: ";
	cin >> numero;
	//verifica se o número é par ou impar
	if(numero%2 == 0) {
		cout << "O número " << numero << " é par. ";
	} else {
		cout << "O número " << numero << " é ímpar. ";
	}
	//verifica se o número é negativo ou positivo.
	if(numero < 0) {
		cout << "O número " << numero << " é negativo." << endl;
	} else {
		cout << "O número " << numero << " é positivo." << endl;
	}
	return EXIT_SUCCESS;
}