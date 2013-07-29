/*
Trabalho de fim de semestre - 2º Engenharia da Computação - UNITAU - Prof. Luis Eduardo
Arquivo: 13.c
Autor: Caíque de Castro S. Silva, Giovanna Alves dos Santos e João Victor Guedes
Objetivo: Faça um programa que realize o cálculo de um fatorial. O usuário
 deverá informar o valor do fatorial.
*/
#include <stdio.h> //para printf() e scanf()

double fatorial(int n); //protótipo da função fatorial

int main() {
	//declaração de variáveis
	int numero;
	//lê o valor digitado pelo usuário
	while(1) {
		printf("Digite o número para calcular o fatorial: ");
		scanf("%d", &numero);
		if(numero > 0) break;
		printf("Número inválido. Tente novamente. ");
	}
	//apresenta o resultado
	printf("Resultado: %.0lf\n", fatorial(numero));
	return 0;
}

double fatorial(int n) {
	if(n<=1) { //1! = 1.
		return 1.0;
	} else {
		return (n*fatorial(n-1));
	}
}