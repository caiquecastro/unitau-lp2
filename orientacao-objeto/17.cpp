/*
Trabalho de fim de semestre - 2º Engenharia da Computação - UNITAU - Prof. Luis Eduardo
Arquivo: 17.cpp
Autor: Caíque de Castro S. Silva, Giovanna Alves dos Santos e João Victor Guedes
Objetivo: Faça uma superclasse chamada Animal. Ela deverá ter as seguintes propriedades
privadas: Nome e nomeCientifico. Todas do tipo String. Ela deverá ter os métodos: emitirSom,
viveMeioDomestico e formaLocomover (Todas públicas). Deverão ser implementados as
seguintes classes de cada animal: Leão, Tigre, Lobo, Cachorro, Gato, Calopsita. Para
exemplificar, segue a superclasse e a específica do animal ornitorrinco:
	=> Nome: Ornitorrinco
	=> nomeCientifico: Ornithorhynchus anatinus
	=> Som: Desconhecido
	=> viveMeioDomestico: Não
	=> formaLocomover: Andar e nadar
*/

#include <iostream> //para std::cin, std::cout
#include <string> //para std::string

using namespace std; //definindo namespace

class Animal { //definindo classe Animal
	//membros privados
	protected:
		string nome;
		string nomeCientifico;
		string som;
		string habitat;
		string locomocao;
	//membros públicos
	public:
		Animal() {
			setNome("");
			setNomeCientifico("");
			setSom("");
			setHabitat("");
			setLocomocao("");
		}
		void setNome(string valor) {
			nome = valor;
		}
		string getNome(void) {
			return nome;
		}
		void setNomeCientifico(string valor) {
			nomeCientifico = valor;
		}
		string getNomeCientifico(void) {
			return nomeCientifico;	
		}
		void setSom(string valor) {
			som = valor;
		}
		string getSom(void) {
			return som;
		}
		void setHabitat(string valor) {
			habitat = valor;
		}
		string getHabitat(void) {
			return habitat;
		}
		void setLocomocao(string valor) {
			locomocao = valor;
		}
		string getLocomacao(void) {
			return locomocao;
		}
		void emitirSom(void) {
			cout << "Som: " << getSom() << endl;
		}
		void viveMeioDomestico(void) {
			string meio = getHabitat();
			cout << "viveMeioDoméstico: ";
			if(meio == "Casa") {
				cout << "Sim";
			} else {
				cout << "Não";
			}
			cout << endl;
		}
		void formaLocomover(void) {
			cout << "formaLocomover: " << getLocomacao() << endl;
		}
		void exibeInfo(void) {
			cout << "Nome: " << getNome() << endl;
			cout << "Nome Cientifico: " << getNomeCientifico() << endl;
			emitirSom();
			viveMeioDomestico();
			formaLocomover();
		}
};
class Leao : public Animal {
	public:
		Leao() {
			setNome("Leao");
			setNomeCientifico("Panthera leo");
			setSom("Rugido");
			setHabitat("Savanas");
			setLocomocao("Andar");
		}
};
class Tigre : public Animal {
	public:
		Tigre() {
			setNome("Tigre");
			setNomeCientifico("Panthera tigris");
			setSom("Rugido");
			setHabitat("Florestas temperadas e frias");
			setLocomocao("Andar");
		}
};
class Lobo : public Animal {
	public:
		Lobo() {
			setNome("Lobo");
			setNomeCientifico("Canis lupus");
			setSom("Uivo");
			setHabitat("Regiões frias");
			setLocomocao("Andar");
		}
};
class Cachorro : public Animal {
	public:
		Cachorro() {
			setNome("Cachorro");
			setNomeCientifico("Canis lupus familiaris");
			setSom("Latido");
			setHabitat("Casa");
			setLocomocao("Andar");
		}
};
class Gato : public Animal {
	public:
		Gato() {
			setNome("Cachorro");
			setNomeCientifico("Felis silvestris catus");
			setSom("Miado");
			setHabitat("Casa");
			setLocomocao("Andar");
		}
};
class Calopsita : public Animal {
	public:
		Calopsita() {
			setNome("Calopsita");
			setNomeCientifico("Nymphicus hollandicus");
			setSom("Piado");
			setHabitat("Casa");
			setLocomocao("Andar e voar");
		}
};
int main() {
	Leao leao;
	Tigre tigre;
	Lobo lobo;
	Cachorro cachorro;
	Gato gato;
	Calopsita calopsita;
	leao.exibeInfo();
	tigre.exibeInfo();
	lobo.exibeInfo();
	cachorro.exibeInfo();
	gato.exibeInfo();
	calopsita.exibeInfo();
	return 0;
}