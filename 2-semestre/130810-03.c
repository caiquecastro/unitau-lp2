/*
Trabalho de fim de semestre - 2º Engenharia da Computação - UNITAU - Prof. Luis Eduardo
Arquivo: 130810-03.c
Autor: Caíque de Castro S. Silva, Giovanna Alves dos Santos e João Victor Guedes
Objetivo: Faça um programa que leia o arquivo "entrada.dat" e imprima na tema a soma de todos os termos.
*/

#include <stdio.h>

int main() {
	FILE *arquivo;
	double soma = 0, numero;
	char ponteiro;

	arquivo = fopen("entrada.dat", "r");

	if(arquivo == NULL) {
		printf("Ocorreu um erro.\n");
	} else {

		while(fscanf(arquivo, "%lf", &numero) != EOF) {
			soma += numero;
		}
		printf("%lf\n", soma);
	}

	fclose(arquivo);
	return 0;
}