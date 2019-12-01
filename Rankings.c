//
// Created by aluno on 27/11/2019.
//
#include <stdlib.h>
#include "Rankings.h"

struct usuario{
    char userid[19];
    char passwd[15];
    int pontuacao;
    int npartidas;
    int vitorias;
    int derrotas;
};
struct usuario CriarUsuario();

struct usuario CriarUsuario(){

    struct usuario user;


    printf("Informe o nome de usuário[<= 20 caracteres]");
    scanf("%s", &user.userid);
    printf("Informe a senha [<= 16caracteres]");
    scanf("%s",&user.passwd);

}
