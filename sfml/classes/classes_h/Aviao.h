#ifndef AVIAO_H_INCLUDED
#define AVIAO_H_INCLUDED

class Aviao{
public:
	int velocidade = 0;
	int velocidadeMax;
	std::string tipo;

	Aviao(int tp);
	void imprimir();

private:

};

Aviao::Aviao(int tp){

	if(tp==1){
		velocidadeMax=800;
		tipo="Jato";
	} else if(tp==2){
		velocidadeMax=350;
		tipo="Monomotor";
	} else if(tp==3){
		velocidadeMax=180;
		tipo="Planador";
	}


}

void Aviao::imprimir(){

	std::cout << "Tipo...........: " << tipo << std::endl;
	std::cout << "VelocidadeMax..: " << velocidadeMax << std::endl;
	std::cout << "VelocidadeAtual: " << velocidade << std::endl << std::endl;


}


#endif // AVIAO_H_INCLUDED
