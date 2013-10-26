/*
Trabalho de fim de semestre - 2º Engenharia da Computação - UNITAU - Prof. Luis Eduardo
Arquivo: 15.cpp
Autor: Caíque de Castro S. Silva, Giovanna Alves dos Santos e João Victor Guedes
Objetivo: A fim de representar empregados em uma firma, crie uma classe chamada Empregado
que inclui as três informações a seguir como atributos:
=> um primeiro nome,
=> um sobrenome, e
=> um salário mensal.
Sua classe deve ter um construtor que inicializa os três atributos. Forneça um método set
e get para cada atributo. Se o salário mensal não for positivo, configure-o como 0.0.
Escreva um aplicativo de teste que demonstra as capacidades da classe. Crie duas
instâncias da classe e exiba o salário anual de cada instância. Então dê a cada empregado
um aumento de 10% e exiba novamente o salário anual de cada empregado.
*/

#include <iostream> //para std::cin, std::cout
#include <cstdio> //para fflush
#include <string> //para std::string

using namespace std; //declaração do namespace a ser utilizado

class Empregado { //declaração da classe Empregado
	//atributos privados
	private:
		string nome;
		string sobrenome;
		double salario;
	//métodos públicos
	public:
		//construtor da classe
		Empregado() {
			//atribui valores iniciais
			setNome("");
			setSobrenome("");
			setSalario(0.0);
		}
		//método para atribuir nome ao objeto
		void setNome(string valor) {
			//atribui o parametro ao atributo do objeto
			nome = valor;
		}
		//método para obter o nome do objeto
		string getNome(void) {
			return nome;
		}
		//método para atribuir o sobrenome ao objeto
		void setSobrenome(string valor) {
			sobrenome = valor;
		}
		//método para obter o sobrenome do objeto
		string getSobrenome(void) {
			return sobrenome;
		}
		//método para atribuir o salário ao objeto
		void setSalario(double valor) {
			if(valor < 0) {//verifica se o valor é negativo
				setSalario(0.0);//atribui valor 0.0 como valor padrão
			} else {
				//atribui o parametro ao atributo
				salario = valor;
			}
		}
		//método para obter o salário do objeto
		double getSalario(void) {
			return salario;
		}
};

int main() {
	//declaração de variáveis
	Empregado func1, func2; //instancias da classe Empregado
	string temp1;
	double temp2;
	//solicita o nome do Empregado func1
	cout << "Digite o nome do primeiro Empregado: ";
	cin >> temp1;
	func1.setNome(temp1);//atribui o nome ao func1
	//solicita o sobrenome de func1
	cout << "Digite o sobrenome do primeiro Empregado: ";
	cin >> temp1;
	func1.setSobrenome(temp1); //atribui o sobrenome ao func1
	//solicita o salário de func1
	cout << "Digite o salário do primeiro Empregado: ";
	cin >> temp2;
	func1.setSalario(temp2); //atribui o salario ao func1
	//solicita o nome do Empregado func2
	cout << "Digite o nome do segundo Empregado: ";
	cin >> temp1;
	func2.setNome(temp1); //atribui o nome ao func2
	//solicita o sobrenome de func2
	cout << "Digite o sobrenome do segundo Empregado: ";
	cin >> temp1;
	func2.setSobrenome(temp1); //atribui o sobrenome ao func2
	//solicita o salário de func2
	cout << "Digite o salário do segundo Empregado: ";
	cin >> temp2;
	func2.setSalario(temp2);//atribui o salario ao func2
	//exibe as informações de func1 e func2
	cout << "Informações do primeiro Empregado:" << endl;
	cout << "Nome: " << func1.getNome() << endl;
	cout << "Sobrenome: " << func1.getSobrenome() << endl;
	cout << "Salário: " << func1.getSalario() << endl << endl;
	cout << "Informações do segundo Empregado:" << endl;
	cout << "Nome: " << func2.getNome() << endl;
	cout << "Sobrenome: " << func2.getSobrenome() << endl;
	cout << "Salário: " << func2.getSalario() << endl;
	return 0;
}