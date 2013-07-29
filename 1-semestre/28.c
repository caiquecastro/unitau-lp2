/*
Trabalho de fim de semestre - 2º Engenharia da Computação - UNITAU - Prof. Luis Eduardo
Arquivo: 28.c
Autor: Caíque de Castro S. Silva, Giovanna Alves dos Santos e João Victor Guedes
Objetivo: Desenvolva um programa que preencha uma matriz (tipo int) com 20 x 20 elementos
utilizando valores aleatórios. Imprima a matriz e apresente a somatória dos pares e dos ímpares.
*/

#include <stdio.h> //para printf()
#include <stdlib.h> //para srand()
#include <time.h> //para time()
#define TETO 100 //define um teto para os valores aleatórios
#define TAMANHO 20 //define o tamanho da matriz de números aleatórios

int main() {
	//declaração de variáveis
	int matriz[TAMANHO][TAMANHO], somaPar=0, somaImpar=0;
	int i, j;
	//define uma semente de geração de números aleatórios
	srand(time(NULL));
	//calcula e apresenta os valores dos elementos da matriz
	printf("\nMatriz:\n");
	for(i=0;i<TAMANHO;i++) {
		for(j=0;j<TAMANHO;j++) {
			matriz[i][j] = (rand() % (int)TETO) + 1; // % TETO faz com que gere um resultado entre 0 e TETO-1, ai coloca +1 , pro intervalo ser de 1 a TETO
			printf("%03d ",matriz[i][j]);//apresenta o valor formatado
			if(matriz[i][j] % 2 == 0) {
				somaPar += matriz[i][j];//soma ao valor agregado
			} else {
				somaImpar += matriz[i][j];//soma ao valor agregado
			}
		}
		printf("\n");
	}
	//apresenta o valor total da soma dos elementos pares e dos elementos ímpares
	printf("Soma dos pares: %d\nSoma dos impares: %d\n", somaPar, somaImpar);
	return 0;
} 