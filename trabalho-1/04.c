/*
Trabalho de fim de semestre - 2º Engenharia da Computação - UNITAU - Prof. Luis Eduardo
Arquivo: 4.c
Autor: Caíque de Castro S. Silva, Giovanna Alves dos Santos e João Victor Guedes
Objetivo: Escrever um algoritmo para ler e imprimir três números. Se o primeiro for positivo,
imprimir o seu dobro, caso contrário, imprimir o seu triplo; se  o segundo número for maior
que 10 e menor que 100, imprimir a mensagem: "Número está entre 10 e 100 - intervalo permitido";
se o terceiro número for menor que o segundo, calcular e imprimir a diferença entre eles, caso
contrário, imprimir o terceiro número adicionado de 1.
*/

#include <stdio.h> //para printf() e scanf()
#include <stdlib.h> //para abs()

int main() {
	//declaração de variáveis
	int n1, n2, n3;
	//lê o valor de n1
	printf("Digite o primeiro número: ");
	scanf("%d", &n1);
	//lê o valor de n2
	printf("Digite o segundo número: ");
	scanf("%d", &n2);
	//lê o valor de n3
	printf("Digite o terceiro número: ");
	scanf("%d", &n3);
	//apresentando os resultados
	printf("Resultados:\n");
	if(n1 >= 0) { //verifica se n1 é positivo
		printf("%d\n", n1*2); //imprime seu dobro
	} else { //caso contrário
		printf("%d\n", n1*3); //imprime seu triplo
	}
	if(n2 > 10 && n2 < 100) { //verifica se n2 está no intervalo permitido
		printf("Número está 10 e 100 - intervalo permitido.\n");
	}
	if(n3 < n2) { //se o terceiro for menor que o segundo
		printf("%d\n", abs(n3-n2)); //calcula a diferença entre eles
	} else { //caso contrário
		printf("%d\n", n3+1); //terceiro adicionado de 1
	}
	return 0;
}