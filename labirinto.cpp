
/*
#################################################################################################
# Programa originalmente escrito por <Tiago Negri>                                              #
#                                                                                               #
# Posteriormente modificado por Luís Fred <fredwind@terra.com.br>                               #
# Comentário de Luíz Fred: este programa consiste num joguinho de laborinto. Originalmente o    #
# jogo não tinha  uma saida, e onde já se viu um joguinho de labirinto sem uma saida????? :),   #
# então resolvi fazer algumas modificações no código, como introduzir uma saida e aumentar o    #
# mapa do jogo.                                                                                 #
#                                                                                               #
# Posteriormente modificado por YanyVeyron < denilsonmaxi@gmail.com >                           #
# Comentário de YankVeyron: Bom, eu apenas tornei o Programa mais dinâmico através do uso das   #
# Setas do teclado utilizando a Biblioteca < conoi.h >                                          #
#                                                                                               #
# Caso queiram verificar o código antigo, acessem esse link:                                    #
# www.vivaolinux.com.br/scripts/verFonte.php?codigo=722                                         #
#################################################################################################
*/
 
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
 
/* Definicoes, para facilitar o uso da funcao para desenhar o mapa */
#define CHAO 0
#define PAREDE 1
#define VOCE 2
#define GRAMA 3
#define SAIDA 4
 
#define ACIMA 72
#define ABAIXO 80
#define DIREITA 77
#define ESQUERDA 75
 
#define ESC 27
 
/*Outras definições para tratamento de erros*/
#define OK 1
#define ERRO 2
 
/* Usuarios de Windows, troquem "clear" por "cls" */
#define LIMPARTELA "cls"
 
int    coluna_atual = 2,
    linha_atual = 2;
 
/* O Mapa */
int mapa[10][40] = {
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,0,1,
1,0,0,0,0,1,1,1,0,1,1,1,1,1,1,1,1,0,0,1,1,1,0,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,0,1,
1,0,0,0,0,3,0,0,0,1,1,0,0,0,0,0,0,1,1,1,1,1,0,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,0,1,
1,0,0,1,3,3,3,0,0,1,1,0,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,0,1,
1,0,0,0,0,1,0,0,0,1,1,0,1,1,1,1,1,1,0,1,1,1,0,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,0,1,
1,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,0,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,
1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,0,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,4,1,1,1,1,1,1,1,1,1,1,1};
 
/* Funcao para desenhar o Mapa */
int desenhar_mapa()
{
    int linha,coluna;
    for (linha=0;linha<10;linha++) {
       for (coluna=0;coluna<40;coluna++) {
          if ((linha == linha_atual) && (coluna == coluna_atual)) {
             printf("@");
             continue;
          }
          if (mapa[linha][coluna] == CHAO)
             printf(" ");
          if (mapa[linha][coluna] == PAREDE)
             printf("=");
          if (mapa[linha][coluna] == GRAMA)
             printf(".");
     if (mapa[linha][coluna] == SAIDA)
        printf("#");
 
       }
       printf("\n");
    }
    return OK;
}
 
int main()
{
    int tecla;
    do{
       system(LIMPARTELA);
       desenhar_mapa();
       printf("\n##################### L A B I R I N T O #####################################\n");
       printf("\n\n    ( %c )\n\n( %c ) + ( %c )\n\n    ( %c )\n",30,17,16,31); /* Imprime as direcoes */
       printf("\nPressione ESC para sair\n");
       printf("\n------------------------------------------------------------------------------\n");
 
       tecla = getch();
 
       if ( tecla == ACIMA ) {
          linha_atual = linha_atual - 1;
          /* Se não for chao ou grama ele volta pra posicao anterior */
          if ((mapa[linha_atual][coluna_atual] != CHAO) && (mapa[linha_atual][coluna_atual] != GRAMA) && (mapa[linha_atual][coluna_atual] != SAIDA)) {
             linha_atual = linha_atual + 1;
 
 
          }
       }
       if ( tecla == ABAIXO ) {
          linha_atual = linha_atual + 1;
          /* Se não for chao ou grama ou saida ele volta pra posicao anterior */
          if ((mapa[linha_atual][coluna_atual] != CHAO) && (mapa[linha_atual][coluna_atual] != GRAMA) && (mapa[linha_atual][coluna_atual] != SAIDA)) {
             linha_atual = linha_atual - 1;
 
 
          }
       }
       if ( tecla == DIREITA ) {
          coluna_atual = coluna_atual + 1;
          /* Se não for chao ou grama ou saida ele volta pra posicao anterior */
          if ((mapa[linha_atual][coluna_atual] != CHAO) && (mapa[linha_atual][coluna_atual] != GRAMA) && (mapa[linha_atual][coluna_atual] != SAIDA)) {
             coluna_atual = coluna_atual - 1;
 
 
          }
       }
       if ( tecla == ESQUERDA ) {
          coluna_atual = coluna_atual - 1;
          /* Se não for chao ou grama ou saida ele volta pra posicao anterior */
          if ((mapa[linha_atual][coluna_atual] != CHAO) && (mapa[linha_atual][coluna_atual] != GRAMA) && (mapa[linha_atual][coluna_atual] != SAIDA)) {
             coluna_atual = coluna_atual + 1;
 
 
          }
       }
       if(mapa[linha_atual][coluna_atual]==SAIDA)
       {
                       system("cls");
                       printf("\n\n\n\n\n\n\nVoce ganhou");
                       getch();
                       tecla = ESC;
       }
       
       
    }while(  tecla != ESC );
 
}
