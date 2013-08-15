/*
1) Faça um programa que solicite dois valores numéricos ao usuário. O segundo valor deverá ser maior que o primeiro.
Grave em um arquivo chamado "saida.txt". Todos os números da faixa dos números indicados. Por exemplo, se forem
informados 1 e 100, gravar:
1
2
3
...
100

2) Refaça o exercício 1 e ao invés de gravar todos os elementos em um único arquivo, grave os valores pares no arquivo
"par.txt" e os ímpares em "impar.txt".

3) Faça um programa que leia o arquivo "entrada.dat" e imprima na tema a soma de todos os termos.

4) Refaça o exercício 3 e faça a somatória dos pares e dos ímpares. A dos pares deverá ser gravada em "par.txt" e a dos
ímpares em "impar.txt". Se o arquivo de saída existir, primeiramente ele deverá ser removido.
*/

/*
*/
#include <stdio.h>

int main() {
	FILE *arquivo;
	int i, min, max;

	printf("Antes de abrir\n");
	arquivo = fopen("saida.txt", "w");
	printf("Depois de abrir\n");

	printf("Digite o piso: ");
	scanf("%d", &min);
	do {
		printf("Digite o teto: ");
		scanf("%d", &max);
	} while(max<min);


	if(arquivo == NULL) {
		printf("Ocorreu um erro.\n");
	} else {
		for(i=min;i<=max;i++) {
			fprintf(arquivo, "%d\n", i);
		}
	}

	fclose(arquivo);
	return 0;
} /**/


/*
#include <stdio.h>

int main() {
	FILE *par, *impar;
	int i, min, max;

	par = fopen("par.txt", "w");
	impar = fopen("impar.txt", "w");
	
	printf("Digite o piso: ");
	scanf("%d", &min);
	
	printf("Digite o teto: ");
	scanf("%d", &max);

	if(par == NULL || impar == NULL) {
		printf("Ocorreu um erro.\n");
	} else {
		for(i=min;i<=max;i++) {
			if(i%2 == 0) {
				fprintf(par, "%d\n", i);
			} else {
				fprintf(impar, "%d\n", i);
			}
		}
	}

	fclose(par);
	fclose(impar);
	return 0;
}


#include <stdio.h>

int main() {
	FILE *arquivo;
	double soma = 0, numero;
	char ponteiro;

	arquivo = fopen("entrada.dat", "r");

	if(arquivo == NULL) {
		printf("Ocorreu um erro.\n");
	} else {
		//ponteiro = fscanf(arquivo, "%d", &numero);

		//fscanf(stdin, "%d", &numero)

		while(fscanf(arquivo, "%lf", &numero) != EOF) {
			soma += numero;
		}
		printf("Soma de todos os termos: ");
		printf("%lf\n", soma);
	}

	fclose(arquivo);
	return 0;
}

*/
/*
#include <stdio.h>

int main() {
	FILE *entrada, *par, *impar;
	int somaPar = 0, somaImpar = 0, numero;

	entrada = fopen("entrada.dat", "r");
	par = fopen("par.txt", "w");
	impar = fopen("impar.txt", "w");

	if(entrada == NULL || par == NULL || impar == NULL) {
		printf("Ocorreu um erro.\n");
	} else {

		while(fscanf(entrada, "%d", &numero) != EOF) {
			if(numero%2 == 0) {
				somaPar += numero;
			} else {
				somaImpar += numero;
			}
		}
		
		printf("Soma dos pares: ");
		printf("%d\n", somaPar);

		printf("Soma dos impares: ");
		printf("%d\n", somaImpar);
	}

	fclose(entrada);
	fclose(par);
	fclose(impar);
	return 0;
}
*/