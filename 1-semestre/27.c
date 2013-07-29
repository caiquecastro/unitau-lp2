/*
Trabalho de fim de semestre - 2º Engenharia da Computação - UNITAU - Prof. Luis Eduardo
Arquivo: 27.c
Autor: Caíque de Castro S. Silva, Giovanna Alves dos Santos e João Victor Guedes
Objetivo: Faça um programa que preencha uma matriz (tipo float) com 10 x 10 elementos
utilizando valores aleatórios e logo após essa ação, apresente o mesmo.
*/

#include <stdio.h> //para printf()
#include <stdlib.h> //para srand()
#include <time.h> //para time()
#define TETO 100 //define um teto para os valores aleatórios
#define TAMANHO 10 //define o tamanho da matriz de números aleatórios

int main() {
	//declaração de variáveis
	float matriz[TAMANHO][TAMANHO];
	int i, j, teto;
	//define uma semente de geração de números aleatórios
	srand(time(NULL));
	//hack para resultar valores decimais
	teto = TETO * 100;
	//popula e apresenta os elementos da matriz bidimensional
	printf("\nMatriz:\n");
	for(i=0;i<TAMANHO;i++) {
		for(j=0;j<TAMANHO;j++) {
			matriz[i][j] = (rand() % teto) + 100;//gera valor aleatório
			matriz[i][j] /= 100;
			printf("%6.2f  ",matriz[i][j]);//apresenta o elemento da matriz formatado
		}
		printf("\n");
	}
	return 0;
}