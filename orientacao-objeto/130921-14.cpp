#include <iostream>
#include <cstdlib>
#include <string>
#include <cstring>

using namespace std;

class Fatura {
	private:
		int idProduto;
		string descricaoProduto;
		int quantidadeProduto;
		float precoProduto;
	public:
		Fatura() {
			cout << "Bem vindo ao Faturas v1.0.0" << endl;
			setID(0);
			setDescricao("");
			setQuantidade(0);
			setPreco(0.0);
		}
		void setID(int n) {
			if(n<0) {
				cout << "ERRO: ID não pode ser configurado como negativo" << endl;
				setID(0);
			} else {
				idProduto = n;
			}
		}
		int getID(void) {
			return idProduto;
		}
		void setDescricao(string desc) {
			descricaoProduto = desc;
		}
		string getDescricao(void) {
			return descricaoProduto;
		}
		void setQuantidade(int n) {
			if(n<0) {
				cout << "ERRO: Quantidade não pode ser configurada como negativa." << endl;
				setQuantidade(0);
			} else {
				quantidadeProduto = n;
			}
		}
		int getQuantidade(void) {
			return quantidadeProduto;
		}
		void setPreco(float n) {
			if(n<0) {
				cout << "ERRO: Preço não pode ser configurado como negativo." << endl;
				setPreco(0.0);
			} else {
				precoProduto = n;
			}
		}
		float getPreco(void) {
			return precoProduto;
		}
		float getQuantidadeFaturas(void) {
			return getQuantidade()*getPreco();
		}
		~Fatura() {
			cout << "Saindo do Faturas v1.0.0" << endl;
		}
};

int main() {
	fatura loja;
	int aux1;
	float aux2;
	string aux3;
	cout << "Digite o ID do Produto: ";
	cin >> aux1;
	loja.setID(aux1);
	cout << "Digite a descrição do produto: ";
	cin.ignore();
	getline(cin, aux3);
	loja.setDescricao(aux3);
	cout << "Digite o preço do produto: ";
	cin >> aux2;
	loja.setPreco(aux2);
	cout << "Digite a quantidade de produto: ";
	cin >> aux1;
	loja.setQuantidade(aux1);
	cout << "ID -> " << loja.getID() << endl;
	cout << "Descrição -> " << loja.getDescricao() << endl;
	cout << "Preço -> " << loja.getPreco() << endl;
	cout << "Quantidade -> " << loja.getQuantidade() << endl;
	cout << "Total -> " << loja.getQuantidadeFaturas() << endl;
	return EXIT_SUCCESS;
}