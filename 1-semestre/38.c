/*
Trabalho de fim de semestre - 2º Engenharia da Computação - UNITAU - Prof. Luis Eduardo
Arquivo: 38.c
Autor: Caíque de Castro S. Silva, Giovanna Alves dos Santos e João Victor Guedes
Objetivo: Desenvolva um programa que preencha uma matriz (tipo int) com nxn (fornecido
pelo usuário) elementos utilizando valores aleatórios. Imprima  a matriz, a diagonal
principal e os triângulos (superior e inferior).
*/

#include <stdio.h> //para printf()
#include <stdlib.h> //para srand()
#include <time.h> //para time()
#define TETO 100 //define um teto para os valores aleatórios

int main() {
	//declaração de variáveis
	int **matriz, i, j, tamanho;
	//define uma semente de geração de números aleatórios
	srand(time(NULL));
	//lê o tamanho do vetor definido pelo usuário
	printf("Digite o tamanho da matriz: ");
	scanf("%d", &tamanho);
	if(tamanho <= 0) {
		printf("Numero invalido\n");
		exit(1);
	}
	//populando e apresentando os elementos da matriz
	printf("Apresentando a matriz:\n");
	//aloca dinamicamente o ponteiro da matriz
	matriz = (int **) malloc(tamanho*sizeof(int*));
	for(i=0;i<tamanho;i++) {
		//aloca cada elemento de cada linha da matriz
		matriz[i] = (int *) malloc(tamanho*sizeof(int));
		for(j=0;j<tamanho;j++) {
			matriz[i][j] = (rand() % (int)TETO) + 1;
			printf("%3d ", matriz[i][j]);
		}
		printf("\n");
	}
	//apresentando os elementos da diagonal principal
	printf("\nApresentando a diagonal principal:\n");
	for(i=0;i<tamanho;i++) {
		for(j=0;j<tamanho;j++) {
			if(j == i) {//verifica se pertence a diagonal principal
				printf("%3d ", matriz[i][j]);
			} else {
				printf("    ");
			}
		}
		printf("\n");
	}
	//apresentando o triângulo superior
	printf("\nApresentando o triângulo superior:\n");
	for(i=0;i<tamanho;i++) {
		for(j=0;j<tamanho;j++) {
			if(j>i) { //verifica se pertence ao triangulo superior
				printf("%3d ", matriz[i][j]);
			} else {
				printf("    ");
			}
		}
		printf("\n");
	}
	//apresentando o triângulo inferior
	printf("\nApresentando o triângulo inferior:\n");
	for(i=0;i<tamanho;i++) {
		for(j=0;j<tamanho;j++) {
			if(j<i) { //verifica se pertence ao triangulo inferior
				printf("%3d ", matriz[i][j]);
			} else {
				printf("    ");
			}
		}
		printf("\n");
	}
	free(matriz);
	return 0;
}
