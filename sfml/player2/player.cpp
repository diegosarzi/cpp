#include <iostream>
#include "player.h"

// NAO FUNCIONA

Player::Player(){

	rect.setSize(sf::Vector2f(20,50));
	rect.setPosition(400,200);
	rect.setFillColor(sf::Color::Blue);

	sprite.setPosition(300,200);
	std::cout << "criado sprite" << std::endl;
}
