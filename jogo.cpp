/*
 *  Exemplo 9.4 - Hall of Monsters
 *  Propriedade de http://agnor.gamedev-pt.net
 *
 *  Autor :	João Portela aka Agnor
 *  Data  :	20/02/2004 a 21/02/2004
 *  Desc  : Hall of Monsters - jogo-tutorial
 *
 */

#include <iostream>
#include <windows.h> //para usar o GetTickCount();
using namespace std;

/************************************
**************ESTRUTURAS*************
************************************/

struct Personagem
{
    int hp; //os pontos de vida
	int mp; //Pontos de Mana
	int max_hp; // vai ser usada para recuperar o personagem no fim de cada partida
	int max_mp; // como dito em cima.....
	int forca; // a forca do personagem
};

struct Monstro
{

	int hp; // HP do monstro
	int forca; //forca do monstro
	//monstros não necessitam de MP
	char *nome; // necessário para podermos alterar o valor do nome sempre que quisermos...
	//será explicado na aula 11 - referências e apontadores
};

/////////////////////////////////////
///////////Variáveis/////////////////
/////////////////////////////////////

Personagem player = {50, 7, 50, 7, 5};
Monstro ORC = { 40, 10, "Orc" };
Monstro LIZARD = { 60, 15, "Lizard" };
Monstro SHADOW = { 100, 23, "Shadow" };
Monstro BAHAMUT = { 140, 31, "Bahamut" };
Monstro ULTIMA = { 1000, 100, "Ultima" }; // tentem matar este :P

/*							*
	Declarações das funções
*							*/

int menuJogo();
int chamarBatalha(Monstro monstro);
int menuBatalha(Monstro monstro);
int MonstroIA(Monstro monstro);
int ganhou();
int perdeu();
int getRandom(int de,  int ate);

//que main pequeno não é?

int main()
{

	menuJogo();

	cin.get();
	return 0;
}

/* chamarBatalha(monstro);
Desc: chama uma Batalha para um determinado monstro ( ex: chamarBatalha(SHADOW); )
*/

int chamarBatalha (Monstro monstro)
{
	cout << "\n\nApareceu um " << monstro.nome << endl;
	menuBatalha(monstro);
	return 0;
}

/* Cria o menu de Batalha ( utilizada por chamarBatalha(monstro); )
*/

int menuBatalha (Monstro monstro)
{
	int escolha;
	cout << "\n\nSeu HP: " << player.hp << '/' << player.max_hp << endl;
 	cout << "Seu MP: " << player.mp << '/' << player.max_mp << endl;
	cout << "Escolha um ataque:" << endl;
	cout << "\n1 - Ataque normal" << endl;
	cout << "2 - Fogo" << endl;
	cin >> escolha;

 	switch (escolha)	{

 	case 1:
  		monstro.hp -= player.forca * 7;
  		cout << "\nVoce atacou!" << endl;
  		break;

	case 2:
		monstro.hp -= player.forca * 10;

		player.mp -= 7;
  		cout << "\nVoce usou o fogo!" << endl;
    	break;

  	default:
 		cout << "\nComando nao conhecido..." << endl;
 		menuBatalha(monstro); 
 		//estamos a utilizar recursividade nas funções: o menu vai ser chamado de novo
 		break;
	}

	if ( monstro.hp <= 0 )
		ganhou(); //se só tiver uma instrução, um if não precisa de ter chavetas { ... }
	else
		MonstroIA(monstro);
	return 0;
}

// A intelegência artificial do Monstro. Para dar mais hipoteses aos jogadores
// só há 25% do Monstro utilizar o ataque especial

int MonstroIA(Monstro monstro)
{
	int random;
	random = getRandom(1, 4);
	switch (random)
	{
		case 1:
		case 2:
		case 3:
			cout << "\n\n" << monstro.nome << " atacou!" << endl;
			player.hp -= monstro.forca;
			break;
		case 4:
			cout << "\n\n" << monstro.nome << " usou o seu ataque especial" << endl;
			player.hp -= monstro.forca * 2;
			break;
	}

	if (player.hp <= 0)
	perdeu();

 	else
 	menuBatalha(monstro);

	return 0;
}

//a popular função getRandom

int getRandom(int de,  int ate) {

    srand(GetTickCount());
    int random = ( rand() % ate ) + de;
    return random;
}

// perdeu :(((((

int perdeu()
{
	cout << "\nPerdeu... Na proxima vez vais ter mais sorte :(" << endl;
	menuJogo();
	return 0;
}

//ganhou... e também subiu de nível :PPPP

int ganhou()
{
	cout << "\n\n\nWee ganhou!!!!! e subiu de nivel :P" << endl;
	player.forca += 2; //as modificações para "subir de nivel"
  	player.max_hp += 10;
   	player.max_mp += 7;
   	player.hp = player.max_hp; //recuperar a energia
   	player.mp = player.max_mp;

	//esperar.....
 	cin.get();

	menuJogo();

 	return 0;
}

// o menu do jogo

int menuJogo()
{
	int escolha;

 	cout << "\nEscolha um adversario:" << endl;
 	cout << "\n1 - Orc" << endl;
  	cout << "\n2 - Lizard" << endl;
   	cout << "\n3 - Shadow" << endl;
    cout << "\n4 - Bahamut" << endl;
    cout << "\n5 - ULTIMA" << endl;

    cin >> escolha;

    switch (escolha)
    {
    	case 1:
     		chamarBatalha(ORC);
       		break;
        case 2:
        	chamarBatalha(LIZARD);
       		break;
         case 3:
         	chamarBatalha(SHADOW);
       		break;
         case 4:
         	chamarBatalha(BAHAMUT);
       		break;
         case 5:
         	chamarBatalha(ULTIMA);
       		break;
		default:
  			cout << "Comando nao conhecido.... tente outra vez\n\n" << endl;
  			menuJogo();
  			break;
    }

     return 0;
}
