/*
Trabalho de fim de semestre - 2º Engenharia da Computação - UNITAU - Prof. Luis Eduardo
Arquivo: 32.c
Autor: Caíque de Castro S. Silva, Giovanna Alves dos Santos e João Victor Guedes
Objetivo: Faça um programa que preencha um vetor (tipo float) com n elementos alocados fornecidos
pelo usuário dinamicamente utilizando valores aleatórios e logo após essa ação, apresente o mesmo.
*/

#include <stdio.h> //para printf() e scanf()
#include <stdlib.h> //para malloc(), srand() e free()
#include <time.h> //para time()
#define TETO 100 //define teto para números aleatórios

int main() {
	//declaração de variáveis
	float *vetor;
	int i, tamanho, teto;
	//lê o tamanho do vetor desejado pelo usuário
	printf("Digite o tamanho do vetor: ");
	scanf("%d", &tamanho);
	if(tamanho <= 0) {
		printf("Numero invalido\n");
		exit(1);
	}
	//realiza a alocação dinâmica do ponteiro de vetor
	vetor = (float *) malloc(tamanho*sizeof(float));
	//hack para geração de números decimais
	teto = TETO*100;
	//gera semente de números aleatórios
	srand(time(NULL));
	//populando e apresentando o vetor no mesmo loop
	printf("Apresentando o vetor:");
	for(i=0;i<tamanho;i++) {
		if(i%10 == 0) printf("\n");//quebra de linha a cada 10 elementos
		vetor[i] = (rand() % teto) + 100;//gera número aleatório
		vetor[i] /= 100;//hack para número decimal
		printf("[%6.2f] ", vetor[i]); //apresentação do elemento do vetor
	}
	printf("\n");
	free(vetor);//libera bloco de memória reservado para o ponteiro de vetor.
	return 0;
}
