/*
Trabalho de fim de semestre - 2º Engenharia da Computação - UNITAU - Prof. Luis Eduardo
Arquivo: 10.c
Autor: Caíque de Castro S. Silva, Giovanna Alves dos Santos e João Victor Guedes
Objetivo: Faça um programa que realize o cálculo de valor fatorial. Caso o valor
solicitado seja menor que um ou maior que doze, o sistema deverá solicitar novamente
o valor. Senão, deverá ser efetuado o cálculo e apresentado o valor do mesmo.
*/

#include <stdio.h> //para printf() e scanf()

int main() {
	//declaração de variáveis
	int numero=0, i;
	double fatorial=1;
	//le o valor de número fornecido pelo usuário
	while(numero < 1 || numero > 12) {
		printf("Digite o valor para o cálculo do fatorial (entre 1 e 12): ");
		scanf("%d", &numero);
	}
	//realiza o calculo do fatorial
	for(i=1;i<=numero;i++) {
		fatorial *= i;
	}
	//apresenta o resultado
	printf("Resultado: %.0lf\n", fatorial);
	return 0;
}