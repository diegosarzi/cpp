#include <iostream>
#include <string>
using namespace std;

class Aviao{

public:
	int velocidade = 0;
	int velocidadeMax;
	string tipo;

	void ini(int tp);

private:

};

void Aviao::ini(int tp){

	if(tp==1){
		this->velocidadeMax=800;
		this->tipo="Jato";
	} else if(tp==2){
		this->velocidadeMax=350;
		this->tipo="Monomotor";
	} else if(tp==3){
		this->velocidadeMax=180;
		this->tipo="Planador";
	}

}


int main() {

	Aviao *av1 = new Aviao();
	Aviao *av2 = new Aviao();

	av1->ini(1);
	av2->ini(2);

	cout << av1->velocidadeMax << " " << av1->tipo << endl;
	cout << av2->velocidadeMax << " " << av2->tipo << endl;
return 0;
}
