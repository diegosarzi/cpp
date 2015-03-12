// Biblioteca basica c++
#include <iostream>
// Biblioteca para funcção getchar()
#include <stdio.h>
// Biblioteca para função system()
#include <stdlib.h>

using namespace std;

// Variaveis
bool loop;
int op;
int n1, n2;

int main(void) {

	// Ligando loop
	loop = true;

	// Loop
	while(loop = true){

	// Limpa tela
	system ("clear");

	// Mensagem de boas vindas
	cout << "Seja bem vindo a Calc 0.1" << endl;
	cout << "-------------------------" << endl << endl;
	// Menu
	cout << "1- SOMA" << endl;
	cout << "2- SUBTRACAO" << endl;
	cout << "3- MULTIPLICACAO" << endl;
	cout << "4- DIVISAO" << endl;
	cout << "0- SAIR" << endl;

	cout << endl << "Digite uma opção de operação: ";
	// Carrega variavel op
	cin >> op;

	cout << endl << "Digite o primeiro numero: ";
	// Carrega variavel n1
	cin >> n1;
	cout << endl << "Digite o segundo numero: ";
	// Carrega variavel n2
	cin >> n2;

	// OPCAO SAIR
	if (op == 0) {
		cout << endl << "Bye Bye" << endl;
		return 0;
	}

	if (op == 1){
		cout << endl << n1 << "+" << n2 << " = " << n1+n2 << endl;
		getchar();	getchar();
	} else if (op == 2){
		cout << endl << n1 << "-" << n2 << " = " << n1-n2 << endl;
		getchar();	getchar();
	} else if (op == 3){
		cout << endl << n1 << "*" << n2 << " = " << n1*n2 << endl;
		getchar();	getchar();
	} else if (op == 4){
		cout << endl << n1 << "/" << n2 << " = " << n1/n2 << endl;
		getchar();	getchar();
	} else {
		cout << endl << "Digite uma opção valida" << endl;
		getchar();	getchar();
	}
  }
}