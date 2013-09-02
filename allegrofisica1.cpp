#include <allegro.h>

int main()
{
	allegro_init();
	install_keyboard();

	set_color_depth(32);
	set_gfx_mode( GFX_AUTODETECT_WINDOWED, 800, 600, 0, 0);

	BITMAP *buffer = create_bitmap(800, 600);
	clear_to_color(buffer, 0x333333);
	BITMAP *sprite = create_bitmap(50, 50);
	clear_to_color(sprite, 0xDF1600);

//	rect(buffer, 50, 50, 100, 100, 0x5555555);

//	textout_centre_ex(buffer, font, "Titulo Jogo", 320, 10, 0xFFFFFF, 0x3333333);


	int x = 150;
	int y = 500;
	int c = 20;
	bool descer = false;
	bool pular = false;


//      rectfill(buffer, x, y, 200, 100, 0xDF1600);

        blit(buffer, screen, 0, 0, 0, 0, 800, 600);
        draw_sprite(screen, sprite, x, y);


	while (! key[KEY_ESC])
	{

        blit(buffer, screen, 0, 0, 0, 0, 800, 600);
        draw_sprite(screen, sprite, x, y);
//	blit(buffer, screen, 0,0,0,0,800,600);

		if (key[KEY_UP])
		{
		pular = true;
//	        blit(sprite, screen, 0, 0, x, y, 50, 50);
		//pular = true;
			while (pular)
			{
			blit(buffer, screen, 0,0,0,0, 800, 600);
			draw_sprite(screen, sprite, x, y);
			y--;
			rest(1.5);
			}

			while (y <= 500)
			{
                        blit(buffer, screen, 0,0,0,0, 800, 600);
                        draw_sprite(screen, sprite, x, y);
                        y++;
                        rest(1.5);
			}
		descer = false;
		}



		else if (key[KEY_LEFT])
		{
		x--;
		rest(0.05);
		}


	rest(2.5);

}



	readkey();

	destroy_bitmap(buffer);

	return 0;

}
END_OF_MAIN();

