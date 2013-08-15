/*
Trabalho de fim de semestre - 2º Engenharia da Computação - UNITAU - Prof. Luis Eduardo
Arquivo: 20.c
Autor: Caíque de Castro S. Silva, Giovanna Alves dos Santos e João Victor Guedes
Objetivo: Faça um programa que lê uma string e retorna a string invertida.
*/

#include <stdio.h> //para printf() e gets()
#include <string.h> //para strlen()
#define MAXIMO 100 //define o tamanho máximo da string

int main() {
	//declaração de variáveis
	char frase[MAXIMO+1], invertido[MAXIMO+1];
	int tamanho, i, pos;

	//lê a string fornecida pelo usuário para ser invertida
	printf("Digite a frase ou palavra a ser invertida: ");
	gets(frase);
	//lê o tamanho da string
	tamanho = strlen(frase);
	pos = tamanho;
	//troca as posições da string para invertê-las
	for(i=0;i<tamanho;i++) {
		invertido[i] = frase[pos-1];
		pos--;
	}
	//coloca o caractere de finalização de string
	invertido[tamanho] = '\0';
	//apresenta a string invertida
	printf("Frase invertida: \n\"%s\"\n", invertido);
	return 0;
}