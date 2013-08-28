#include <iostream>
using namespace std;

int main()
{
	int min = 0, max = 100; // cria nivel de HP
	bool comparacao; // variavel de comparacao
	int valor; // variavel de input

	// Pergunta numero minimo e maximo
	cout << "\nDigite um número HP : ";
	cin >> valor;
	cin.get();

	// Compara valores usando o && para somar 2 valores
	comparacao = valor >= min && valor <= max;

	cout << "O resultado é : " << comparacao << endl;

	cout << "\nLegenda:";
	cout << "\n1 -> Verdadeiro (Entre limites)" << "\n0 -> Falso (Fora dos limites)" << endl;
	cin.get();

	return 0;
}
