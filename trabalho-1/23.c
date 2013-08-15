/*
Trabalho de fim de semestre - 2º Engenharia da Computação - UNITAU - Prof. Luis Eduardo
Arquivo: 23.c
Autor: Caíque de Castro S. Silva, Giovanna Alves dos Santos e João Victor Guedes
Objetivo: Faça um programa que preencha um vetor (tipo float) com 10 elementos utilizando
valores aleatórios e logo após essa ação, apresente o mesmo.
*/

#include <stdio.h> //para printf()
#include <stdlib.h> //para srand()
#include <time.h> //para time()
#define TETO 100 //define um teto para os valores aleatórios
#define TAMANHO 10 //define o tamanho do vetor de números aleatórios

int main() {
	//declaração de variáveis
	float vetor[TAMANHO];
	int i, teto;

	srand(time(NULL));//cria semente para geração de números aleatórios

	//hack para gerar valores decimais
	teto = TETO * 100;

	//preenchendo o vetor com valores aleatórios
	printf("Apresentando o vetor:");

	for(i=0;i<TAMANHO;i++) {
		//realiza uma quebra de linha a cada 10 elementos
		if(i%10 == 0) {
			printf("\n");
		}
		vetor[i] = (rand() % teto) + 100; //gera valores aleatórios
		vetor[i] /= 100; //hack para valores decimais
		printf("[%05.2f] ", vetor[i]);//imprime os valores formatados
	}

	printf("\n");

	return 0;
}