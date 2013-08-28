#include <iostream>
using namespace std;

int main()
{
	int escolha; //variavel de input

	// Intrudução e Menu output
	cout << "\nSeja bem vindo!!! Escolha a opção desejada: ";
	cout << "\n\n --- MENU --- ";
	cout << "\n1 -> NOVO JOGO" << endl;
	cout << "2 -> CARREGAR JOGO" << endl;
	cout << "3 -> OPÇÕES" << endl;
	cout << "4 -> SAIR" << endl;
	cin >> escolha;
	cin.get();

	// Condições
	if (escolha == 1)
	{
	cout << "\nNovo jogo carregado!";
	}
	else if (escolha == 2)
	{
	cout << "\nCarregamento de jogo selecionado!";
	}
	else if (escolha == 3)
	{
	cout << "\nOpções selecionada!";
	}
	else if (escolha == 4)
	{
	cout << "\nSaindo!";
	}
	else
	{
	cout << "Nenhuma opção valida!";
	}

	cin.get();
	return 0;
}
