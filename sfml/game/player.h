#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED

class Player{

public:
	Player();
	int movementSpeed = 0;
	int attackDamage = 5;
};

Player::Player(){

	std::cout << "criado com sucesso" << std::endl;

}

#endif
