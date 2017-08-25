#include <iostream>
#include <SFML/Graphics.hpp>

#include "player.h"

int main()
{
	sf::RenderWindow window(sf::VideoMode(800, 600), "myGame");
	window.setFramerateLimit(60);

	/// CREATE PLAYER
	sf::Texture texturePlayer;
	if(!texturePlayer.loadFromFile("player.png")){
		return EXIT_FAILURE;		
	}

	class Player player;
	player.spritePlayer.setTexture(texturePlayer);


	
	window.setKeyRepeatEnabled(true);

	// run the program as long as the window is open
	while (window.isOpen())
        {
        // check all the window's events that were triggered since the last iteration of the loop
	        sf::Event event;
	        while (window.pollEvent(event))
	        {
	        // "close requested" event: we close the window
	        if (event.type == sf::Event::Closed)
	        window.close();
	        }

	window.clear();

	player.update();
	player.updateMovement();
	
	if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
	{
		sf::Vector2i position = sf::Mouse::getPosition();
		cout << sf::Vector2<position> << endl;
	
		cout << "MouseClick!" << endl;
		//sf::Mouse::setPosition(sf::Vector2i(100, 200), window);
	
	}

	
	window.draw(player.spritePlayer);


	window.display();

	}
	
return 0;
}
