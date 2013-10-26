/*
Trabalho de fim de semestre - 2º Engenharia da Computação - UNITAU - Prof. Luis Eduardo
Arquivo: 14.cpp
Autor: Caíque de Castro S. Silva, Giovanna Alves dos Santos e João Victor Guedes
Objetivo: Crie uma classe chamada fatura que possa ser utilizado por uma loja de
suprimentos de informática para representar uma fatura de um item vendido na loja.
Uma fatura deve incluir as seguintes informações como atributos:
=> o número do item faturado,
=> a descrição do item,
=> a quantidade comprada do item e
=> o preço unitário do item.
Sua classe deve ter um construtor que inicialize os quatro atributos. Se a quantidade
não for positiva, ela  deve ser configurada como 0. Se o preço por item não for positivo
ele deve ser con?gurado como 0.0. Forneça um método set e um método get para cada
variável de instância. Além disso, forneça um método chamado getQuantidadeFaturas que
calcula o valor da fatura (isso é, multiplica a quantidade pelo preço por item) e depois
retorna o valor como um float. Escreva um aplicativo de teste que demonstra as
capacidades da classe fatura.
*/

#include <iostream> //para cin, cout
#include <cstdlib> //para EXIT_SUCCESS
#include <string> //para std::string
#include <cstring> //manipular array de char

using namespace std; //declara o namespace a ser utilizado

class Fatura { //declara a classe Fatura
	//atributos privados
	private:
		int idProduto;
		string descricaoProduto;
		int quantidadeProduto;
		float precoProduto;
	//métodos publicos
	public:
		//construtor da classe
		Fatura() {
			cout << "Bem vindo ao Faturas v1.0.0" << endl;
			//atribui os valores iniciais
			setID(0);
			setDescricao("");
			setQuantidade(0);
			setPreco(0.0);
		}
		//método para atribuir o id ao objeto
		void setID(int n) {
			idProduto = n;
		}
		//método para obter o valor do id do objeto
		int getID(void) {
			return idProduto;
		}
		//método para atribuir a descrição ao objeto
		void setDescricao(string desc) {
			descricaoProduto = desc;
		}
		//metodo para obter a descrição do objeto
		string getDescricao(void) {
			return descricaoProduto;
		}
		//metodo para atribuir quantidade ao objeto
		void setQuantidade(int n) {
			if(n<0) { //verifica se n for menor que zero
				cout << "ERRO: Quantidade não pode ser configurada como negativa." << endl; //exibe mensagem de erro
				setQuantidade(0); //atribui a quantidade para zero como default recursivamente
			} else {
				//atribui o parametro do método como atributo do objeto
				quantidadeProduto = n;
			}
		}
		//método para obter a quantidade do objeto
		int getQuantidade(void) {
			return quantidadeProduto;
		}
		//metodo para atribuir o preço ao objeto
		void setPreco(float n) {
			if(n<0) { //verifica se n for menor que zero
				cout << "ERRO: Preço não pode ser configurado como negativo." << endl; //exibe mensagem de erro
				setPreco(0.0); //atribui o preço para zero como default recursivamente
			} else {
				//atribui o parametro do método como atributo do objeto
				precoProduto = n;
			}
		}
		//método para obter o preço do objeto
		float getPreco(void) {
			return precoProduto;
		}
		//método para obter o preço total da fatura (objeto)
		float getQuantidadeFaturas(void) {
			return getQuantidade()*getPreco();
		}
		//destrutor da classe
		~Fatura() {
			cout << "Saindo do Faturas v1.0.0" << endl;//mensagem de saudação
		}
};

int main() {
	//declaração de variáveis
	Fatura loja; //instancia da classe Fatura
	int aux1;
	float aux2;
	string aux3;
	//solicita a entrada do id do produto
	cout << "Digite o ID do Produto: ";
	cin >> aux1;
	//atribui o id do produto
	loja.setID(aux1);
	//solicita a entrada da declaração do produto
	cout << "Digite a descrição do produto: ";
	cin.ignore();//limpar o buffer de teclado
	getline(cin, aux3);//captura a linha digitada
	loja.setDescricao(aux3);//atribui a descrição do produto
	//solicita o preço do produto
	cout << "Digite o preço do produto: ";
	cin >> aux2;
	//atribui o preço do produto
	loja.setPreco(aux2);
	//solicita a quantidade do objeto
	cout << "Digite a quantidade de produto: ";
	cin >> aux1;
	//atribui a quantidade do produto
	loja.setQuantidade(aux1);
	//exibe as informações do objeto loja
	cout << "ID -> " << loja.getID() << endl;
	cout << "Descrição -> " << loja.getDescricao() << endl;
	cout << "Preço -> " << loja.getPreco() << endl;
	cout << "Quantidade -> " << loja.getQuantidade() << endl;
	cout << "Total -> " << loja.getQuantidadeFaturas() << endl;
	return EXIT_SUCCESS;
}