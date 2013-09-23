#include <iostream>
#include <cstdlib>
#include <string>
#include <cstring>

using namespace std;

class fatura {
	private:
		int idProduto;
		string descricaoProduto;
		int quantidadeProduto;
		float precoProduto;
	public:
		fatura() {
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
		~fatura() {
			cout << "Saindo do Faturas v1.0.0" << endl;
		}
};

int main() {
	fatura loja;
	return EXIT_SUCCESS;
}