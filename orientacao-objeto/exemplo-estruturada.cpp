#include <iostream>
#include <cstdlib>

using namespace std;

float perimetro(float, float);
float area(float, float);

int main(int argc, char** argv) {
	float comprimento, largura;

	cout << "Entre com o comprimento: ";
	cin >> comprimento;
	cout << "Entre com a largura: ";
	cin >> largura;
	cout << "Perimetro = " << perimetro(comprimento, largura) << endl;
	cout << "Área      = " << area(comprimento, largura) << endl;
	return (EXIT_SUCCESS);
}

float perimetro (float comprimento, float largura) {
	return (2 * (comprimento+largura));
}

float area (float comprimento, float largura) {
	return (comprimento * largura);
}
