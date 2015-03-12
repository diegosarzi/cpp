#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

// variaveis calculadora
int calcEscolha;
int n1, n2;

// variavel loop funciones
int sair = 0;

// funcao calculadora
void calc(){

	while(sair == 0){

		cout << "VAMOS CALCULAR!!!" << endl;
		cout << "1- SOMA\n";
		cout << "2- SUBTRACAO\n";
		cout << "3- MULTIPLICACAO\n";
		cout << "4- DIVISAO\n";
		cout << "5- VOLTAR\n";

		cin >> calcEscolha;

		if(calcEscolha == 5){
		sair = 1;		
		}

		if(sair == 0){
		cout << "Digite o primeiro numero: ";
		cin >> n1;
		cout << "\nDigite o segundo numero: ";
		cin >> n2;
		cout << endl << ".............." << endl;
		}

		if(calcEscolha == 1){
		cout << n1 << " + " << n2 << " = "<< n1+n2 << endl;
		getchar();	getchar();
		} else if(calcEscolha == 2){
		cout << n1 << " - " << n2 << " = "<< n1-n2 << endl;
		getchar();	getchar();
		} else if(calcEscolha == 3){
		cout << n1 << " * " << n2 << " = "<< n1*n2 << endl;
		getchar();	getchar();
		} else if(calcEscolha == 4){
		cout << n1 << " / " << n2 << " = "<< n1/n2 << endl;
		getchar();	getchar();
		}

		system ("clear");
}

}

// funcao mostrar horas
void horas(){

	system("date");
	getchar();	getchar();

}


// funcao main
int main (void) { 

// variavel de menu principal
int menu;

system ("clear");

cout << "Bem vindo ao TESTE!" << endl;

cout << "1- Calculadora\n";
cout << "2- Horas\n";
cout << "3- Usuarios\n";
cout << "4- \n";
cout << "5- Sair\n";

cin >> menu;

// Menu principal
switch(menu) {
	case 1:
		system ("clear");
		calc();
		sair = 0;
		return main();
	break;

	case 2:
		system("clear");
		horas();
		return main();
	break;

	case 3:
		system("clear");
		cout << "Segue lista de usuarios: " << endl;
		system("users");
		getchar(); getchar();
		return main();
	break;

	case 4:
		cout << "04";
	break;

	case 5:
		cout << "05";
	break;
}

return 0;

}