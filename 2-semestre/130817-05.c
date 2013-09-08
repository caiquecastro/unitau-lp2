/*
Trabalho de fim de semestre - 2º Engenharia da Computação - UNITAU - Prof. Luis Eduardo
Arquivo: 130810-05.c
Autor: Caíque de Castro S. Silva, Giovanna Alves dos Santos e João Victor Guedes
Objetivo: Realize o cálculo de cada elemento da série de Fibonacci, variando o seu tamanho entre 1000,
10000, 100000, 1000000, 10000000. Deverão ser testados três cenários diferentes. Deverá ser medido o
mesmo em forma serial e utilizando recursividade. Para cada um desses métodos desenvolvidos, o programa
deverá ter duas saídas diferentes. Na primeira, a saída deverá ser o monitor. Já a segunda, deverá
armazenar o conteúdo em um arquivo texto. Deverá ser medido o tempo de execução das rotinas de Fibonacci
e comparados os respectivos resultados.
*/

#include <stdio.h>
#include <time.h>

double fibonacci_serial(int n);

double fibonacci_recursivo(int n);

int main() {
	int numero, i;
	double tempo_inicio, tempo_fim, tempo_total, aux;
	FILE *fibonacciSerial, *fibonacciRecursivo;

	fibonacciSerial    = fopen("fibonacciSerial.txt", "w");
	fibonacciRecursivo = fopen("fibonacciRecursivo.txt", "w");

	if(fibonacciRecursivo == NULL) {
		printf("Erro no arquivo fibonacciRecursivo.txt.\n");
	}
	if(fibonacciSerial == NULL) {
		printf("Erro no arquivo fibonacciSerial.txt.\n");	
	}

	printf("Digite o número de elementos de Fibonacci:\n");
	scanf("%d", &numero);

	printf("\nCalculando via serial:\n");
	tempo_inicio = clock();
	for(i=0;i<numero;i++) {
		aux = fibonacci_serial(i);
	}
	printf("Calculou!\n");
	tempo_fim = clock();
    tempo_total = ((double) (tempo_fim - tempo_inicio) ) / CLOCKS_PER_SEC;    
    printf("Tempo para calcular e armazenar em variável: %.10lf segundos\n", tempo_total);

	printf("\nImprimindo na tela via serial:\n");
	tempo_inicio = clock();
	for(i=0;i<numero;i++) {
		printf("%.0lf ", fibonacci_serial(i));
	}
	printf("\n");
	tempo_fim = clock();
    tempo_total = ((double) (tempo_fim - tempo_inicio) ) / CLOCKS_PER_SEC;    
    printf("Tempo de execucao para impressão na tela: %.10lf segundos\n", tempo_total);

    printf("\nImprimindo em arquivo via serial:\n");
	tempo_inicio = clock();
	for(i=0;i<numero;i++) {
		fprintf(fibonacciSerial, "%.0lf ", fibonacci_serial(i));
	}
	printf("Transferido dados para o arquivo.\n");
	tempo_fim = clock();
    tempo_total = ((double) (tempo_fim - tempo_inicio) ) / CLOCKS_PER_SEC;    
    printf("Tempo de execucao para impressão em arquivo: %.10lf segundos\n", tempo_total);
  
    printf("\nCalculando via recursivo:\n");
	tempo_inicio = clock();
	for(i=0;i<numero;i++) {
		aux = fibonacci_recursivo(i);
	}
	tempo_fim = clock();
	printf("Calculou!\n");
    tempo_total = ((double) (tempo_fim - tempo_inicio) ) / CLOCKS_PER_SEC;    
    printf("Tempo para calcular e armazenar em variável: %.10lf segundos\n", tempo_total); 

	printf("\nImprimindo na tela via recursivo:\n");
	tempo_inicio = clock();
	for(i=0;i<numero;i++) {
		printf("%.0lf ", fibonacci_recursivo(i));
	}
	printf("\n");
	tempo_fim = clock();
    tempo_total = ((double) (tempo_fim - tempo_inicio) ) / CLOCKS_PER_SEC;    
    printf("Tempo de execucao para impressão na tela: %.10lf segundos\n", tempo_total);

	printf("\nImprimindo em arquivo via recursivo:\n");
	tempo_inicio = clock();
	for(i=0;i<numero;i++) {
		fprintf(fibonacciRecursivo, "%.0lf ", fibonacci_recursivo(i));
	}
	printf("Transferido dados para o arquivo.\n");
	tempo_fim = clock();
    tempo_total = ((double) (tempo_fim - tempo_inicio) ) / CLOCKS_PER_SEC;    
    printf("Tempo de execucao para impressão em arquivo: %.10lf segundos\n", tempo_total); 
	printf("\n\n");

	fclose(fibonacciSerial);
	fclose(fibonacciRecursivo);
	return 0;
}

double fibonacci_serial(int n) {
	int i;
	double a = 0, b = 1, seq;
	if(n<=0) return 0;
	for(i = 0; i<n; i++) {
		seq = a+b;
		b = a;
		a = seq;
	}
	return seq;
}

double fibonacci_recursivo(int n) {
	if(n <= 0) { //o 0-ésimo elemento de fibonacci é 0.
		return 0.0;
	} else if(n == 1) {
		return 1.0;
	} else {
		return fibonacci_recursivo(n-1)+fibonacci_recursivo(n-2);
	}
}