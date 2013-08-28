#include <iostream>
using namespace std;

int main()
{
	int a, b;
	bool varteste;

	cout << "\nPrograma de comparação!" << endl;
	cout << "Digite o primeiro numero de enter depois o segundo numero: " << endl;
	cin >> a >> b;
	cin.get();

	varteste = a == b;
	cout << "Igualdade entre " << a << " e " << b << " é : " << varteste;

	varteste = a > b;
	cout << "\nSuperioridade entre " << a << " e " << b << " é : " << varteste;

	varteste = a < b;
	cout << "\nInferioridade entre " << a << " e " << b << " é : " << varteste;

	cout << "\n\nCodigo: \n\n0 -> Falso\n1 -> Verdadeiro" << endl;
	cin.get();

	return 0;
}
