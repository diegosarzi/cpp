#include <iostream>
using namespace std;


void escreverNomeIdade(string nome, int idade){

	cout << "O seu nome é: " << nome << " e sua idade é " << idade << "." << endl;

}

int calculadora(int n1, int n2, char operacao){


	if(operacao == '+'){
		return n1 + n2;
	} else if(operacao == '-'){
		return n1 - n2;
	} else if(operacao == '*'){
		return n1 * n2;
	} else if(operacao == '/'){
		return n1 / n2;
	} else {
	
		cout << "Operador invalido" << endl;
	
	}

}

int main(){

	string nome;
	int idade;

/*	cout << "Digite seu nome : ";
	getline(cin, nome);
	cout << "Digite sua idade : ";
	cin >> idade;
*/
//	escreverNomeIdade(nome, idade);

//	escreverNomeIdade("Rafaela Justino", 26);

//	escreverNomeIdade("Brena", 12);


	cout << calculadora(20,35,'+') << endl;
	cout << calculadora(20,35,'-') << endl;
	cout << calculadora(20,35,'*') << endl;
	cout << calculadora(20,2,'/') << endl;
	
return 0;
};
