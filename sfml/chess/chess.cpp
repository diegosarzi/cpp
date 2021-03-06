#include <SFML/Graphics.hpp>
#include <time.h>
using namespace sf;

int size = 56;

Sprite f[32]; //figures

int board[8][8] = 
	{-1,-2,-3,-4,-5,-3,-2,-1,
	 -6,-6,-6,-6,-6,-6,-6,-6,
	  0, 0, 0, 0, 0, 0, 0, 0,
	  0, 0, 0, 0, 0, 0, 0, 0,
	  0, 0, 0, 0, 0, 0, 0, 0,
	  0, 0, 0, 0, 0, 0, 0, 0,
	  6, 6, 6, 6, 6, 6, 6, 6,
	  1, 2, 3, 4, 5, 3, 2, 1
	};

void loadPosition() {
	int k=0;
	for (int i=0; i<8; i++)
		for (int j=0; j<8; j++)
		{
			int n = board[i][j];
			if (!n) continue;
			int x = abs(n)-1;
			int y = n>0?1:0;
			f[k].setTextureRect(IntRect(size*x,size*y,size,size));
			f[k].setPosition(size*j,size*i);
			k++;
		}
}


int main(){

	RenderWindow window(VideoMode(463, 454), "The Chess!");
	
	Texture t1,t2;
	t1.loadFromFile("images/figures.png");
	t2.loadFromFile("images/board.png");

	Sprite s(t1);
	Sprite sBoard(t2);

	for(int i=0; i<32; i++) f[i].setTexture(t1);
	loadPosition();

	bool isMove = false;
	float dx=0, dy=0;


	while (window.isOpen())
	{
		Vector2i pos = Mouse::getPosition(window);

		Event e;
		while (window.pollEvent(e))
		{
			if (e.type == Event::Closed)
			    window.close();
			
			// drag and drop
			if (e.type == Event::MouseButtonPressed)
				if (e.key.code == Mouse::Left)
					if (s.getGlobalBounds().contains(pos.x,pos.y))
					{
						isMove=true;
						dx=pos.x - s.getPosition().x;
						dy=pos.y - s.getPosition().y;
					}
			if (e.type == Event::MouseButtonReleased)
				if (e.key.code == Mouse::Left)
					isMove=false;

		}

		if (isMove) s.setPosition(pos.x-dx,pos.y-dy);

	///// draw /////
	window.clear();
	window.draw(sBoard);
	for(int i=0; i<32; i++) window.draw(f[i]);
	window.display();

	}

	return 0;

}
