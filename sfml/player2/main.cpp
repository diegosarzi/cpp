#include <iostream>
#include <SFML/Graphics.hpp>
#include "player.h"
#include "entity.h"
#include "shoter.h"
#include "enemy.h"

using namespace std;

int main(){

	int counter = 0;
	int counter2 = 0;
	int counter3 = 0;

	sf::RenderWindow window(sf::VideoMode(800,600), "MainGame");
	window.setFramerateLimit(60);

//	sf::Vector2i centerWindow((sf::VideoMode::getDesktopMode().width/2)-400, (sf::VideoMode::getDesktopMode().height/2)-300);

//	window.create(sf::VideoMode(800,600), "MAIN GAME", sf::Style::Titlebar | sf::Style::Close);
//	window.setPosition(centerWindow);

	//window.setKeyRepeatEnabled(true);
	
	//Textura Player
	sf::Texture texturePlayer;
	if (!texturePlayer.loadFromFile("player.png")){
		return EXIT_FAILURE;
	}

	sf::Texture textureEnemy;
	if (!textureEnemy.loadFromFile("enemy.png")){
		return EXIT_FAILURE;
	}

	//Sprite Player
//	sf::Sprite spritePlayer(texturePlayer);
//	spritePlayer.setPosition(window.getSize().x/2, window.getSize().y/2);
//	spritePlayer.setTextureRect(sf::IntRect(0,0,50,70));


	//Create Player
	class Player Player1;
	Player1.sprite.setTexture(texturePlayer);

	//Vector Shoter
	vector<Shoter>::const_iterator iter;
	vector<Shoter> shoterArray;

	// Create Shoter
	class Shoter shoter1;


	// Create Enemy

	vector<Enemy>::const_iterator iter4;
	vector<Enemy> enemyArray;

	class Enemy enemy1;
	enemy1.sprite.setTexture(textureEnemy);
	enemy1.sprite.setTextureRect(sf::IntRect(0,12,32,32));

	enemy1.rect.setPosition(400,200);
	enemyArray.push_back(enemy1);


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


		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space)){
		
			shoter1.rect.setPosition(Player1.rect.getPosition().x + Player1.rect.getSize().x/2 - shoter1.rect.getSize().x/2, Player1.rect.getPosition().y + Player1.rect.getSize().y/2 - shoter1.rect.getSize().y/2);
			shoter1.direction = Player1.direction;
			shoterArray.push_back(shoter1);
		
		}


		// DRAW SHOTER

		counter = 0;
		for (iter = shoterArray.begin(); iter != shoterArray.end(); iter++)
		{
			shoterArray[counter].update();
			window.draw(shoterArray[counter].rect);
			counter++;
		}

		// DRAW ENEMY
		counter = 0;
		for (iter4 = enemyArray.begin(); iter4 != enemyArray.end(); iter4++)
		{
			enemyArray[counter].update();
//			window.draw(enemyArray[counter].rect);
			window.draw(enemyArray[counter].sprite);
			counter++;
		}


		Player1.update();
		Player1.updateMovement();

		window.draw(Player1.sprite);

		window.display();
		
		}
	
}
