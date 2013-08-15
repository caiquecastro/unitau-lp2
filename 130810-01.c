/*
1) Faça um programa que solicite dois valores numéricos ao usuário. O segundo valor deverá ser maior que o primeiro.
Grave em um arquivo chamado "saida.txt". Todos os números da faixa dos números indicados. Por exemplo, se forem
informados 1 e 100, gravar:
1
2
3
...
100
*/

#include <stdio.h>

int main() {
	FILE *arquivo;
	int i, min, max;

	arquivo = fopen("saida.txt", "w");

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
}