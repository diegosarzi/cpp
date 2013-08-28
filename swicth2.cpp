#include <iostream>
using namespace std;

int main()
{
	int valor;
	cout << "\nEscolha um valor de 0 a 10 : ";
	cin >> valor;
	cin.get();
	cout << endl;

	switch (valor)
	{
	case 1:
	case 2:
	case 3:
	cout << "Seu número foi entre 0 e 3" << endl;
	break;

	case 4:
	case 5:
	case 6:
	cout << "Seu número foi entre 4 e 6" << endl;
	break;

	case 7:
	case 8:
	case 9:
	cout << "Seu número foi entre 7 e 9" << endl;
	break;

	case 10:
	cout << "Seu número foi 10!" << endl;
	break;

	default:
	cout << "Número Inválido!" << endl;
}

}
