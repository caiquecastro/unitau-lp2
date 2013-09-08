#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
	float n1, n2;
	cout << "Digite o primeiro valor:" << endl;
	cin >> n1;
	cout << "Digite o segundo valor:" << endl;
	cin >> n2;
	//verifica qual valor numérico é o maior
	if(n1 > n2) {
		cout << "O maior valor é " << n1 << endl;
	} else {
		cout << "O maior valor é " << n2 << endl;
	}
	return EXIT_SUCCESS;
}