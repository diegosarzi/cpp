/***********************************
*****     CALCULADO V1.0      ******
*****   @utor: Diego Sarzi    ******
*****        08/2013          ******
***********************************/

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	// Criação das variaveis
	int menu;
	int a, b;
	int c;
	bool exit = true;

	// Inicio do loop
	while (exit)
	{

	system("clear");
	// Print menu
	cout << "............................." << endl;
	cout << ".      CALCULADORA v1.0     ." << endl;
	cout << ".---------------------------." << endl;
	cout << ".                           ." << endl;
	cout << ".            MENU           ." << endl;
	cout << ".                           ." << endl;
	cout << ".    1 -> +        3 -> *   ." << endl;
	cout << ".    2 -> *        4 -> /   ." << endl;
	cout << ".                           ." << endl;
	cout << ".          5 -> Sair        ." << endl;
	cout << "............................." << endl;
	cout << endl;
	cout << "Digite a sua opção: ";
	cin >> menu;
	cin.get();

	// Sair
	if (menu == 5)
{
	cout << "\n\nBye, bye." << endl;
	return 0;
}

	// Escolhas
	switch (menu)
{
	case 1:
	// Adição
	cout << "Digite o primeiro valor : ";
        cin >> a;
        cin.get();
        cout << "Digite o segundo valor : ";
        cin >> b;
        cin.get();

	c = a + b;

	cout << a << " + " << b << " = " << c << endl;
	cin.get();
	break;

	case 2:
	// Subitração
        cout << "Digite o primeiro valor : ";
        cin >> a;
        cin.get();
        cout << "Digite o segundo valor : ";
        cin >> b;
        cin.get();

	c = a - b;

	cout << a << " - " << b << " = " << c << endl;
	cin.get();
	break;

	case 3:
	// Multiplicação
        cout << "Digite o primeiro valor : ";
        cin >> a;
        cin.get();
        cout << "Digite o segundo valor : ";
        cin >> b;
        cin.get();

	c = a * b;

	cout << a << " * " << b << " = " << c << endl;
	cin.get();
	break;

	case 4:
	// Divisão
        cout << "Digite o primeiro valor : ";
        cin >> a;
        cin.get();
        cout << "Digite o segundo valor : ";
        cin >> b;

        cin.get();

	c = a / b;
	cout << a << " / " << b << " = " << c << endl;
	cin.get();
	break;

	default:
	// Numeros incorretos
	cout << "Numero incorreto! Tente novamente.";
	cin.get();

} // fim do switch

	} // fim do loop

} // fim do main

