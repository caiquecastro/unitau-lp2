/*
Trabalho de fim de semestre - 2º Engenharia da Computação - UNITAU - Prof. Luis Eduardo
Arquivo: 1.c
Autor: Caíque de Castro S. Silva, Giovanna Alves dos Santos e João Victor Guedes
Objetivo: Faça um algoritmo que leia um número (Inteiro) e mostra uma mensagem se este
número é par ou ímpar e se é positivo ou negativo.
*/

#include <stdio.h> //para scanf() e printf()

int main() {
	//declaração de variáveis
	int numero;
	//lê o valor digitado pelo usuário
	printf("Digite um numero inteiro: \n");
	scanf("%d", &numero);
	//verifica se o número é par ou impar
	if(numero%2 == 0) {
		printf("O número %d é par. ", numero);
	} else {
		printf("O número %d é ímpar. ", numero);
	}
	//verifica se o número é negativo ou positivo.
	if(numero < 0) {
		printf("O número %d é negativo.\n", numero);
	} else {
		printf("O número %d é positivo.\n", numero);
	}
	return 0;
}