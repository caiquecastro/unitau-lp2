/*
Trabalho de fim de semestre - 2º Engenharia da Computação - UNITAU - Prof. Luis Eduardo
Arquivo: 16.c
Autor: Caíque de Castro S. Silva, Giovanna Alves dos Santos e João Victor Guedes
Objetivo: Faça uma função recursiva, em linguagem C, que calcule o valor da série S descrita
a seguir para um valor n>0 a ser fornecido como parâmetro para a mesma: S = 1 + 1/1! + 1/2! +
1/3! + ... + 1/n!.
*/

#include <stdio.h> //para printf() e scanf()

double fatorial(double);//prototipo para calculo de fatorial recursivo

double serie_s(double); //prototipo para calculo da serie s recursivo

int main() {
	//declaração de variáveis
	double maximo;
	//espera o usuário digitar um valor valido para sair do loop, evitando erros no seguimento do programa
	while(1) {
		//lê o valor maximo fornecido pelo usuário
		printf("Digite o teto da função (0 < x < 15): ");
		scanf("%lf",&maximo);
		//fica em um loop infinito enquanto o usuário não entra um valor válido
		if(maximo > 0 && maximo < 15) {
			break;
		}
		//mensagem de número invalido
		printf("Número inválido. Tente novamente. ");
	}
	//mostra o resultado na tela
	printf("O valor da função é: %.10lf\n",serie_s(maximo));
	return 0;
}
//calcula o fatorial de n recursivamente
double fatorial(double n) {
	if(n==0) {
		return 1.0;
	} else {
		return (n*fatorial(n-1));
	}
}
//calcula serie S recursivamente
double serie_s(double numero) {
	if(numero == 0) {
		return 1;
	} else {
		return serie_s(numero - 1) + (1/fatorial(numero));
	}
}