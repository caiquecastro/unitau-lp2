/*
Trabalho de fim de semestre - 2º Engenharia da Computação - UNITAU - Prof. Luis Eduardo
Arquivo: 31.c
Autor: Caíque de Castro S. Silva, Giovanna Alves dos Santos e João Victor Guedes
Objetivo: Faça um programa que utilize malloc para alocar dinamicamente um vetor com n elementos
(fornecidos pelo usuário) e todos eles terão valor 1 e uma matriz, também alocada dinâmicamente de
mxm elementos também fornecidos pelo usuário e todos os elementos da mesma serão 7. Eles deverão
ser apresentados na tela.
*/

#include <stdio.h> //para printf() e scanf()
#include <stdlib.h> //para malloc() e free() e exit()

int main() {
	//declaração de variáveis
	int *vetor, **matriz, i, j, tamanho1, tamanho2;
	//lê o valor do tamanho do vetor
	printf("Insira o tamanho do vetor: ");
	scanf("%d", &tamanho1);
	if(tamanho1 <= 0) {
		printf("Numero invalido\n");
		exit(1);
	}
	//preenchendo os elementos do vetor[5] pela estrutura de repetição for
	vetor = (int *) malloc(tamanho1*sizeof(int));
	for(i=0;i<tamanho1;i++) {
		*(vetor+i) = 1;
	}
	//lê o valor de cada dimensão da matriz quadrada
	printf("Insira o tamanho da matriz: ");
	scanf("%d",&tamanho2);
	if(tamanho2 <= 0) {
		printf("Numero invalido\n");
		exit(1);
	}
	//fazendo a alocação dinamica das linhas da matriz
	matriz = (int **) malloc(tamanho2*sizeof(int*));
	for(i=0;i<tamanho2;i++) {
		//fazendo a alocação dinâmica das colunas de cada linha
		matriz[i] = (int *) malloc(tamanho2*sizeof(int));
	}
	//preenchendo os valores da matriz quadrada
	for(i=0;i<tamanho2;i++) {
		for(j=0;j<tamanho2;j++) {
			matriz[i][j] = 7;
		}
	}
	//imprimindo na tela os dados das estrutura formatados
	printf("Imprimindo os elementos do array vetor:\n");
	for(i=0;i<tamanho1;i++) {
		printf("%d ", vetor[i]);
	}
	printf("\n");
	printf("Imprimindo os elementos da matriz bidimensional: \n");
	for(i=0;i<tamanho2;i++) {
		for(j=0;j<tamanho2;j++) {
			printf("%d ", matriz[i][j]);
		}
		printf("\n");//quebra de linha a cada linha da matriz
	}
	free(vetor); //libera o espaço do ponteiro vetor
	free(matriz); //libera espaço do ponteiro matriz
	return 0;
}
