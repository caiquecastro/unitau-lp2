#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
	int idade;
	//le a idade do nadador
	cout << "Digite a idade do nadador (5-150): ";
	cin >> idade;
	//realiza a verificação de idade e enquadra na categoria correta
	if(idade >= 5 && idade <= 7) {
		cout << "Infantil A: 5 a 7 anos." << endl;
	} else if(idade >= 8 && idade <= 10) {
		cout << "Infantil B: 8 a 10 anos." << endl;
		printf("\n");
	} else if(idade >= 11 && idade <= 13) {
		cout << "Juvenil A: 11 a 13 anos." << endl;
	} else if(idade >= 14 && idade <= 17) {
		cout << "Juvenil B: 14 a 17 anos." << endl;
	} else if(idade >= 18 && idade <= 150) {
		cout << "Sênior: maiores de 18 anos." << endl;
	} else { //se for uma idade fora do intervalo ou se for um valor não numérico
		cout << "Idade inválida." << endl;
	}
	return EXIT_SUCCESS;
}