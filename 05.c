/*
Trabalho de fim de semestre - 2º Engenharia da Computação - UNITAU - Prof. Luis Eduardo
Arquivo: 5.c
Autor: Caíque de Castro S. Silva, Giovanna Alves dos Santos e João Victor Guedes
Objetivo: Elabore um algoritmo que, dada a idade de um nadador, classifique-o em
uma das seguintes categorias:
	Infantil A: 5 a 7 anos.
	Infantil B: 8 a 10 anos.
	Juvenil A: 11 a 13 anos.
	Juvenil B: 14 a 17 anos.
	Sênior: maiores de 18 anos.
*/

#include <stdio.h> //para printf() e scanf()

int main() {
	//declaração de variáveis
	int idade;
	//le a idade do nadador
	printf("Digite a idade do nadador (5-150): ");
	scanf("%d", &idade);
	//realiza a verificação de idade e enquadra na categoria correta
	if(idade >= 5 && idade <= 7) {
		printf("Infantil A: 5 a 7 anos.\n");
	} else if(idade >= 8 && idade <= 10) {
		printf("Infantil B: 8 a 10 anos.\n");
	} else if(idade >= 11 && idade <= 13) {
		printf("Juvenil A: 11 a 13 anos.\n");
	} else if(idade >= 14 && idade <= 17) {
		printf("Juvenil B: 14 a 17 anos.\n");
	} else if(idade >= 18 && idade <= 150) {
		printf("Sênior: maiores de 18 anos.\n");
	} else { //se for uma idade fora do intervalo ou se for um valor não numérico
		printf("Idade inválida.\n");
	}
	return 0;
}