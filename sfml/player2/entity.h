#ifndef ENTITY_H_INCLUDED
#define ENTITY_H_INCLUDED

#include <stdio.h>
#include <iostream>
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>

using namespace std;

class Entity{
public:
	sf::RectangleShape rect;
	sf::Sprite sprite;
	sf::Text text;

private:
};

#endif
