#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
	//declaração de variáveis
	int n1, n2;
	//lê o valor de n1
	cout << "Digite o primeiro número: ";
	cin >> n1;
	//lê o valor de n2
	cout << "Digite o segundo número: ";
	cin >> n2;
	if(n1 == n2) { //verifica se os números são iguais
		cout << "Números iguais" << endl;
	} else if(n1 > n2) { //verifica se o primeiro é maior que o segundo
		cout << n1 << " é maior número." << endl;
	} else { //se o segundo for maior que o primeiro
		cout << n2 << " é maior número." << endl;
	}
	return EXIT_SUCCESS;
}