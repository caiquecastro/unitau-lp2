/*
Trabalho de fim de semestre - 2º Engenharia da Computação - UNITAU - Prof. Luis Eduardo
Arquivo: 21.c
Autor: Caíque de Castro S. Silva, Giovanna Alves dos Santos e João Victor Guedes
Objetivo: Faça um programa que conte quantas consoantes há em uma frase
*/

#include <stdio.h> //para gets() e printf()
#define MAXIMO 100 //define o tamanho máximo da string

int main() {
	//declara variáveis
	int i=0, consoante=0;
	char frase[MAXIMO+1];
	//solicitando os valores
	printf("Informe a palavra ou a frase: ");
	//lendo o valor string do teclado e atribuindo à variável
	gets(frase);
	//percorrer a string em busca de consoante
	while(frase[i] != '\0') { //enquanto não for o fim da string
		if(!(frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u' || frase[i] == 'A' || frase[i] == 'E' || frase[i] == 'I' || frase[i] == 'O' || frase[i] == 'U')) {
			consoante++; //se o caractere atual for consoante, incrementa a variavel consoante
		}
		i++;
	}
	//apresentando o resultado
	printf("A frase: \n\"%s\" tem %d consoantes!\n",frase,consoante);
	return 0;
}