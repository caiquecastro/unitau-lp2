#include <stdio.h>

int main() {
	int n, i;
	double a = 0, b = 1, seq;
	printf("Digite a quantidade de elementos da sequencia de Fibonacci!\n");
	scanf("%d", &n);
	for(i = 0; i<n; i++) {
		seq = a+b;
		b = a;
		a = seq;

		printf("%.0lf\n", seq);
	}
	return 0;
}