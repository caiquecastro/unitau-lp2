/*
Trabalho de fim de semestre - 2º Engenharia da Computação - UNITAU - Prof. Luis Eduardo
Arquivo: 3.c
Autor: Caíque de Castro S. Silva, Giovanna Alves dos Santos e João Victor Guedes
Objetivo: Escrever um algoritmo para ler dois números (Inteiros). Se os números forem
iguais imprimir a mensagem "Números iguais" e encerrar a execução; caso contrário,
imprimir o de maior valor, acompanhado pela mensagem "é maior número".
*/

#include <stdio.h> //para printf() e scanf()

int main() {
	//declaração de variáveis
	int n1, n2;
	//lê o valor de n1
	printf("Digite o primeiro número: ");
	scanf("%d", &n1);
	//lê o valor de n2
	printf("Digite o segundo número: ");
	scanf("%d", &n2);
	if(n1 == n2) { //verifica se os números são iguais
		printf("Números iguais.\n");
	} else if(n1 > n2) { //verifica se o primeiro é maior que o segundo
		printf("%d é maior número.\n", n1);
	} else { //se o segundo for maior que o primeiro
		printf("%d é maior número.\n", n2);
	}
	return 0;
}