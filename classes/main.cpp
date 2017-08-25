#include <iostream>
#include <string>
#include "veiculo.h"

using namespace std;

int main() {

	Veiculo *v1=new Veiculo();

	v1->status();
        int n = v1->ligar(1);

	cout << endl << n << endl;

	v1->acelerar(20);	
	v1->acelerar(50);
	v1->acelerar(40);

	cout << "Velocidade atual: " << v1->getVelocidade() << endl;

	v1->freiar(15);

	cout << "Vamos acelerar maissS!!!" << endl;

	v1->acelerar(260);

	v1->freiar(50);
	v1->freiar(280);

	cout << "Velocidade atual: " << v1->getVelocidade() << endl;

	v1->freiar(100);

	v1->ligar(0);

	v1->status();


}
