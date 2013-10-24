/*
Trabalho de fim de semestre - 2º Engenharia da Computação - UNITAU - Prof. Luis Eduardo
Arquivo: 02.c
Autor: Caíque de Castro S. Silva, Giovanna Alves dos Santos e João Victor Guedes
Objetivo: Refaça o exercício 1 e ao invés de gravar todos os elementos em um único arquivo, grave os valores pares no arquivo
"par.txt" e os ímpares em "impar.txt".
*/

#include <stdio.h> //para printf(), scanf(), fopen(), fprintf(), FILE

int main() {
	FILE *par, *impar; //ponteiros para arquivos
	int i, min, max; //variaveis de controle

	//abre os arquivos com permissão de escrita (w)
	par = fopen("par.txt", "w");
	impar = fopen("impar.txt", "w");
	
	do { //solicita a entrada do piso e do teto
		printf("Digite o piso: ");
		scanf("%d", &min); //solicita a entrada do piso
		printf("Digite o teto: ");
		scanf("%d", &max);//solicita a entrada to teto
	} while(max<=min); //repete o ciclo enquanto o segundo valor não for maior que o primeiro

	if(par == NULL || impar == NULL) { //verifica se o arquivo foi aberto com sucesso com a devida permissão.
		printf("Ocorreu um erro.\n"); //imprime na tela uma mensagem de erro
	} else { //caso contrario executa o que foi pedido
		for(i=min;i<=max;i++) { //estrutura de repetição para percorrer todos os valores do intervalo
			if(i%2 == 0) { //se o valor for par
				fprintf(par, "%d\n", i); //imprime em par.txt
			} else { //se não,
				fprintf(impar, "%d\n", i); //imprime em impar.txt
			}
		}
	}

	//fecha os arquivos
	fclose(par);
	fclose(impar);
	return 0; //retorna 0 para o sistema operacional
}