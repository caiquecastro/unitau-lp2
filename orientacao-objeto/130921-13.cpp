#include <iostream>
#include <cstdlib>

using namespace std;

class calculadora {
	private:
		double numero1;
		double numero2;
		void soma(void) {
			cout << "Soma: " << getValor1()+getValor2() << endl;
		}
		void subtracao(void) {
			cout << "Subtração: " << getValor1()-getValor2() << endl;
		}
		void multiplicacao(void) {
			cout << "Multiplicacação: " << getValor1()*getValor2() << endl;
		}
		void divisao(void) {
			cout << "Divisão: " << getValor1()/getValor2();
		}
	public:
		//construtor
		calculadora() {
			cout << "Bem vindo à Calculadora" << endl;
			setNumero1(0);
			setNumero2(0);
		}
		void setNumero1(double n) {
			if(n<0) {
				setNumero1(0);
			} else {
				numero1 = n;
			}
		}
		void setNumero2(double n) {
			if(n<0) {
				setNumero2(0);
			} else {
				numero2 = n;
			}
		}
		double getValor1(void) {
			return numero1;
		}
		double getValor2(void) {
			return numero2;
		}
		void operacao(int op) {
			switch(op) {
				case 0:
					break;
				case 1:
					soma();
					break;
				case 2:
					subtracao();
					break;
				case 3:
					multiplicacao();
					break;
				case 4:
					divisao();
					break;
				default:
					cout << "Operação inválida" << endl;
			}
		}
		~calculadora() {
			cout << "Saindo.." << endl << "Muito obrigado por utilizar minha calculadora." << endl;
		}
};

int main() {
	double n1, n2;
	int operacao;
	calculadora calc;

	while(1) {
		cout << "Digite a operação: " << endl;
		cout << "1 - SOMA" << endl;
		cout << "2 - SUBTRACAO" << endl;
		cout << "3 - MULTIPLICACAO" << endl;
		cout << "4 - DIVISAO" << endl;
		cout << "0 - SAIR" << endl;
		cin >> operacao;
		if(operacao==0) break;
		cout << "Digite o primeiro valor: ";
		cin >> n1;
		cout << "Digite o segundo valor: ";
		cin >> n2;
		calc.setNumero1(n1);
		calc.setNumero2(n2);
		calc.operacao(operacao);
		cout << endl << endl;
	}
	return EXIT_SUCCESS;
}