#include <iostream>
#include <string>
#include "Aviao.h"

using namespace std;

int main(){

	cout << "Hello" << endl;
	Aviao *av1=new Aviao(3);
	Aviao *av2=new Aviao(2);
	Aviao *av3=new Aviao(1);
	
	av1->velocidade=20;
	
	av1->imprimir();
	av2->imprimir();
	av3->imprimir();


	cout << av1->velocidadeMax;


return 0;
}
