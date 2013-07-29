/*
Trabalho de fim de semestre - 2º Engenharia da Computação - UNITAU - Prof. Luis Eduardo
Arquivo: 36.c
Autor: Caíque de Castro S. Silva, Giovanna Alves dos Santos e João Victor Guedes
Objetivo: Faça um programa que preencha uma matriz (tipo float) com nxn (fornecidos pelo usuário)
elementos alocados dinamicamente utilizando valores aleatórios e logo após essa ação, apresente o mesmo.
*/

#include <stdio.h> //para printf()
#include <stdlib.h> //para malloc(), srand() e free()
#include <time.h> //para time()
#define TETO 100 //define um teto para os valores aleatórios

int main() {
	//declaração de variáveis
	float **matriz;
	int i, j, teto, tamanho;
	//define uma semente de geração de números aleatórios
	srand(time(NULL));
	//hack para resultar valores decimais
	teto = TETO * 100;
	//lê o tamanho do vetor definido pelo usuário
	printf("Digite o tamanho da matriz: ");
	scanf("%d", &tamanho);
	if(tamanho <= 0) {
		printf("Numero invalido\n");
		exit(1);
	}
	//fazendo a alocação dinamica das linhas da matriz
	matriz = (float **) malloc(tamanho*sizeof(float*));
	for(i=0;i<tamanho;i++) {
		//fazendo a alocação de cada elemento de cada linha
		matriz[i] = (float *) malloc(tamanho*sizeof(float));
	}
	//popula e apresenta os elementos da matriz bidimensional
	printf("\nMatriz:\n");
	for(i=0;i<tamanho;i++) {
		for(j=0;j<tamanho;j++) {
			matriz[i][j] = (rand() % teto) + 100;//gera valor aleatório
			matriz[i][j] /= 100;
			printf("%6.2f  ",matriz[i][j]);//apresenta o elemento da matriz formatado
		}
		printf("\n");
	}
	free(matriz);
	return 0;
}
