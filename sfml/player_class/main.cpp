#include <iostream>
#include <SFML/Graphics.hpp>
#include "player.h"

using namespace std;

int main(){

	float pVelocity = 1;

	sf::RenderWindow window;

	sf::Vector2i centerWindow((sf::VideoMode::getDesktopMode().width/2)-400, (sf::VideoMode::getDesktopMode().height/2)-300);

	window.create(sf::VideoMode(800,600), "MAIN GAME", sf::Style::Titlebar | sf::Style::Close);
	window.setPosition(centerWindow);

	window.setKeyRepeatEnabled(true);

	Player myPlayer("player.png");

	//Main loop
	while(window.isOpen()){
	
		sf::Event Event;

		//Event loop
		while(window.pollEvent(Event)){
		
			switch(Event.type){
			
				case sf::Event::Closed:
					window.close();
				}


		}

		window.clear();


		if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up)){
			myPlayer.movePlayer('u', pVelocity);
			myPlayer.setTexture(0, 'u');
		}
		if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down)){
			myPlayer.movePlayer('d', pVelocity);
			myPlayer.setTexture(0, 'd');
		}
		if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left)){
			myPlayer.movePlayer('l', pVelocity);
			myPlayer.setTexture(0, 'l');
		}
		if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right)){
			myPlayer.movePlayer('r', pVelocity);
			myPlayer.setTexture(0, 'r');
		}


		myPlayer.drawPlayer(window);

		window.display();
		
		}
	
}
