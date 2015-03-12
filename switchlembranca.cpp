#include <iostream>

using namespace std;

int main(void) { 
 
	int numero;

	cout << "Escolha um numero: " << endl;
	cin >> numero;

	switch(numero){
		case 1:
		cout << "01";
		break;

		case 2:
		cout << "02";
		break;

		case 3:
		cout << "03";
		break;
		
		default:
		cout << "Numero invalido";

	}



}