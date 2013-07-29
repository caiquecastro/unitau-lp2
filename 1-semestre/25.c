/*
Trabalho de fim de semestre - 2º Engenharia da Computação - UNITAU - Prof. Luis Eduardo
Arquivo: 25.c
Autor: Caíque de Castro S. Silva, Giovanna Alves dos Santos e João Victor Guedes
Objetivo: Faça um programa que preencha um vetor (tipo float) com 10 elementos utilizando
valores aleatórios e logo após  essa ação, apresente o mesmo.
*/

#include <stdio.h> //para printf()
#include <stdlib.h> //para srand()
#include <time.h> //para time()
#define TETO 100 //define um teto para os valores aleatórios
#define TAMANHO 10 //define o tamanho do vetor de números aleatórios

int main() {
	//declaração de variáveis
	float vetor[TAMANHO], soma=0;
	int i, teto;
	//define uma semente de geração de números aleatórios
	srand(time(NULL));
	//hack para resultar valores decimais
	teto = TETO * 100;
	//apresentando o vetor e dentro do próprio loop, há a soma dos valores para a somatória geral
	printf("\nVetor:\n");
	for(i=0;i<TAMANHO;i++) {
		vetor[i] = ((rand() % teto) + 100); //gera valores aleatórios
		vetor[i] /= 100; //continuação do hack para valores decimais
		soma += vetor[i];//soma ao valor agregado
		printf("[%2.2f] ", vetor[i]); //apresenta na tela o elemento atual.
	}
	//apresentando a somatória dos valores dos elementos do vetor
	printf("\nSoma dos valores: %.2f\n\n", soma);
	return 0;
}