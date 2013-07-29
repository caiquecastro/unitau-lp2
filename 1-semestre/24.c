/*
Trabalho de fim de semestre - 2º Engenharia da Computação - UNITAU - Prof. Luis Eduardo
Arquivo: 24.c
Autor: Caíque de Castro S. Silva, Giovanna Alves dos Santos e João Victor Guedes
Objetivo: Faça um programa que preencha um vetor (tipo int) com 20 elementos utilizando
valores aleatórios. Imprima o vetor e apresente a somatória dos pares e dos ímpares
*/

#include <stdio.h> //para printf()
#include <stdlib.h> //para srand()
#include <time.h> //para time()
#define TETO 100 //define um teto para os valores aleatórios
#define TAMANHO 20 //define o tamanho do vetor de números aleatórios

int main() {
	//declaração de variáveis
	int vetor[TAMANHO], i, somaPar=0, somaImpar=0;
	//define uma semente de geração de números aleatórios
	srand(time(NULL));
	//apresentando o vetor
	printf("Apresentando o vetor:");
	for(i=0;i<TAMANHO;i++) {
		vetor[i] = (rand() % (int)TETO) + 1; //gera valores aleatórios
		//faz a verificação par/impar e soma ao valor agregado
		if(vetor[i] % 2 == 0) {
			somaPar += vetor[i];
		} else {
			somaImpar += vetor[i];
		}
		//realiza uma quebra de linha a cada 10 elementos
		if(i%10 == 0) {
			printf("\n");
		}
		//imprime o elemento na tela
		printf("[%03d] ", vetor[i]);
	}
	//apresenta a soma dos valores pares e dos valores ímpares
	printf("\nSoma dos valores pares: %d \nSoma dos valores ímpares: %d\n\n", somaPar, somaImpar);
	return 0;
}