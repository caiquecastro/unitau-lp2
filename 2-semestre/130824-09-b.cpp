#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
	//declaração de variáveis
	int numero;
	//lê o valor digitado pelo usuário
	cout << "Digite um numero inteiro: ";
	cin >> numero;
	//verifica se o número é par ou impar
	if(numero%2 == 0) {
		cout << "O número " << numero << " é par. ";
	} else {
		cout << "O número " << numero << " é ímpar. ";
	}
	//verifica se o número é negativo ou positivo.
	if(numero < 0) {
		cout << "O número " << numero << " é negativo." << endl;
	} else {
		cout << "O número " << numero << " é positivo." << endl;
	}
	return EXIT_SUCCESS;
}