/*
Trabalho de fim de semestre - 2º Engenharia da Computação - UNITAU - Prof. Luis Eduardo
Arquivo: 33.c
Autor: Caíque de Castro S. Silva, Giovanna Alves dos Santos e João Victor Guedes
Objetivo: Desenvolva um programa que preencha um vetor (tipo int) com n
elementos fornecidos pelo usuário e alocados
dinamicamente utilizando valores aleatórios. Imprima o vetor e apresente
a somatória dos pares e dos ímpares.
*/

#include <stdio.h> //para printf() e scanf()
#include <stdlib.h> //para malloc(), srand() e free()
#include <time.h> //para time()
#define TETO 100 //define teto para números aleatórios

int main() {
	//declaração de variáveis
	int *vetor;
	int i, somaPar=0, somaImpar=0, tamanho;
	//gera semente para números aleatórios
	srand(time(NULL));
	//pede para o usuário o valor de números do vetor
	printf("Digite o tamanho do vetor: ");
	scanf("%d", &tamanho);
	if(tamanho <= 0) {
		printf("Numero invalido\n");
		exit(1);
	}
	//aloca dinamicamente o vetor
	vetor = (int *) malloc(tamanho*sizeof(int));
	//popula e apresenta o vetor com os valores randômicos
	printf("Apresentando o vetor:\n");
	for(i=0;i<tamanho;i++) {
		vetor[i] = (rand() % (int)TETO) + 1;
		if(vetor[i] % 2 == 0) { //se for par
			somaPar += vetor[i]; //soma ao valor agregado de somaPar
		} else { //se for impar
			somaImpar += vetor[i]; //soma ao valor agregado de somaImpar
		}
		printf("[%3d] ", vetor[i]);//apresenta o vetor
	}
	//apresenta a soma dos pares e a soma dos ímpares
	printf("\nSoma dos valores pares: %d \nSoma dos valores ímpares: %d\n\n", somaPar, somaImpar);
	//libera o espaço de memória
	free(vetor);
	return 0;
}