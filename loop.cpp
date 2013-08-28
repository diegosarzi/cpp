#include <iostream>
using namespace std;

int main()
{
	int n;
	bool escolha = false;

	while (escolha == false)
	{
	cout << "Bem vindo ao programa de loops" << endl;
	cout << "Escolha :" << "\n1 -> Loop" << "\n2 -> Sair" << endl;
	cin >> n;
	cin.get();
		switch (n)
		{
		case 1:
		break;
		case 2:
		cout << "Bye Bye" << endl;
		escolha = true;
		break;
		}
	}

	return 0;
}
