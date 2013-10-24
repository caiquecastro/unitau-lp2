/*
Trabalho de fim de semestre - 2º Engenharia da Computação - UNITAU - Prof. Luis Eduardo
Arquivo: 09-c.cpp
Autor: Caíque de Castro S. Silva, Giovanna Alves dos Santos e João Victor Guedes
Objetivo: Escrever um algoritmo para ler dois números (Inteiros). Se os números forem
iguais imprimir a mensagem "Números iguais" e encerrar a execução; caso contrário,
imprimir o de maior valor, acompanhado pela mensagem "é maior número".
*/

#include <iostream> //para cin, cout
#include <cstdlib> //para EXIT_SUCCESS

using namespace std; //declaração do namespace

int main() {
	//declaração de variáveis
	int n1, n2;
	//lê o valor de n1
	cout << "Digite o primeiro número: ";
	cin >> n1;
	//lê o valor de n2
	cout << "Digite o segundo número: ";
	cin >> n2;
	if(n1 == n2) { //verifica se os números são iguais
		cout << "Números iguais" << endl;
	} else if(n1 > n2) { //verifica se o primeiro é maior que o segundo
		cout << n1 << " é maior número." << endl;
	} else { //se o segundo for maior que o primeiro
		cout << n2 << " é maior número." << endl;
	}
	return EXIT_SUCCESS;
}