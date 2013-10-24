/*
Trabalho de fim de semestre - 2º Engenharia da Computação - UNITAU - Prof. Luis Eduardo
Arquivo: 01.c
Autor: Caíque de Castro S. Silva, Giovanna Alves dos Santos e João Victor Guedes
Objetivo: Faça um programa que solicite dois valores numéricos ao usuário. O segundo valor deverá ser maior que o primeiro.
Grave em um arquivo chamado "saida.txt", todos os números inteiros entre o primeiro e o segundo valor, com cada número em uma linha.
*/

#include <stdio.h> //para printf(), scanf(), fopen(), fprintf(), FILE

int main() {
	FILE *arquivo; //ponteiro para arquivo
	int i, min, max; //variaveis de controle

	arquivo = fopen("saida.txt", "w"); //abre o arquivo com permissão de escrita (w)
	
	do { //solicita a entrada do piso e do teto
		printf("Digite o piso: ");
		scanf("%d", &min); //solicita a entrada do piso
		printf("Digite o teto: ");
		scanf("%d", &max);//solicita a entrada to teto
	} while(max<=min); //repete o ciclo enquanto o segundo valor não for maior que o primeiro

	if(arquivo == NULL) { //verifica se o arquivo foi aberto com sucesso com a devida permissão.
		printf("Ocorreu um erro.\n"); //imprime na tela uma mensagem de erro
	} else { //caso contrario executa o que foi pedido
		for(i=min;i<=max;i++) { //estrutura de repetição para percorrer todos os valores do intervalo
			fprintf(arquivo, "%d\n", i);//imprime no arquivo o valor da iteração.
		}
	}

	fclose(arquivo); //fecha o arquivo
	return 0; //retorna 0 para o sistema operacional
}