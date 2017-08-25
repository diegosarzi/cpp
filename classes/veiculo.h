#ifndef VEICULO_H_INCLUDED
#define VEICULO_H_INCLUDED

class Veiculo{

private:
   int velocidadeMin = 0;
   int velocidade;
   int velocidadeMax;
   std::string cor;
   
public:
   Veiculo();
   bool ligado;
   int ligar(int l);
   void acelerar(int v);
   void freiar(int v);
   int getVelocidade();
   int getVelocidadeMax();
   void getCor();
   void status();
};

Veiculo::Veiculo(){

   ligado = false;
   velocidade = 0;
   velocidadeMax = 300;
   cor = "Preto";

}

int Veiculo::ligar(int l){
   
   if (l == 1){
	   ligado = true;
	   std::cout << "Carro ligado com sucesso" << std::endl;
	   return 1;
   } else if (l == 0){
	   ligado = false;
	   std::cout << "Carro desligado com sucesso" << std::endl;
	   return 0;
   }

}

void Veiculo::acelerar(int v){

	if (ligado){

	velocidade += v;
	std::cout << "Acelerando... + : " << v << std::endl;

	if (velocidade >= velocidadeMax){
		velocidade = velocidadeMax;
		std::cout << "Voce alcançou a velocidade máxima: " << velocidadeMax << std::endl;
	}
	} else {
		std::cout << "Veiculo desligado, ligue primeiro para poder acelear." << std::endl;
		velocidade = 0;
	}

}

void Veiculo::freiar(int v){

	if (ligado){
	velocidade -= v;
	std::cout << "Freiando... - : " << v << std::endl;

	if (velocidade <= velocidadeMin);
		velocidade = velocidadeMin;
		std::cout << "O carro já esta parado." << std::endl;
	} else {
		std::cout << "Veiculo desligado" << std::endl;
		velocidade = 0;	
	}
}

int Veiculo::getVelocidade(){

	return velocidade;

}

int Veiculo::getVelocidadeMax(){

	return velocidadeMax;

}

void Veiculo::status(){

	std::cout << "Ligado.....: " <<
		     ligado << std::endl <<
		     "Velocidade.: " << velocidade <<
		     std::endl;

}


#endif
