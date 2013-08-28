#include <iostream>
using namespace std;

int main()
{
	int hp;

	cout << "\n\nBem vindo ao GameOver 1.0";
	cout << "\nDigite o valor da HP do jogagor : ";
	cin >> hp;
	cin.get();

	if (hp <=0)
	{
	cout << "\n\n --- Game Over --- ";
	}
	else
	{
	cout << "\n\nVocê conseguiu sobreviver!";
	}

	cin.get();

	return 0;

}
