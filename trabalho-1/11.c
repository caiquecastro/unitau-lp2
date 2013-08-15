/*
Trabalho de fim de semestre - 2º Engenharia da Computação - UNITAU - Prof. Luis Eduardo
Arquivo: 1.c
Autor: Caíque de Castro S. Silva, Giovanna Alves dos Santos e João Victor Guedes
Objetivo: Faça um programa que leia um número. A cada número lido, o programa deverá indicar
se esse número é par ou ímpar. A primeira pergunta a ser feita é se o operador quer continuar
a informar os números. Depois de cada número lido, o programa deverá perguntar se o operador
quer continuar a informar os números. Enquanto o operador responder "S" ou "s", deverá ser
solicitado novamente o número. Caso ele não queira mais informar, o programa deverá apresentar
as seguintes informações:
	A) Quantidade de números lidos.
	B) Somatória dos números lidos.
	C) Qual o menor número lido.
*/

#include <stdio.h> //para scanf() e printf()

int main() {
	//declaração de variáveis
	int menor, quantidade=0, soma=0, atual;
	char continuar;
	printf("Digite um número: ");
	scanf("%d", &atual);
	__fpurge(stdin);//limpa o buffer
	menor = atual;
	soma += atual;
	quantidade++;
	if(atual % 2 == 0) {
		printf("Número Par.\n");	
	} else {
		printf("Número Ímpar.\n");
	}
	printf("Deseja continuar informando números [S ou s para sim]? ");
	scanf("%c", &continuar);
	__fpurge(stdin); //limpa o buffer
	while(continuar == 's' || continuar == 'S') {
		printf("Digite um número: ");
		scanf("%d", &atual);
		__fpurge(stdin); //limpa o buffer
		if(atual < menor) {
			menor = atual;
		}
		if(atual % 2 == 0) {
			printf("Número Par.\n");	
		} else {
			printf("Número Ímpar.\n");
		}
		soma += atual;
		quantidade++;
		printf("Deseja continuar informando números [S ou s para sim]? ");
		scanf("%c", &continuar);
		__fpurge(stdin); //limpa o buffer
	}
	//apresenta o resultado
	printf("Resultado:\n");
	printf("A) Foram lidos %d números.\n", quantidade);
	printf("B) A Soma total dos números foi %d.\n", soma);
	printf("C) O menor número foi %d.\n", menor);
	return 0;
}