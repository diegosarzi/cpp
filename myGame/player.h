#include <iostream>
#include <SFML/Graphics.hpp>

using namespace std;

class Player{
public:
	Player();	
	sf::RectangleShape rectPlayer;
	sf::Sprite spritePlayer;
	
	sf::Vector2i globalPosition = sf::Mouse::getPosition();

	int hp = 100;
	int velocidadePlayer = 5;

	void update();
	void updateMovement();


private:
};


// CONSTRUCTION
Player::Player(){
	

	rectPlayer.setSize(sf::Vector2f(64,64));
	rectPlayer.setPosition(400,200);
	rectPlayer.setFillColor(sf::Color::Blue);

	spritePlayer.setPosition(400,200);
	spritePlayer.setTextureRect(sf::IntRect(0,0,64,64));
	cout << "Player criado" << endl;

}


// METHODS

void Player::update(){
	spritePlayer.setPosition(rectPlayer.getPosition());
	
	// get the global mouse position (relative to the desktop)
	//
	// get the local mouse position (relative to a window)
	// sf::Vector2i localPosition = sf::Mouse::getPosition(window); // window is a sf::Window
	//spritePlayer.rotate(1);
	
}


void Player::updateMovement(){

// KEYBOARD

if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
{
	rectPlayer.move(-velocidadePlayer, 0);
	spritePlayer.setTextureRect(sf::IntRect(0,0,64,64));
} 

if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
{
	rectPlayer.move(velocidadePlayer, 0);
	spritePlayer.setTextureRect(sf::IntRect(64,0,64,64));
} 

if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
{
	rectPlayer.move(0, -velocidadePlayer);
} 

if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
{
	rectPlayer.move(0, velocidadePlayer);
}



// MOUSE

}
