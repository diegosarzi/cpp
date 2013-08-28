#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cout << "\nCalculadora para somar inteiros!" << endl;
	cout << "Insira o primeiro número: ";
	cin >> a;
	cin.get();

	cout << "Insira o segundo número: ";
	cin >> b;
	cin.get();

	c = a + b;
	cout << "\nO resultado é: " << c << endl;
	cin.get();

	return 0;
}
