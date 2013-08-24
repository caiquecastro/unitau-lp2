#include <stdio.h> //para printf() e scanf()

float fibonacci(int n); //declara o protótipo da função de fibonacci recursiva

int main() {
	//declaração de variáveis
	int fibo,i;
	//lê o valor do número de elementos da sequencia de Fibonacci
	//realiza o loop até que o usuário entre um valor válido (fibo >= 0)
	while(1) {
		//lê o valor digitado pelo o usuário para a sequencia de Fibonacci
		printf("Digite o número de elementos para calcular a sequência de Fibonacci: ");
		scanf("%d",&fibo);
		if(fibo>=0) break; //limite inferior para previnir erros e superior para previnir aquecimento da CPU
		printf("Valor inválido. Digite um valor maior que zero. "); //apresenta o erro se o loop não foi quebrado na linha anterior
	}
	//realiza a impressão até o n-ésimo elemento da sequência de Fibonacci
	printf("%d elementos da sequência: \n", fibo+1);//f(0) = 0, f(1) = 1, f(2) = 1, f(3) = 2, ...
	for(i=0;i<=fibo;i++) {
		printf("%d - %.0f\n", i, fibonacci(i));
	}
	return 0;
}

float fibonacci(int n) {
	if(n == 0) { //o 0-ésimo elemento de fibonacci é 0.
		return 0;
	} else if(n == 1) {
		return 1; //o primeiro elemento de fibonacci é 1.
	} else {
		return (fibonacci(n-1)+fibonacci(n-2)); //a partir de então , o n-ésimo elemento é F(n-1)+F(n-2)
	}
}