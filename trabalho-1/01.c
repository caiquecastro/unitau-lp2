/*
Trabalho de fim de semestre - 2º Engenharia da Computação - UNITAU - Prof. Luis Eduardo
Arquivo: 1.c
Autor: Caíque de Castro S. Silva, Giovanna Alves dos Santos e João Victor Guedes
Objetivo: Escrever um algoritmo para ler dois valores numéricos e apresentar qual é o maior.
*/

#include <stdio.h> //para scanf() e printf()

int main() {
	//declaração de variáveis
	float n1, n2;
	printf("Digite o primeiro valor: \n");
	scanf("%f", &n1);
	printf("Digite o segundo valor: \n");
	scanf("%f", &n2);
	//verifica qual valor numérico é o maior
	if(n1 > n2) {
		printf("O maior valor é %f\n", n1);//apresenta se n1 > n2
	} else {
		printf("O maior valor é %f\n", n2);//caso contrário
	}
	return 0;
}