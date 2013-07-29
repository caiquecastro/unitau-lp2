/*
Trabalho de fim de semestre - 2º Engenharia da Computação - UNITAU - Prof. Luis Eduardo
Arquivo: 35.c
Autor: Caíque de Castro S. Silva, Giovanna Alves dos Santos e João Victor Guedes
Objetivo: Faça um programa que preencha dois vetores (tipo float) com n (fornecido pelo usuário)
elementos alocados dinamicamente utilizando valores aleatórios e logo após essa ação, apresente
os mesmos e as seguintes operações: soma, subtração, divisão e multiplicação de cada elemento
correspondente. Ou seja, a primeira posição de ambos serão somadas, a segunda e assim sucessivamente.
*/

#include <stdio.h> //para printf()
#include <stdlib.h> //para malloc(), srand() e free()
#include <time.h> //para time()
#define TETO 100 //define um teto para os valores aleatórios

int main() {
	//declaração de variáveis
	float *v1, *v2;
	int i, teto, tamanho;
	//define uma semente de geração de números aleatórios
	srand(time(NULL));
	//hack para resultar valores decimais
	teto = TETO * 100;
	//lê o tamanho do vetor definido pelo usuário
	printf("Digite o tamanho do vetor: ");
	scanf("%d", &tamanho);
	if(tamanho <= 0) {
		printf("Numero invalido\n");
		exit(1);
	}
	//realiza a alocação dinâmica do vetor
	v1 = (float*) malloc(tamanho*sizeof(float));
	v2 = (float*) malloc(tamanho*sizeof(float));
	//calculando e apresentando as operações com cada posição dos 2 vetores
	printf("\nVetor: ");
	for(i=0;i<tamanho;i++) {
		v1[i] = (rand() % teto) + 100;
		v1[i] /= 100;
		v2[i] = (rand() % teto) + 100;
		v2[i] /= 100;
		//realiza as operações
		printf("Posição %d:\n", i);
		printf("Soma: %.2f\n", v1[i]+v2[i]);
		printf("Subtração: %.2f\n", v1[i]-v2[i]);
		printf("Divisão: %.2f\n", v1[i]/v2[i]);
		printf("Multiplicação: %.2f\n\n", v1[i]*v2[i]);
	}
	free(v1); //libera a memória alocada
	free(v2); //libera a memória alocada
	return 0;
}
