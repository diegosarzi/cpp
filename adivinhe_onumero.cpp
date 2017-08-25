#include <iostream>
using namespace std;

int main() {

	srand (time(NULL));	
	int nComputador = rand() % 50 + 1;
	int nUsuario;
	int contador = 0;

	while(true){

	cout << "Adivinhe o numero (1 à 50) : "; cin >> nUsuario; 

	contador += 1;

	if(nUsuario == nComputador){
	
		cout << "VITORIA!! Você só precisou de "<< contador << " vezes para acertar!" << endl;
		break;	

	} else if(nUsuario > nComputador){
	
		cout << nUsuario << " é maior que o escolhido!" << endl;
	
	} else if(nUsuario < nComputador && nUsuario != 0){
	
		cout << nUsuario << " é menor que o escolhido!" << endl;

	} else if(nUsuario == 0){
	
		cout << "Impossivel saber o valor" << endl;
	
	}


	}

return 0;

}
