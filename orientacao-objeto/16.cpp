/*
Trabalho de fim de semestre - 2º Engenharia da Computação - UNITAU - Prof. Luis Eduardo
Arquivo: 16.cpp
Autor: Caíque de Castro S. Silva, Giovanna Alves dos Santos e João Victor Guedes
Objetivo: Faça uma superclasse chamada "Pessoa". Ela deverá ter as seguintes propriedades
privadas: Nome, endereco e telefone. Todas do tipo String. Além disso, deverá ter um método
chamado calculaImpostoRenda (Público e retorna um método do tipo float). Para essa classe,
deverão existir a classe PessoaFisica, com as seguintes propriedades: cpf (String) e idade
(integer) e a classe PessoaJuridica, com as seguintes propriedades: cnpj (String) e
inscricaoEstadual (String). Cada propriedade das classes deverão implementar os métodos set e get.
*/

#include <iostream> //para std::cin, std::cout
#include <string> //para std::string

using namespace std; //define o namespace std

//define classe Pessoa
class Pessoa {
	//atributos privados
	private:
		string nome;
		string endereco;
		string telefone;
	//métodos públicos
	public:
		//construtor
		Pessoa() {
			//define atributos iniciais
			setNome("");
			setEndereco("");
			setTelefone("");
		}
		//método para definir nome
		void setNome(string valor) {
			nome = valor;
		}
		//método para obter nome
		string getNome(void) {
			return nome;
		}
		//método para definir endereço
		void setEndereco(string valor) {
			endereco = valor;
		}
		//método para obter endereço
		string getEndereco(void) {
			return endereco;
		}
		//método para definir telefone
		void setTelefone(string valor) {
			telefone = valor;
		}
		//método para obter telefone
		string getTelefone(void) {
			return telefone;
		}
		//método para calcular imposto de renda
		float calculaImpostoRenda() {

		}
		//destrutor da classe
		~Pessoa() {
			//exibe mensagem de saudação
			//cout << "Saindo de Pessoa" << endl;
		}
};
//classe PessoaFisica herda classe Pessoa
class PessoaFisica : public Pessoa {
	//atributos privados
	private:
		string cpf;
		int idade;
	//métodos públicos
	public:
		//construtor
		PessoaFisica() {
			//define atributos iniciais
			//Pessoa::Pessoa(); equivalente?
			// setNome("");
			// setEndereco("");
			// setTelefone("");
			//atributos classe filha
			setCpf("");
			setIdade(0);
		}
		//metodo para definir cpf
		void setCpf(string valor) {
			cpf = valor;
		}
		//método para obter cpf
		string getCpf(void) {
			return cpf;
		}
		//método para definir idade
		void setIdade(int valor) {
			if(valor<0) {
				setIdade(0);
			} else {
				idade = valor;
			}
		}
		//método para obter idade
		int getIdade(void) {
			return idade;
		}
		//destrutor da classe
		~PessoaFisica() {
			//cout << "Saindo de Pessoa Física" << endl;
		}
};
class PessoaJuridica : public Pessoa {
	//membros privados
	private:
		string cnpj;
		string inscricaoEstadual;
	//membros públicos
	public:
		//construtor da classe
		PessoaJuridica() {
			//Pessoa::Pessoa(); equivalente?
			// setNome("");
			// setEndereco("");
			// setTelefone("");
			//atributos da classe PessoaJuridica
			setCnpj("");
			setInscricaoEstadual("");
		}
		//método para definir cnpj
		void setCnpj(string valor) {
			cnpj = valor;
		}
		//método para obter cnpj
		string getCnpj(void) {
			return cnpj;
		}
		//método para definir inscrição estadual
		void setInscricaoEstadual(string valor) {
			inscricaoEstadual = valor;
		}
		//método para obter
		string getInscricaoEstadual(void) {
			return inscricaoEstadual;
		}
		//destrutor da classe
		~PessoaJuridica() {
			//cout << "Saindo de PessoaJuridica" << endl;
		}
};

int main() {
	//declaração de variaveis de objeto
	Pessoa pessoa;
	PessoaFisica pessoaFisica;
	PessoaJuridica pessoaJuridica;

	//definindo dados ao objeto pessoa do tipo Pessoa
	pessoa.setNome("José");
	pessoa.setEndereco("Rua X");
	pessoa.setTelefone("3678-5432");
	//exibindo os dados do objeto pessoa
	cout << "Dados da Pessoa:" << endl;
	cout << "Nome: " << pessoa.getNome() << endl;
	cout << "Endereço: " << pessoa.getEndereco() << endl;
	cout << "Telefone: " << pessoa.getTelefone() << endl << endl;

	//definindo atributos ao objeto pessoaFisica do tipo PessoaFisica
	pessoaFisica.setNome("Pessoa Fisica X");
	pessoaFisica.setEndereco("Endereço Y");
	pessoaFisica.setTelefone("3890-4321");
	pessoaFisica.setCpf("123.456.789-00");
	pessoaFisica.setIdade(20);
	//exibindo os dados do objeto pessoaFisica
	cout << "Dados da Pessoa Física: " << endl;
	cout << "Nome: " << pessoaFisica.getNome() << endl;
	cout << "Endereço: " << pessoaFisica.getEndereco() << endl;
	cout << "Telefone: " << pessoaFisica.getTelefone() << endl;
	cout << "CPF: " << pessoaFisica.getCpf() << endl;
	cout << "Idade: " << pessoaFisica.getIdade() << endl << endl;

	//definindo atributos ao objeto pessoaJuridica do tipo PessoaJuridica
	pessoaJuridica.setNome("Empresa Z");
	pessoaJuridica.setEndereco("Avenida A");
	pessoaJuridica.setTelefone("1234-5678");
	pessoaJuridica.setCnpj("1234567890");
	pessoaJuridica.setInscricaoEstadual("12345678909876");
	//exibindo os dados do objeto pessoaJuridica
	cout << "Dados da Pessoa Juridica: " << endl;
	cout << "Nome: " << pessoaJuridica.getNome() << endl;
	cout << "Endereço: " << pessoaJuridica.getEndereco() << endl;
	cout << "Telefone: " << pessoaJuridica.getTelefone() << endl;
	cout << "Cnpj: " << pessoaJuridica.getCnpj() << endl;
	cout << "Inscrição Estadual: " << pessoaJuridica.getInscricaoEstadual() << endl;
	return 0;
}