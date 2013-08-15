/*
3) Faça um programa que leia o arquivo "entrada.dat" e imprima na tema a soma de todos os termos.
*/
#include <stdio.h>

int main() {
	FILE *arquivo;
	double soma = 0, numero;
	char ponteiro;

	arquivo = fopen("entrada.dat", "r");

	if(arquivo == NULL) {
		printf("Ocorreu um erro.\n");
	} else {

		while(fscanf(arquivo, "%lf", &numero) != EOF) {
			soma += numero;
		}
		printf("Soma de todos os termos: ");
		printf("%lf\n", soma);
	}

	fclose(arquivo);
	return 0;
}