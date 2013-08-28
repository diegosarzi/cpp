#include <iostream>
using namespace std;

int main()
{
	int numero = 6;
	int valor;

	cout << "*********************" << endl;
	cout << "    JOGO ADIVINHE    " << endl;
	cout << "*********************" << endl;

	cout << "\n\n Escolha um número e tente adivinhar o qual eu escolhi: ";
	cin >> valor;
	cin.get();

	if (valor == numero)
	{
	cout << "\n\nPARABENS! VOCE ACERTOU!!!";
	}

	else if (valor < numero)
	{
	cout << "\n\nO Numero é maior que esse!";
	}

	else if (valor > numero)
	{
	cout << "\n\nO Numero é menor que esse!";
	}

	cin.get();
	return 0;
}
