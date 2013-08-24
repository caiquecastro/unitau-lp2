#include <stdio.h>
#include <time.h>

double fibonacci_serial(int n);

double fibonacci_recursivo(int n);

int main() {
	int numero, i;
	double tempo_inicio, tempo_fim, tempo_total;
	printf("Digite o número de elementos de Fibonacci:\n");
	scanf("%d", &numero);
	numero++;
	printf("\nCalculando serial:\n");
	tempo_inicio = clock();
	for(i=0;i<numero;i++) {
		printf("%.0lf ", fibonacci_serial(i));
	}
	printf("\n");
	tempo_fim = clock();
    tempo_total = ((double) (tempo_fim - tempo_inicio) ) / CLOCKS_PER_SEC;    
    printf("Tempo de execucao: %.5lf segundos\n", tempo_total); 
  
	printf("\n\nCalculando recursivo:\n");
	tempo_inicio = clock();
	for(i=0;i<numero;i++) {
		printf("%.0lf ", fibonacci_recursivo(i));
	}
	printf("\n");
	tempo_fim = clock();
    tempo_total = ((double) (tempo_fim - tempo_inicio) ) / CLOCKS_PER_SEC;    
    printf("Tempo de execucao: %.5lf segundos\n", tempo_total); 
	printf("\n\n");
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