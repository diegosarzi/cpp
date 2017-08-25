#ifndef SHOTER_H_INCLUDED
#define SHOTER_H_INCLUDED

#include <iostream>
#include <SFML/Graphics.hpp>
#include "entity.h"

using namespace std;

class Shoter : public Entity
{
public:

	float movementSpeed = 10;
	int attackDamage = 5;

	Shoter(){
	
	rect.setSize(sf::Vector2f(10,10));
	rect.setPosition(0,0);
	rect.setFillColor(sf::Color::Green);
	
	}

private:
};

#endif
