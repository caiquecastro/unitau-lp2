/*
Trabalho de fim de semestre - 2º Engenharia da Computação - UNITAU - Prof. Luis Eduardo
Arquivo: 26.c
Autor: Caíque de Castro S. Silva, Giovanna Alves dos Santos e João Victor Guedes
Objetivo: Faça um programa que preencha dois vetores (tipo float) com 10 elementos utilizando
valores aleatórios e logo após essa ação, apresente os mesmos e as seguintes operações: soma,
subtração, divisão e multiplicação de cada elemento correspondente. Ou seja, a primeira posição
de ambos serão somadas, a segunda e assim sucessivamente.
*/

#include <stdio.h> //para printf()
#include <stdlib.h> //para srand()
#include <time.h> //para time()
#define TETO 100 //define um teto para os valores aleatórios
#define TAMANHO 10 //define o tamanho do vetor de números aleatórios

int main() {
	//declaração de variáveis
	float v1[TAMANHO], v2[TAMANHO];
	int i, teto;
	//define uma semente de geração de números aleatórios
	srand(time(NULL));
	//hack para resultar valores decimais
	teto = TETO * 100;
	//calculando e apresentando as operações com cada posição dos 2 vetores
	printf("\nVetor: ");
	for(i=0;i<TAMANHO;i++) {
		v1[i] = (rand() % teto) + 100;
		v1[i] /= 100;
		v2[i] = (rand() % teto) + 100;
		v2[i] /= 100;
		printf("Posição %d:\n", i);
		printf("Soma: %.2f\n", v1[i]+v2[i]);
		printf("Subtração: %.2f\n", v1[i]-v2[i]);
		printf("Divisão: %.2f\n", v1[i]/v2[i]);
		printf("Multiplicação: %.2f\n\n", v1[i]*v2[i]);
	}
	return 0;
}