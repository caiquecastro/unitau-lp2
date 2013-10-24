/*
Trabalho de fim de semestre - 2º Engenharia da Computação - UNITAU - Prof. Luis Eduardo
Arquivo: 05.c
Autor: Caíque de Castro S. Silva, Giovanna Alves dos Santos e João Victor Guedes
Objetivo: Realize o cálculo de cada elemento da série de Fibonacci, variando o seu tamanho entre 1000,
10000, 100000, 1000000, 10000000. Deverão ser testados três cenários diferentes. Deverá ser medido o
mesmo em forma serial e utilizando recursividade. Para cada um desses métodos desenvolvidos, o programa
deverá ter duas saídas diferentes. Na primeira, a saída deverá ser o monitor. Já a segunda, deverá
armazenar o conteúdo em um arquivo texto. Deverá ser medido o tempo de execução das rotinas de Fibonacci
e comparados os respectivos resultados.
*/

#include <stdio.h> //para printf(), scanf(), fopen(), fprintf(), FILE
#include <time.h> //para clock()

double fibonacci_serial(int n); //protótipo para cálculo de fibonacci serial

double fibonacci_recursivo(int n); //protótipo para cálculo de fibonacci recursivo

int main() {[
	//declaração de variáveis
	int numero, i;
	double tempo_inicio, tempo_fim, tempo_total, aux;
	FILE *fibonacciSerial, *fibonacciRecursivo;

	//abre os arquivos com permissão de escrita
	fibonacciSerial    = fopen("fibonacciSerial.txt", "w");
	fibonacciRecursivo = fopen("fibonacciRecursivo.txt", "w");

	//verifica se há erro ao abrir os arquivos
	if(fibonacciRecursivo == NULL) {
		printf("Erro no arquivo fibonacciRecursivo.txt.\n");
	}
	if(fibonacciSerial == NULL) {
		printf("Erro no arquivo fibonacciSerial.txt.\n");	
	}

	//solicita a entrada do número de elementos da sequência de Fibonacci
	printf("Digite o número de elementos de Fibonacci:\n");
	scanf("%d", &numero);

	//imprime em tela via serial
	printf("\nImprimindo na tela via serial:\n");
	tempo_inicio = clock();//inicia o calculo do tempo
	for(i=0;i<numero;i++) {
		printf("%.0lf ", fibonacci_serial(i));//imprime a sequencia
	}
	printf("\n");
	tempo_fim = clock();//termina o calculo do tempo
    tempo_total = ((double) (tempo_fim - tempo_inicio) ) / CLOCKS_PER_SEC; //calcula o tempo
    printf("Tempo de execucao para impressão na tela: %.10lf segundos\n", tempo_total); //imprime o tempo que foi gasto


   	//imprime em arquivo via serial
    printf("\nImprimindo em arquivo via serial:\n");
	tempo_inicio = clock();//inicia o calculo do tempo
	for(i=0;i<numero;i++) {
		fprintf(fibonacciSerial, "%.0lf ", fibonacci_serial(i));//imprime a sequencia
	}
	printf("Transferido dados para o arquivo.\n");
	tempo_fim = clock();//termina o calculo do tempo
    tempo_total = ((double) (tempo_fim - tempo_inicio) ) / CLOCKS_PER_SEC; //calcula o tempo
    printf("Tempo de execucao para impressão em arquivo: %.10lf segundos\n", tempo_total); //imprime o tempo que foi gasto

    //imprime em tela via recursivo
	printf("\nImprimindo na tela via recursivo:\n");
	tempo_inicio = clock();//inicia o calculo do tempo
	for(i=0;i<numero;i++) {
		printf("%.0lf ", fibonacci_recursivo(i)); //imprime a sequencia
	}
	printf("\n");
	tempo_fim = clock();//termina o calculo do tempo
    tempo_total = ((double) (tempo_fim - tempo_inicio) ) / CLOCKS_PER_SEC; //calcula o tempo
    printf("Tempo de execucao para impressão na tela: %.10lf segundos\n", tempo_total); //imprime o tempo que foi gasto

    //imprime em arquivo via recursivo
	printf("\nImprimindo em arquivo via recursivo:\n");
	tempo_inicio = clock();//inicia o calculo do tempo
	for(i=0;i<numero;i++) {
		fprintf(fibonacciRecursivo, "%.0lf ", fibonacci_recursivo(i)); //imprime a sequencia
	}
	printf("Transferido dados para o arquivo.\n");
	tempo_fim = clock(); //termina o calculo do tempo
    tempo_total = ((double) (tempo_fim - tempo_inicio) ) / CLOCKS_PER_SEC; //calcula o tempo
    printf("Tempo de execucao para impressão em arquivo: %.10lf segundos\n", tempo_total);  //imprime o tempo que foi gasto
	printf("\n\n");

	//fecha os arquivos
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