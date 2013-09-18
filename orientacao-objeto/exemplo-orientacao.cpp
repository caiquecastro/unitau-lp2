#include <iostream>
#include <cstdlib>

using namespace std;

class Retangulo {
private:
	float comprimento, largura;
public:
	void setComprimento(float value) {
		comprimento = value;
	}
	void setLargura(float value) {
		largura = value;
	}
	float getComprimento() {
		return (comprimento);
	}
	float getLargura() {
		return (largura);
	}
	float perimetro() {
		return (2 * (comprimento * largura));
	}
	float area() {
		return (comprimento * largura);
	}
};

int main(int argc, char** argv) {
	float comprimento, largura;
	Retangulo r;

	cout << "Entre com o comprimento: ";
	cin >> comprimento;
	cout << "Entre com a largura: ";
	cin >> largura;
	r.setComprimento(comprimento);
	r.setLargura(largura);
	cout << "Perimentro = " << r.perimetro() << endl;
	cout << "Área       = " << r.area() << endl;
	return (EXIT_SUCCESS);
}
