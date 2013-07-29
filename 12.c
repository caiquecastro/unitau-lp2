/*
Trabalho de fim de semestre - 2º Engenharia da Computação - UNITAU - Prof. Luis Eduardo
Arquivo: 12.c
Autor: Caíque de Castro S. Silva, Giovanna Alves dos Santos e João Victor Guedes
Objetivo: Faça um programa que realize a somatória de uma faixa de valores. O piso e o teto deverão ser informados pelo usuário.
*/

#include <stdio.h> //para printf() e scanf().

int somatoria(int,int);

int main() {
	//declaração de variáveis
	int p, t, resultado, geraMensagem=0;
	//estrutura de repetição do-while para forçar o usuário a digitar um valor de teto maior ou igual ao piso.
	do {
		if(geraMensagem != 0) {
			printf("O valor informado do teto deve ser maior ou igual ao piso. Digite novamente os valores: \n");
		}
		//lendo o valor do piso
		printf("Digite o valor inteiro do piso: ");
		scanf("%d",&p);
		//lendo o valor do teto
		printf("Digite o valor inteiro do teto (maior que %d): ", p-1);
		scanf("%d",&t);
		geraMensagem++;
	} while(p>t);
	//calculando o resultado
	resultado = somatoria(p, t);
	//imprimindo na tela o resultado
	printf("Somatória de valores de %d até %d: %d\n", p, t, resultado);
	return 0;
}
//função recursiva para o calculo da somatória de valores dentro de uma faixa
int somatoria(int piso, int teto) {
	if(teto == piso) {
		return piso;
	} else {
		return (teto+somatoria(piso, teto-1));
	}
}