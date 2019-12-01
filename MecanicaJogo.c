#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int Juiz(int jogador,int computador);

int GeraJogadaAleatoria();

int GeraJogadaAleatoria() {
    srand(time(0));
    int num = (rand() % 5);
    return num;
}


int Juiz(int jogador,int computador) {
    switch (jogador) {
        case 1:
            if (computador == 1){
                printf("Draw \n");
                return 3;
                }
            else if (computador == 5) {
                printf("Vitoria \n");
                return 1;
            }
            else if (computador == 3){
                printf("Vitoria \n");
                return 1;
            }
            else {
                printf("Perdeu \n");
                return 0;
            }
        case 2:
            if (computador == 2){
                printf("Draw \n");
                return 3;
            }
            else if (computador == 1){
                printf("Vitoria \n");
                return 1;
            }
            else if (computador == 4){
                printf("Vitoria \n");
                return 1;
            }
            else{
                printf("Perdeu \n");
                return 0;
            }
        case 3:
            if (computador == 3){
                printf("Draw \n");
                return 3;
            }
            else if (computador == 2){
                printf("Vitoria \n");
                return 1;
            }
            else if (computador == 5){
                printf("Vitoria \n");
                return 1;
            }
            else{
                printf("Perdeu \n");
                return 0;
            }
        case 4:
            if (computador == 4){
                printf("Draw \n");
                return 3;
            }
            else if (computador == 3){
                printf("Vitoria \n");
                return 1;
            }
            else if (computador == 1){
                printf("Vitoria \n");
                return 1;
            }
            else {
                printf("Perdeu \n");
                return 0;
            }
        case 5:
            if (computador == 5){
                printf("Draw \n");
                return 3;
            }
            else if (computador == 4){
                printf("Vitoria \n");
                return 1;
            }
            else if (computador == 2){
                printf("Vitoria \n");
                return 1;
            }
            else{
                printf("Perdeu \n");
                return 0;
            }
    }
}