/*
Trabalho de fim de semestre - 2º Engenharia da Computação - UNITAU - Prof. Luis Eduardo
Arquivo: 30.c
Autor: Caíque de Castro S. Silva, Giovanna Alves dos Santos e João Victor Guedes
Objetivo: Faça um programa que preencha duas matrizes (tipo float) com 5x5 elementos
utilizando valores aleatórios e logo após essa ação, apresente os mesmos e as seguintes
operações: soma e subtração das matrizes.
*/

#include <stdio.h> //para printf()
#include <stdlib.h> //para srand()
#include <time.h> //para time()
#define TETO 100 //define um teto para os valores aleatórios
#define TAMANHO 5 //define o tamanho da matriz de números aleatórios

int main() {
	//declaração de variáveis
	float matriz1[TAMANHO][TAMANHO], matriz2[TAMANHO][TAMANHO];
	int i, j, teto;
	//define uma semente de geração de números aleatórios
	srand(time(NULL));
	//hack para números decimais
	teto = TETO * 100;
	//populando os elementos da matriz
	printf("Apresentando a matriz:\n");
	for(i=0;i<TAMANHO;i++) {
		for(j=0;j<TAMANHO;j++) {
			matriz1[i][j] = (rand() % teto) + 100;
			matriz1[i][j] /= 100;
			matriz2[i][j] = (rand() % teto) + 100;
			matriz2[i][j] /= 100;
		}
	}
	//apresentando as matrizes geradas
	printf("Apresentando as matrizes geradas:\n");
	printf("Matriz A:                                Matriz B:\n");
	for(i=0;i<TAMANHO;i++) {
		for(j=0;j<TAMANHO;j++) {
			printf("%6.2f ", matriz1[i][j]);
		}
		printf("      ");
		for(j=0;j<TAMANHO;j++) {
			printf("%6.2f ", matriz2[i][j]);
		}
		printf("\n");
	}
	//apresenta a soma das matrizes geradas
	printf("Apresentando as operações com matrizes:\n");
	printf("A + B:                                   A-B:\n");
	for(i=0;i<TAMANHO;i++) {
		for(j=0;j<TAMANHO;j++) {
			printf("%6.2f ", matriz1[i][j] + matriz2[i][j]);
		}
		printf("      ");
		for(j=0;j<TAMANHO;j++) {
			printf("%6.2f ", matriz1[i][j] - matriz2[i][j]);
		}
		printf("\n");
	}
	return 0;
}