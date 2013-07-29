/*
Trabalho de fim de semestre - 2º Engenharia da Computação - UNITAU - Prof. Luis Eduardo
Arquivo: 39.c
Autor: Caíque de Castro S. Silva, Giovanna Alves dos Santos e João Victor Guedes
Objetivo: Faça um programa que preencha duas matrizes (tipo float) com 5x5 elementos
utilizando valores aleatórios e logo após essa ação, apresente os mesmos e as seguintes
operações: soma e subtração das matrizes.
*/

#include <stdio.h> //para printf()
#include <stdlib.h> //para srand()
#include <time.h> //para time()
#define TETO 100 //define um teto para os valores aleatórios

int main() {
	//declaração de variáveis
	float **matriz1, **matriz2;
	int i, j, teto, tamanho;
	//define uma semente de geração de números aleatórios
	srand(time(NULL));
	//hack para números decimais
	teto = TETO * 100;
	//lê o tamanho do vetor definido pelo usuário
	printf("Digite o tamanho da matriz: ");
	scanf("%d", &tamanho);
	if(tamanho <= 0) {
		printf("Numero invalido\n");
		exit(1);
	}
	//aloca bloco de memória para o ponteiro de matriz
	matriz1 = (float **) malloc(tamanho*sizeof(float*));
	matriz2 = (float **) malloc(tamanho*sizeof(float*));
	//populando os elementos da matriz
	printf("Apresentando a matriz:\n");
	for(i=0;i<tamanho;i++) {
		//aloca memória para cada elemento de cada linha da matriz
		matriz1[i] = (float *) malloc(tamanho*sizeof(float));
		matriz2[i] = (float *) malloc(tamanho*sizeof(float));
		//gera os elementos de cada linha de cada matriz
		for(j=0;j<tamanho;j++) {
			//gera cada elemento de cada linha de cada matriz
			matriz1[i][j] = (rand() % teto) + 100;
			matriz1[i][j] /= 100;
			matriz2[i][j] = (rand() % teto) + 100;
			matriz2[i][j] /= 100;
		}
	}
	//apresentando as matrizes geradas
	printf("Apresentando as matrizes geradas:\n");
	printf("Matriz A:\n");
	for(i=0;i<tamanho;i++) {
		for(j=0;j<tamanho;j++) {
			printf("%6.2f ", matriz1[i][j]);
		}
		printf("\n");
	}
	printf("Matriz B:\n");
	for(i=0;i<tamanho;i++) {
		for(j=0;j<tamanho;j++) {
			printf("%6.2f ", matriz2[i][j]);
		}
		printf("\n");
	}
	//apresenta a soma das matrizes geradas
	printf("Apresentando as operações com matrizes:\n");
	printf("A + B:\n");
	for(i=0;i<tamanho;i++) {
		for(j=0;j<tamanho;j++) {
			printf("%6.2f ", matriz1[i][j] + matriz2[i][j]);
		}
		printf("\n");
	}
	printf("A - B:\n");
	for(i=0;i<tamanho;i++) {
		for(j=0;j<tamanho;j++) {
			printf("%6.2f ", matriz1[i][j] - matriz2[i][j]);
		}
		printf("\n");
	}
	//libera a memória alocada
	free(matriz1);
	free(matriz2);
	return 0;
}
