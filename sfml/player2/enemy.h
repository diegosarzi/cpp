#ifndef ENEMY_H_INCLUDED
#define ENEMY_H_INCLUDED

#include <iostream>
#include <SFML/Graphics.hpp>
#include "entity.h"

using namespace std;

class Enemy : public Entity
{
public:

	Enemy(){

	rect.setSize(sf::Vector2f(20,50));
	rect.setPosition(400,200);
	rect.setFillColor(sf::Color::Blue);

	sprite.setPosition(300,200);
	sprite.setTextureRect(sf::IntRect(0,0,50,70));


	}

	void update(){
	sprite.setPosition(rect.getPosition());
	}

/*	void updateMovement();

	float movementSpeed = 1;
int attackDamage = 5;
	int counterWalking = 0;
	int direction = 0;

*/
private:
};

/*
void Player::updateMovement(){


	if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up)){
	
		rect.move(0,-movementSpeed);
		sprite.setTextureRect(sf::IntRect(counterWalking * 50, 70, 50, 70));
		direction = 1;
	} else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down)){
	
		rect.move(0,movementSpeed);
		sprite.setTextureRect(sf::IntRect(counterWalking * 50, 0, 50, 70));
		direction = 2;
	} else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left)){
	
		rect.move(-movementSpeed,0);
		sprite.setTextureRect(sf::IntRect(counterWalking * 50, 150, 50, 70));
		direction = 3;
	} else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right)){
	
		rect.move(movementSpeed,0);
		sprite.setTextureRect(sf::IntRect(counterWalking * 50, 230, 50, 70));
		direction = 4;
	}

	counterWalking++;

	if (counterWalking == 2){
		counterWalking = 0;
	}
}
*/
#endif
