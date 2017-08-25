#include <SFML/Graphics.hpp>
#include <iostream>
#include "player.h"

using namespace std;

int main()
{
	float playerMovementSpeed = 0.5;
	int counterWalk = 0;

	sf::RenderWindow window(sf::VideoMode(800, 600), "SFML GAME!");
	window.setTitle("ALIENS ON THE STORM");

	// CIRCULO SHAPE
//	sf::CircleShape shape(20.f);
//	shape.setFillColor(sf::Color::Yellow);
//	shape.setPosition(390,220);
	
	// TEXURA
	sf::Texture texturePlayer;
	if (!texturePlayer.loadFromFile("char.png")){
		return EXIT_FAILURE;
	}

	Player *player1=new Player();
//	player1.sprite.setTexture(texturePlayer);


	// SPRITE
//	sf::Sprite spritePlayer(texturePlayer);
//	spritePlayer.setPosition(window.getSize().x/2, window.getSize().y/2);

//	spritePlayer.setTextureRect(sf::IntRect(0,0,50,70));

	// FONT
//	sf::Font font;
//	if (!font.loadFromFile("crackedcode.ttf")) {
//		return EXIT_FAILURE;		
//	}
//	sf::Text textTop("ALIENS", font, 40);
//	sf::Text text("ON THE STORM", font, 20);
//	textTop.setColor(sf::Color::Green);
//	text.setColor(sf::Color::Green);

//	textTop.setPosition(302, 285);
//	text.setPosition(300,330);


 	while (window.isOpen())
        {
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
			window.close();
		}
        
	window.clear();
/*
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
	{
		spritePlayer.move(-playerMovementSpeed,0);
		spritePlayer.setTextureRect(sf::IntRect(counterWalk * 50,150,50,70));
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
	{
		spritePlayer.move(playerMovementSpeed,0);
		spritePlayer.setTextureRect(sf::IntRect(counterWalk * 50,230,50,70));
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
	{
		spritePlayer.move(0,-playerMovementSpeed);
		spritePlayer.setTextureRect(sf::IntRect(counterWalk * 50,70,50,70));
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
	{
		spritePlayer.move(0,playerMovementSpeed);
		spritePlayer.setTextureRect(sf::IntRect(counterWalk * 50,0,50,70));
	}


	counterWalk++;

	if(counterWalk == 2){
		counterWalk = 0;
	}

*/


//	window.draw(player1.sprite);

//	window.draw(spritePlayer);
//	window.draw(textTop);
//	window.draw(text);
//	window.draw(shape);
        window.display();
        }

	return 0;
}
