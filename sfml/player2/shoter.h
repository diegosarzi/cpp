#ifndef SHOTER_H_INCLUDED
#define SHOTER_H_INCLUDED

#include <iostream>
#include <SFML/Graphics.hpp>
#include "entity.h"

using namespace std;

class Shoter : public Entity
{
public:

	int movementSpeed = 10;
	int attackDamage = 5;
	int direction = 0; // 1-up, 2-down, 3-left, 4-right


	Shoter(){
	
	rect.setSize(sf::Vector2f(10,10));
	rect.setPosition(0,0);
	rect.setFillColor(sf::Color::Green);
	
	}

	void update(){
	
	
		if (direction ==1){
			rect.move(0,-movementSpeed);
		} else if (direction == 2){
		
			rect.move(0,movementSpeed);
		} else if (direction == 3){
			rect.move(-movementSpeed,0);
		} else if (direction == 4){
			rect.move(movementSpeed,0);
		}


	}

private:
};

#endif
