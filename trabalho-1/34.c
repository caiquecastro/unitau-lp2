/*
Trabalho de fim de semestre - 2º Engenharia da Computação - UNITAU - Prof. Luis Eduardo
Arquivo: 34.c
Autor: Caíque de Castro S. Silva, Giovanna Alves dos Santos e João Victor Guedes
Objetivo: Faça um programa que preencha um vetor (tipo float) com n (fornecido pelo usuário)
elementos alocados dinamicamente utilizando valores aleatórios e logo após essa ação,
apresente o mesmo e a somatória de todos os elementos.
*/

#include <stdio.h> //para printf()
#include <stdlib.h> //para malloc(), srand() e free()
#include <time.h> //para time()
#define TETO 100 //define um teto para os valores aleatórios

int main() {
	//declaração de variáveis
	float *vetor, soma=0;
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
	vetor = (float*) malloc(tamanho*sizeof(float));
	//apresentando o vetor e dentro do próprio loop, há a soma dos valores para a somatória geral
	printf("Vetor:");
	for(i=0;i<tamanho;i++) {
		vetor[i] = ((rand() % teto) + 100); //gera valores aleatórios
		vetor[i] /= 100; //continuação do hack para valores decimais
		soma += vetor[i];//soma ao valor agregado
		if(i%10 == 0) {
			printf("\n");//realiza uma quebra de linha a cada 10 elementos
		}
		printf("[%6.2f] ", vetor[i]); //apresenta na tela o elemento atual.
	}
	//apresentando a somatória dos valores dos elementos do vetor
	printf("\nSoma dos valores: %.2f\n", soma);
	//libera o espaço de memória reservado para o ponteiro
	free(vetor);
	return 0;
}
