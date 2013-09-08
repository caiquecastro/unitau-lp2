/*
Trabalho de fim de semestre - 2º Engenharia da Computação - UNITAU - Prof. Luis Eduardo
Arquivo: 130810-05.c
Autor: Caíque de Castro S. Silva, Giovanna Alves dos Santos e João Victor Guedes
Objetivo: Refaça o exercício 3 e faça a somatória dos pares e dos ímpares. A dos pares deverá ser gravada em
"par.txt" e a dos ímpares em "impar.txt". Se o arquivo de saída existir, primeiramente ele deverá ser removido.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TETO 100

int main() {
	int **matriz1, **matriz2, **matrizResultado;
	int n,i,j,k;
	while(1) {
		printf("Digite o tamanho da matriz quadrada:\n");
		scanf("%d", &n);
		if(n>=0) break;
		printf("Digite um número maior que zero. ");
	}

	matriz1         = (int **) malloc(n*sizeof(int*));
	matriz2         = (int **) malloc(n*sizeof(int*));
	matrizResultado = (int **) malloc(n*sizeof(int*));

	for(i=0;i<n;i++) {
		matriz1[i]         = (int *) malloc(n*sizeof(int));
		matriz2[i]         = (int *) malloc(n*sizeof(int));
		matrizResultado[i] = (int *) malloc(n*sizeof(int));
	}
	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			matriz1[i][j] = (rand() % (int)TETO) + 1;
			matriz2[i][j] = (rand() % (int)TETO) + 1;
		}
	}
	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			matrizResultado[i][j] = 0;
			for(k=0;k<n;k++) {
				matrizResultado[i][j] += matriz1[i][k] * matriz2[k][j];
			}
		}
	}
	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			printf("%03d ", matriz1[i][j]);
		}
		if(n/2==i) {
			printf("   x   ");
		} else {
			printf("       ");
		}
		for(j=0;j<n;j++) {
			printf("%03d ", matriz2[i][j]);
		}
		if(n/2==i) {
			printf("   =   ");
		} else {
			printf("       ");
		}
		for(j=0;j<n;j++) {
			printf("%03d ", matrizResultado[i][j]);
		}
		printf("\n");
	}
	return 0;
}