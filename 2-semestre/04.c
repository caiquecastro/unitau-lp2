/*
Trabalho de fim de semestre - 2º Engenharia da Computação - UNITAU - Prof. Luis Eduardo
Arquivo: 04.c
Autor: Caíque de Castro S. Silva, Giovanna Alves dos Santos e João Victor Guedes
Objetivo: Refaça o exercício 3 e faça a somatória dos pares e dos ímpares. A dos pares deverá ser gravada em
"par.txt" e a dos ímpares em "impar.txt". Se o arquivo de saída existir, primeiramente ele deverá ser removido.
*/

#include <stdio.h> //para printf(), scanf(), fopen(), fprintf(), FILE

int main() {
	FILE *entrada, *par, *impar; //ponteiros para arquivos
	int somaPar = 0, somaImpar = 0, numero; //declaração de outras variáveis

	entrada = fopen("entrada.dat", "r"); //abre o arquivo com permissão de leitura

	if(entrada == NULL) { //verifica se houve erro ao abrir o arquivo
		printf("Ocorreu um erro.\n"); //exibe mensagem de erro
	} else { //se não, executa o que foi pedido
		while(fscanf(entrada, "%d", &numero) != EOF) { // lê o arquivo até achar o fim do arquivo (EOF)
			if(numero%2 == 0) { //se for par,
				somaPar += numero; // agrega à soma de pares
			} else { //se for impar,
				somaImpar += numero; // agrega à soma de impares
			}
		}

		//abre os arquivos par.txt e impar.txt com permissão de escrita (Write)
		par = fopen("par.txt", "w");
		impar = fopen("impar.txt", "w");

		//verifica se foi possível abrir os 2 arquivos
		if(par == NULL || impar == NULL) {
			printf("Erro ao gravar saída\n"); //exibe mensagem se houve erro ao abrir
		} else {  // executa se não houver erro
			fprintf(par, "Soma dos pares \n"); //imprime em arquivo
			fprintf(par, "%d", somaPar); //imprime em arquivo par.txt

			fprintf(impar, "Soma dos impares \n"); //imprime em arquivo
			fprintf(impar, "%d", somaImpar); //imprime em arquivo impar.txt
		}
	}

	//fecha os arquivos
	fclose(entrada);
	fclose(par);
	fclose(impar);
	return 0; //retorna 0 para o sistema operacional
}