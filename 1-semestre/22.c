/*
Trabalho de fim de semestre - 2º Engenharia da Computação - UNITAU - Prof. Luis Eduardo
Arquivo: 22.c
Autor: Caíque de Castro S. Silva, Giovanna Alves dos Santos e João Victor Guedes
Objetivo: Faça um programa que preencha um vetor com 5 elementos e todos ele terão valor 1
e uma matriz 2x2 e todos os elementos da mesma serão 7. Eles deverão ser apresentados na tela.
*/

#include <stdio.h> //para printf()
#define TAM_VETOR 5 //define o tamanho do vetor
#define TAM_IND 2 //define o tamanho de cada dimensão da matriz
#define VALOR_VETOR 1 //define o valor de cada elemento do vetor
#define VALOR_MATRIZ 7 //define o valor de cada elemento da matriz

int main() {
	//declaração de variáveis
	int vetor[TAM_VETOR], matriz[TAM_IND][TAM_IND], i, j;
	//preenchendo os elementos do vetor[TAM_VETOR] com o valor VALOR_VETOR
	for(i=0;i<TAM_VETOR;i++) {
		vetor[i] = VALOR_VETOR;
	}
	//preenchendo os elementos da matriz[TAM_IND][TAM_IND] com o valor VALOR_MATRIZ
	for(i=0;i<TAM_IND;i++) {
		for(j=0;j<TAM_IND;j++) {
			matriz[i][j] = VALOR_MATRIZ;
		}
	}
	//imprimindo na tela os dados das estruturas formatados
	printf("Imprimindo os elementos do array vetor:\n");
	for(i=0;i<TAM_VETOR;i++) {
		printf("%d ", vetor[i]);
	}
	printf("\n");
	printf("Imprimindo os elementos da matriz %dx%d: \n", TAM_IND, TAM_IND);
	for(i=0;i<TAM_IND;i++) {
		for(j=0;j<TAM_IND;j++) {
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	} 
	return 0;
}