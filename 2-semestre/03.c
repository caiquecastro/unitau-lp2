/*
Trabalho de fim de semestre - 2º Engenharia da Computação - UNITAU - Prof. Luis Eduardo
Arquivo: 03.c
Autor: Caíque de Castro S. Silva, Giovanna Alves dos Santos e João Victor Guedes
Objetivo: Faça um programa que leia o arquivo "entrada.dat" e imprima na tema a soma de todos os termos.
*/

#include <stdio.h> //para printf(), scanf(), fopen(), fprintf(), FILE

int main() {
	FILE *arquivo; //ponteiro para arquivo
	//declaração de variáveis
	double soma = 0, numero;
	char ponteiro;

	//abre o arquivo com permissão de leitura (r)
	arquivo = fopen("entrada.dat", "r");

	if(arquivo == NULL) { //verifica se o arquivo foi aberto com sucesso com a devida permissão.
		printf("Ocorreu um erro.\n"); //imprime na tela uma mensagem de erro
	} else { //caso contrario executa o que foi pedido

		while(fscanf(arquivo, "%lf", &numero) != EOF) { //percorre o arquivo até achar EOF (End Of File)
			soma += numero; //soma o valor ao agregado
		}
		printf("%lf\n", soma); //imprime a soma em tela
	}

	fclose(arquivo); //fecha o arquivo
	return 0; //retorna 0 para o sistema operacional
}