#include <iostream>
using namespace std;

int main()
{
	// variaveis
	int numero = 7;
	int escolhido;

	// Apresentacao e pergunta
	cout << "\nBem vindo ao \"Acerte o numero!\"";
	cout << "\nO programador escolheu um número tente adivinhar (1 a 10)" << endl;
	cin >> escolhido;
	cin.get();

	// Resposta
	cout << "\nO numero que você escolheu foi: \'" << escolhido << "\'. ";
	cout << "\nO numero correto é: \'" << numero << "\'." << endl;

	// Final
	cout << "\nSe acerto de primeira parabens!";
	cout << "\nSe não tente na próxima!" << endl;

	cin.get(); // Fim da linha
}
