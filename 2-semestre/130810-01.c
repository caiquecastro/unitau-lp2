/*
Trabalho de fim de semestre - 2º Engenharia da Computação - UNITAU - Prof. Luis Eduardo
Arquivo: 130810-01.c
Autor: Caíque de Castro S. Silva, Giovanna Alves dos Santos e João Victor Guedes
Objetivo: Faça um programa que solicite dois valores numéricos ao usuário. O segundo valor deverá ser maior que o primeiro.
Grave em um arquivo chamado "saida.txt", todos os números inteiros entre o primeiro e o segundo valor, com cada número em uma linha.
*/

#include <stdio.h>

int main() {
	FILE *arquivo;
	int i, min, max;

	arquivo = fopen("saida.txt", "w");

	printf("Digite o piso: ");
	scanf("%d", &min);

	do {
		printf("Digite o teto: ");
		scanf("%d", &max);
	} while(max<min);

	if(arquivo == NULL) {
		printf("Ocorreu um erro.\n");
	} else {
		for(i=min;i<=max;i++) {
			fprintf(arquivo, "%d\n", i);
		}
	}

	fclose(arquivo);
	return 0;
}