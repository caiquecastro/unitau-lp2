/*
4) Refaça o exercício 3 e faça a somatória dos pares e dos ímpares. A dos pares deverá ser gravada em "par.txt" e a dos
ímpares em "impar.txt". Se o arquivo de saída existir, primeiramente ele deverá ser removido.
*/

#include <stdio.h>

int existe_arquivo(const char * filename) {
	FILE *file = fopen(filename, "r");
    if (file == NULL) {
        fclose(file);
        return 1;
    }
    return 0;
}

int main() {
	FILE *entrada, *par, *impar;
	int somaPar = 0, somaImpar = 0, numero;

	entrada = fopen("entrada.dat", "r");

	if(entrada == NULL) {
		printf("Ocorreu um erro.\n");
	} else {

		while(fscanf(entrada, "%d", &numero) != EOF) {
			if(numero%2 == 0) {
				somaPar += numero;
			} else {
				somaImpar += numero;
			}
		}

		if(existe_arquivo("par.txt")) {
			remove("par.txt");
		}

		if(existe_arquivo("impar.txt")) {
			remove("impar.txt");
		}

		par = fopen("par.txt", "w");
		impar = fopen("impar.txt", "w");

		if(par == NULL || impar == NULL) {
			printf("Erro ao gravar saída\n");
		} else {
			printf("Soma dos pares: ");
			printf("%d\n", somaPar);
			fprintf(par, "Soma dos pares \n");
			fprintf(par, "%d", somaPar);

			printf("Soma dos impares: ");
			printf("%d\n", somaImpar);
			fprintf(impar, "Soma dos impares \n");
			fprintf(impar, "%d", somaImpar);
		}
	}

	fclose(entrada);
	fclose(par);
	fclose(impar);
	return 0;
}