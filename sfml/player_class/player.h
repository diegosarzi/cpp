#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED

#include <iostream>
#include <SFML/Graphics.hpp>

using namespace std;

class Player{
public:
	Player(){
	// Default
	}

	Player(std::string imgDirectory){
		if(!pTexture.loadFromFile(imgDirectory)){
			std::cerr << "Error\n";
		}

		pSprite.setTexture(pTexture);
	}

	void drawPlayer(sf::RenderWindow &window){
	
		window.draw(pSprite);
		
	}

	void movePlayer(char direction, float moveSpeed){
	
	
		if(direction == 'u'){
			pSprite.move(0,-moveSpeed);
		} else if(direction == 'd'){
			pSprite.move(0,moveSpeed);
		} else if(direction == 'l'){
			pSprite.move(-moveSpeed,0);
		} else if(direction == 'r'){
			pSprite.move(moveSpeed,0);
		}
	}

	void setTexture(int c, char key){
	

		if (key == 'u'){

		c++;
		pSprite.setTextureRect(sf::IntRect(c * 50,70,50,70));
		} else if (key == 'd'){
		
		pSprite.setTextureRect(sf::IntRect(c * 50,0,50,70));
		
		} else if (key == 'l'){
		
		pSprite.setTextureRect(sf::IntRect(c * 50,150,50,70));
		} else if (key == 'r'){
		
		pSprite.setTextureRect(sf::IntRect(c * 50,230,50,70));
		
		}

		cout << c << endl;

		c++;
		if(c == 2){
			c = 0;
		}
	
	}

private:

	sf::Texture pTexture;
	sf::Sprite pSprite;

};

#endif
