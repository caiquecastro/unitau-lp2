/*
Trabalho de fim de semestre - 2º Engenharia da Computação - UNITAU - Prof. Luis Eduardo
Arquivo: 37.c
Autor: Caíque de Castro S. Silva, Giovanna Alves dos Santos e João Victor Guedes
Objetivo: Desenvolva um programa que preencha uma matriz (tipo int) com nxn (fornecido pelo usuário) elementos
alocados dinamicamente utilizando valores aleatórios. Imprima a matriz e apresente a somatória dos pares e dos ímpares.
*/

#include <stdio.h> //para printf()
#include <stdlib.h> //para srand()
#include <time.h> //para time()
#define TETO 100 //define um teto para os valores aleatórios

int main() {
	//declaração de variáveis
	int **matriz, somaPar=0, somaImpar=0, tamanho;
	int i, j;
	//define uma semente de geração de números aleatórios
	srand(time(NULL));
	//lê o tamanho do vetor definido pelo usuário
	printf("Digite o tamanho da matriz: ");
	scanf("%d", &tamanho);
	if(tamanho <= 0) {
		printf("Numero invalido\n");
		exit(1);
	}
	//fazendo a alocação dinamica das linhas da matriz
	matriz = (int **) malloc(tamanho*sizeof(int*));
	for(i=0;i<tamanho;i++) {
		*(matriz+i) = (int *) malloc(tamanho*sizeof(int));//aloca cada elemento de cada linha
	}
	//calcula e apresenta os valores dos elementos da matriz
	printf("\nMatriz:\n");
	for(i=0;i<tamanho;i++) {
		for(j=0;j<tamanho;j++) {
			matriz[i][j] = (rand() % (int)TETO) + 1;
			printf("%3d ",matriz[i][j]);//apresenta o valor formatado
			if(matriz[i][j] % 2 == 0) {
				somaPar += matriz[i][j];//soma ao valor agregado
			} else {
				somaImpar += matriz[i][j];//soma ao valor agregado
			}
		}
		printf("\n");//quebra a linha a cada linha da matriz
	}
	//apresenta o valor total da soma dos elementos pares e dos elementos ímpares
	printf("Soma dos pares: %d\nSoma dos impares: %d\n", somaPar, somaImpar);
	free(matriz);
	return 0;
}
