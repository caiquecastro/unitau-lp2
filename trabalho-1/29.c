/*
Trabalho de fim de semestre - 2º Engenharia da Computação - UNITAU - Prof. Luis Eduardo
Arquivo: 29.c
Autor: Caíque de Castro S. Silva, Giovanna Alves dos Santos e João Victor Guedes
Objetivo: Desenvolva um programa que preencha uma matriz (tipo int) com 10 x 10 elementos utilizando
valores aleatórios. Imprima  a matriz, a diagonal principal e os triângulos (superior e inferior).
*/

#include <stdio.h> //para printf()
#include <stdlib.h> //para srand()
#include <time.h> //para time()
#define TETO 100 //define um teto para os valores aleatórios
#define TAMANHO 20 //define o tamanho da matriz de números aleatórios

int main() {
	//declaração de variáveis
	int matriz[TAMANHO][TAMANHO], i, j;
	//define uma semente de geração de números aleatórios
	srand(time(NULL));
	//populando e apresentando os elementos da matriz
	printf("Apresentando a matriz:\n");
	for(i=0;i<TAMANHO;i++) {
		for(j=0;j<TAMANHO;j++) {
			matriz[i][j] = (rand() % (int)TETO) + 1;
			printf("%3d ", matriz[i][j]);
		}
		printf("\n");
	}
	//apresentando os elementos da diagonal principal
	printf("\nApresentando a diagonal principal:\n");
	for(i=0;i<TAMANHO;i++) {
		for(j=0;j<TAMANHO;j++) {
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
	for(i=0;i<TAMANHO;i++) {
		for(j=0;j<TAMANHO;j++) {
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
	for(i=0;i<TAMANHO;i++) {
		for(j=0;j<TAMANHO;j++) {
			if(j<i) { //verifica se pertence ao triangulo inferior
				printf("%3d ", matriz[i][j]);
			} else {
				printf("    ");
			}
		}
		printf("\n");
	}
	return 0;
}