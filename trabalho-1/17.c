/*
Trabalho de fim de semestre - 2º Engenharia da Computação - UNITAU - Prof. Luis Eduardo
Arquivo: 17.c
Autor: Caíque de Castro S. Silva, Giovanna Alves dos Santos e João Victor Guedes
Objetivo: Faça uma função recursiva que calcule e retorne o N-ésimo termo da sequência
Fibonacci. Essa seqüência tem uma lei de formação simples: cada elemento, a partir do
terceiro, é obtido somando-se os dois anteriores. Alguns números desta sequência são:
0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89. Essa seqüência tem uma lei de formação simples:
cada elemento, a partir do terceiro, é obtido somando-se os dois anteriores.
Veja: 1+1=2, 2+1=3, 3+2=5 e assim por diante.
*/

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
		if(fibo>=0 && fibo < 50) break; //limite inferior para previnir erros e superior para previnir aquecimento da CPU
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