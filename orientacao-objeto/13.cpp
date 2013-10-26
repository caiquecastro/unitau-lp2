/*
Trabalho de fim de semestre - 2º Engenharia da Computação - UNITAU - Prof. Luis Eduardo
Arquivo: 13.cpp
Autor: Caíque de Castro S. Silva, Giovanna Alves dos Santos e João Victor Guedes
Objetivo: Faça uma classe chamada calculadora que receba somente dois valores positivos
ou iguais a zero. No construtor da mesma, deverão ser inicializadas as suas duas
propriedades com valor zero. As mesmas propriedades não deverão ser públicas e para se
alterar os mesmos, deverá existir um método público. Outro método público deverá ser o
que efetua e apresenta a operação matemática. De acordo com um código informado (1 =
soma, 2 = subtração, 3 = multiplicação e 4 = divisão) a mesma deverá ser efetuada. No
destrutor da classe, deverá ser apresentada uma saudação ao usuário.
*/

#include <iostream> //para cin, cout
#include <cstdlib> //para EXIT_SUCCESS

using namespace std; //declaração de namespace a ser utilizado

class Calculadora { //declearação da classe
	//metodos e atributos privados
	private:
		//atributos: variáveis de classe/objeto
		double numero1;
		double numero2;
		//método de soma dos 2 atributos
		void soma(void) {
			cout << "Soma: " << getValor1()+getValor2() << endl;
		}
		//método de subtração dos 2 atributos
		void subtracao(void) {
			cout << "Subtração: " << getValor1()-getValor2() << endl;
		}
		//método de multiplicação dos 2 atributos
		void multiplicacao(void) {
			cout << "Multiplicacação: " << getValor1()*getValor2() << endl;
		}
		//método de divisão dos 2 atributos
		void divisao(void) {
			cout << "Divisão: " << getValor1()/getValor2();
		}
	//metodos e atributos publicos
	public:
		//construtor
		Calculadora() {
			cout << "Bem vindo à Calculadora" << endl;
			//atribui os valores iniciais
			setNumero1(0);
			setNumero2(0);
		}
		//método para definir o numero1
		void setNumero1(double n) {
			if(n<0) { //se o número for menor que zero
				setNumero1(0); //chama recursivamente a função, atribuindo o valor de numero1 a zero
			} else {
				numero1 = n; //atribui o parametro do método para o atributo da classe
			}
		}
		//método para definir o numero2
		void setNumero2(double n) {
			if(n<0) { //se o número for menor que zero
				setNumero2(0); //chama recursivamente a função, atribuindo o valor de numero2 a zero
			} else {
				numero2 = n; //atribui o parametro do método para o atributo da classe
			}
		}
		//método para obter o valor de numero1
		double getValor1(void) {
			return numero1;
		}
		//método para obter o valor de numero2
		double getValor2(void) {
			return numero2;
		}
		//método para operar os valores do objeto
		void operacao(int op) {
			switch(op) {
				case 1: //se o código da operação for 1, realiza a soma
					soma();
					break;
				case 2: //se o código da operação for 2, realiza a subtração
					subtracao();
					break;
				case 3: //se o código da operação for 3, realiza a multiplicação
					multiplicacao();
					break;
				case 4: //se o código da operação for 4, realiza a divisão
					divisao();
					break;
				default: //exibe mensagem se for informado uma operação invalida
					cout << "Operação inválida" << endl;
			}
		}
		//destrutor da classe
		~Calculadora() {
			cout << "Saindo.." << endl << "Muito obrigado por utilizar minha calculadora." << endl;//mensagem de saudação
		}
};

int main() {
	//declaração de variáveis
	double n1, n2;
	int operacao;
	//instancia a classe calculadora para o objeto calc
	Calculadora calc;

	//loop infito
	while(1) {
		//solicita a entrada do código da operação
		cout << "Digite a operação: " << endl;
		cout << "1 - SOMA" << endl;
		cout << "2 - SUBTRACAO" << endl;
		cout << "3 - MULTIPLICACAO" << endl;
		cout << "4 - DIVISAO" << endl;
		cout << "0 - SAIR" << endl;
		cin >> operacao;
		//se for solicitada a saida, o programa é finalizado
		if(operacao==0) break;
		//solicita a entrada do primeiro valor
		cout << "Digite o primeiro valor: ";
		cin >> n1;
		//solicita a entrada do segundo valor
		cout << "Digite o segundo valor: ";
		cin >> n2;
		//atribui o primeiro valor para o atributo numero1 do objeto calc
		calc.setNumero1(n1);
		//atribui o segundo valor para o atributo numero2 do objeto calc
		calc.setNumero2(n2);
		//chama o método de operação da instancia calc
		calc.operacao(operacao);
		cout << endl << endl;
	}
	return EXIT_SUCCESS;
}