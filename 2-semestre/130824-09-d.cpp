#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
	//declaração de variáveis
	int n1, n2, n3;
	//lê o valor de n1
	cout << "Digite o primeiro número: ";
	cin >> n1;
	//lê o valor de n2
	cout << "Digite o segundo número: ";
	cin >> n2;
	//lê o valor de n3
	cout << "Digite o terceiro número: ";
	cin >> n3;
	//apresentando os resultados
	printf("Resultados:\n");
	if(n1 >= 0) { //verifica se n1 é positivo
		cout << n1*2 << endl;
	} else { //caso contrário
		cout << n1*3 << endl;
	}
	if(n2 > 10 && n2 < 100) { //verifica se n2 está no intervalo permitido
		cout << "Número está 10 e 100 - intervalo permitido." << endl;
	}
	if(n3 < n2) { //se o terceiro for menor que o segundo
		cout << abs(n3-n2) << endl;
	} else { //caso contrário
		cout << n3+1 << endl;
	}
	return EXIT_SUCCESS;
}