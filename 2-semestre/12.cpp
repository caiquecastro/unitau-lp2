/*
Trabalho de fim de semestre - 2º Engenharia da Computação - UNITAU - Prof. Luis Eduardo
Arquivo: 12.cpp
Autor: Caíque de Castro S. Silva, Giovanna Alves dos Santos e João Victor Guedes
Objetivo: Faça um programa que realize a somatória de todos os termos pares e ímpares
de Fibonacci de forma isolada. Se o usuário não informar o valor do Fibonacci, o programa
(Através de valores defaults) deverá assumir que a quantidade solicitada é 10000.
*/
//bibliotecas padrão
#include <iostream>
#include <cstdio>
#include <cstdlib>

//declaração de namespace
using namespace std;

int main() {
	//declaração de variáveis
	int valor, i;
	long double a = 0, b = 1, seq, soma_par=0, soma_impar=0;
	//solicita a entrada do valor de fibonacci
	cout << "Digite o valor do Fibonnaci:";
	cin >> valor;
	//se o valor digitado for menos que 0, considera-se o valor padrão 1000.
	if(valor < 0) {
		valor = 1000;
	}
	for(i = 0; i<valor; i++) {//calcula o valor de cada elemento a cada iteração
		seq = a+b;
		b = a;
		a = seq;
		//verifica se o elemento atual é par ou ímpar
		if((int)seq % 2 == 0) {
			soma_par += seq;
		} else {
			soma_impar += seq;
		}
	}
	//exibe as somas
	cout << "Soma dos Pares: " << soma_par << endl;
	cout << "Soma dos Impares: " << soma_impar << endl;
	return EXIT_SUCCESS;
}