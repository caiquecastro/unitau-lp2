/*
Trabalho de fim de semestre - 2º Engenharia da Computação - UNITAU - Prof. Luis Eduardo
Arquivo: 06.c
Autor: Caíque de Castro S. Silva, Giovanna Alves dos Santos e João Victor Guedes
Objetivo: Utilizando alocação dinâmica, faça um programa que solicite a multiplicação de duas matrizes quadradas, variando
o seu tamanho de 1000, 10000, 100000, 1000000, 10000000. Se o computador não suportar o valor máximo, apresente o maior valor
possível. Depois de cada execução, armazene o tempo de execução desses valores em uma planilha e apresente um grafico
comparativo entre os elementos. O tempo de execução a ser medido deverá ser apenas nos laços de execução.
*/

#include <stdio.h> //para printf(), scanf()
#include <stdlib.h> //para malloc(), free()
#include <time.h> //para clock()
#define TETO 100

int main() {
	//declaração de variaveis
	int **matriz1, **matriz2, **matrizResultado;
	int n,i,j,k;
	double tempo_inicio, tempo_fim, tempo_total;
	//solicita o tamanho da matriz
	while(1) {
		printf("Digite o tamanho da matriz quadrada:\n");
		scanf("%d", &n);
		if(n>=0) break; //verifica se foi digitado um numero maior que zero
		printf("Digite um número maior que zero. "); //solicita novamente.
	}
	//aloca as matrizes dinamicamente
	matriz1         = (int **) malloc(n*sizeof(int*));
	matriz2         = (int **) malloc(n*sizeof(int*));
	matrizResultado = (int **) malloc(n*sizeof(int*));

	//aloca as linhas das matrizes dinamicamente
	for(i=0;i<n;i++) {
		matriz1[i]         = (int *) malloc(n*sizeof(int));
		matriz2[i]         = (int *) malloc(n*sizeof(int));
		matrizResultado[i] = (int *) malloc(n*sizeof(int));
	}
	tempo_inicio = clock(); //inicia o calculo do tempo
	//preenche a matriz com valores aleatorios
	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			matriz1[i][j] = (rand() % (int)TETO) + 1;
			matriz2[i][j] = (rand() % (int)TETO) + 1;
		}
	}
	//calcula a matriz resultante de A x B
	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			matrizResultado[i][j] = 0;
			for(k=0;k<n;k++) {
				matrizResultado[i][j] += matriz1[i][k] * matriz2[k][j];
			}
		}
	}
	tempo_fim = clock(); //termina o calculo do tempo
	tempo_total = ((double) (tempo_fim - tempo_inicio) ) / CLOCKS_PER_SEC; //calcula o tempo
	//imprime em tela os valores das matrizes
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
	printf("Tempo de execução: %lf.\n", tempo_total); //exibe o tempo de execução

	//libera espaço alocado dinamicamente
	free(matriz1);
	free(matriz2);
	free(matrizResultado);
	
	return 0;
}