#include <stdio.h>
#include "MecanicaJogo.h"
#include "Rankings.h"

struct usuario{
    char userid[20];
    char passwd[16];
    int pontuacao;
    int npartidas;
    int vitorias;
    int derrotas;
};

int main()
{

    int NPchar =0, Player=0;
    printf("Faca sua jogada \n");
    scanf("%d", &Player);
    NPchar = GeraJogadaAleatoria();

    int resultado = Juiz(Player, NPchar);
    return 0;
}

/*
1 - Robot
2 - Pirate
3 - Ninja
4 - Monkey
5 - Zombie
Regras do jogo

1>5
1>3
2>1
2>4
3>2
3>5
4>3
4>1
5>4
5>2

 */