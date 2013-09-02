#include <allegro.h>
#include <stdlib.h>
#include <math.h>

void setup();
void saida();

typedef struct Circle{
   int x, y, raio;
} Circle;

void animCircle(){
   static Circle *circ=NULL; // static age como uma var global acessivel 
                             // somente em dado local, neste caso a func animCircle

   if( !circ ){
      circ = malloc( sizeof(Circle));
      circ->x = circ->y = 300;
      circ->raio = 10;
   } else{
      rectfill( screen, circ->x - circ->raio, circ->y - circ->raio, circ->x + circ->raio, circ->y + circ->raio,  makecol( 0, 0, 0 ));

      circ->x += rand() % 40 - 20;
      circ->y += rand() % 40 - 20;
   }

   circle( screen, circ->x, circ->y, circ->raio, makecol( 0, 0, 255 ) );
}

int main(){
   atexit( saida );
   setup();

   install_int( animCircle, 50 );

   while( !key[KEY_ESC] ){
      // verificar movimento do jogador
      // verificar movimento dos oponentes
      // outras coisas

      rest(50);
   }

   exit( 0 );

   return 0;
}

void setup(){
   allegro_init();

   // instala subsistemas
   install_keyboard();
   install_mouse();
   install_timer();
   //install_joystick();

   srand( time(0) );

   // configura a tela
   set_color_depth( 16 ); // o padrao e 8

   // presar bem atenco a armadilha da mudanca do modo grafico
   set_gfx_mode( GFX_AUTODETECT_FULLSCREEN, 800, 600, 0, 0 );
}

void saida(){
   allegro_exit();
}
