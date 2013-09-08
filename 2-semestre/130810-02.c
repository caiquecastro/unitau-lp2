/*
Trabalho de fim de semestre - 2º Engenharia da Computação - UNITAU - Prof. Luis Eduardo
Arquivo: 130810-02.c
Autor: Caíque de Castro S. Silva, Giovanna Alves dos Santos e João Victor Guedes
Objetivo: Refaça o exercício 1 e ao invés de gravar todos os elementos em um único arquivo, grave os valores pares no arquivo
"par.txt" e os ímpares em "impar.txt".
*/

#include <stdio.h>

int main() {
	FILE *par, *impar;
	int i, min, max;

	par = fopen("par.txt", "w");
	impar = fopen("impar.txt", "w");
	
	printf("Digite o piso: ");
	scanf("%d", &min);
	
	do {
		printf("Digite o teto: ");
		scanf("%d", &max);
	} while(max<min);

	if(par == NULL || impar == NULL) {
		printf("Ocorreu um erro.\n");
	} else {
		for(i=min;i<=max;i++) {
			if(i%2 == 0) {
				fprintf(par, "%d\n", i);
			} else {
				fprintf(impar, "%d\n", i);
			}
		}
	}

	fclose(par);
	fclose(impar);
	return 0;
}