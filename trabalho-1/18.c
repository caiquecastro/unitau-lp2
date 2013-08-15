/*
Trabalho de fim de semestre - 2º Engenharia da Computação - UNITAU - Prof. Luis Eduardo
Arquivo: 18.c
Autor: Caíque de Castro S. Silva, Giovanna Alves dos Santos e João Victor Guedes
Objetivo: Faça um programa que receba uma ou mais palavras e imprima a mesma de volta
*/

#include <stdio.h> // para printf() e gets()
#define MAXIMO 100 //define tamanho máximo da string

int main() {
	//declara variáveis
	char frase[MAXIMO+1];
	//solicitando os valores
	printf("Informe a palavra ou a frase (maximo 100 caracteres): ");
	//lendo o valor string do teclado e atribuindo à variável
	gets(frase);
	//apresentando a frase digitada
	printf("Apresentando a frase inteira:\n");
	printf("\"%s\"\n", frase);
	return 0;
}