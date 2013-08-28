#include <iostream>
using namespace std;

int main()
{
	int numero;
	cout << "\n***** MENU *****" << endl;
	cout << "1 -> Novo Jogo" << endl;
	cout << "2 -> Carregar Jogo" << endl;
	cout << "3 -> Opcoes" << endl;
	cout << "4 -> Sair" << endl << endl;
	cin >> numero;
	cin.get();

	switch (numero)
	{
	case 1:
	cout << "\nEntrando Novo Jogo" << endl;
	break;
	case 2:
	cout << "\nCarregando Jogo Salvo" << endl;
	break;
	case 3:
	cout << "\nItem Opções Selecionado" << endl;
	break;
	case 4:
	cout << "\nBye Bye" << endl;
	break;
	default:
	cout << "\n\nNumero Inválido" << endl;
	}

	cin.get();
	return 0;
}
