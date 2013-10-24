#include <iostream>
#include <string>

using namespace std;

class Empregado {
	private:
		string nome;
		string sobrenome;
		double salario;
	public:
		Empregado() {
			nome = "";
			sobrenome = "";
			salario = 0.0;
		}
		void setNome(string valor) {
			nome = valor;
		}
		string getNome(void) {
			return nome;
		}
		void setSobrenome(string valor) {
			sobrenome = valor;
		}
		string getSobrenome(void) {
			return sobrenome;
		}
		void setSalario(double valor) {
			if(valor < 0) {
				setSalario(0.0);
			} else {
				salario = valor;
			}
		}
		double getSalario(void) {
			return salario;
		}
};

int main() {
	Empregado func1, func2;
	string temp1;
	double temp2;
	cout << "Digite o nome do primeiro Empregado: ";
	cin >> temp1;
	func1.setNome(temp1);
	cout << "Digite o sobrenome do primeiro Empregado: ";
	cin >> temp1;
	func1.setSobrenome(temp1);
	cout << "Digite o salário do primeiro Empregado: ";
	cin >> temp2;
	func1.setSalario(temp2);
	cout << "Digite o nome do segundo Empregado: ";
	cin >> temp1;
	func2.setNome(temp1);
	cout << "Digite o sobrenome do segundo Empregado: ";
	cin >> temp1;
	func2.setSobrenome(temp1);
	cout << "Digite o salário do segundo Empregado: ";
	cin >> temp2;
	func2.setSalario(temp2);
	cout << "Informações do primeiro Empregado:" << endl;
	cout << "Nome: " << func1.getNome() << endl;
	cout << "Sobrenome: " << func1.getSobrenome() << endl;
	cout << "Salário: " << func1.getSobrenome() << endl << endl;
	cout << "Informações do segundo Empregado:" << endl;
	cout << "Nome: " << func2.getNome() << endl;
	cout << "Sobrenome: " << func2.getSobrenome() << endl;
	cout << "Salário: " << func2.getSobrenome() << endl;
	return 0;
}