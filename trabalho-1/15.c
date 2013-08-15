/*
Trabalho de fim de semestre - 2º Engenharia da Computação - UNITAU - Prof. Luis Eduardo
Arquivo: 15.c
Autor: Caíque de Castro S. Silva, Giovanna Alves dos Santos e João Victor Guedes
Objetivo: Implemente um algoritmo recursivo para mostrar todos os números impares de 0 até n.
*/

#include <stdio.h> //para printf() e scanf()

void geraImpar(int,int);

int main() {
	//declaração de variáveis
	int maximo;
	//lê o número máximo fornecido pelo usuário para gerar os números impares nesse intervalo
	printf("Digite o número máximo para gerar números ímpares: ");
	scanf("%d",&maximo);
	//chama a função que imprime os valores impares no intervalo
	geraImpar(0, maximo);
	return 0;
}

void geraImpar(int atual, int maximo) {
	//previne a função de ser chamada incorretamente
	if (atual > maximo || atual < 0) {
		return;
	} else if(atual % 2 == 1) { //verifica se o numero atual é impar
		printf("%d\n", atual);
	}
	geraImpar(atual+1, maximo); //continua a chamada da função até o teto da função
}