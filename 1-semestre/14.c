/*
Trabalho de fim de semestre - 2º Engenharia da Computação - UNITAU - Prof. Luis Eduardo
Arquivo: 14.c
Autor: Caíque de Castro S. Silva, Giovanna Alves dos Santos e João Victor Guedes
Objetivo: Escreva uma função recursiva para calcular o valor de uma
base x  elevada a um expoente y.
Ambas as variáveis deverão ser informadas pelo
usuário e poderão ser positivas ou negativas.
*/
#include <stdio.h> //para printf() e scanf()

double potenciacao(int base, int expoente); //protótipo da função de potenciação

int main() {
	//declaração de variáveis
	int base, expoente;
	//lê o valor da base fornecida pelo usuário
	printf("Digite o valor da base: \n");
	scanf("%d", &base);
	//lê o valor do expoente fornecida pelo usuário
	printf("Digite o valor do expoente: \n");
	scanf("%d", &expoente);
	printf("Resultado: %lf.\n", potenciacao(base, expoente));
	return 0;
}

double potenciacao(int base, int expoente) {
	if(expoente < 0) {
		expoente *= -1;
		return 1/(potenciacao(base, expoente));
	} else if(expoente==0) {
		return 1;
	} else if(expoente==1) {
		return base;
	} else {
		return (base*potenciacao(base,expoente-1));
	}
}