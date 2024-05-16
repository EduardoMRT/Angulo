//
// Created by Eduks on 01/05/2024.
//

#ifndef RETORNATODOS_H
#define RETORNATODOS_H
#include "../opcoes.h"

void retornaTudoSemArcos(double const angulo, int const opcRetorno){
        printf( "%s", opcEscolhida( 1, angulo, opcRetorno));
        printf( "%s", opcEscolhida(2, angulo, opcRetorno));
        printf( "%s", opcEscolhida(3, angulo, opcRetorno));
        printf( "%s", opcEscolhida(4, angulo, opcRetorno));
        printf( "%s", opcEscolhida(5, angulo, opcRetorno));
        printf( "%s", opcEscolhida(6, angulo, opcRetorno));
}

void retornaTudoComArcos(double const angulo, int const opcRetorno) {
        printf( "%s", opcEscolhida( 1, angulo, opcRetorno));
        printf( "%s", opcEscolhida(2, angulo, opcRetorno));
        printf( "%s", opcEscolhida(3, angulo, opcRetorno));
        printf( "%s", opcEscolhida(4, angulo, opcRetorno));
        printf( "%s", opcEscolhida(5, angulo, opcRetorno));
        printf( "%s", opcEscolhida(6, angulo, opcRetorno));
        printf( "%s", opcEscolhida(7, angulo, opcRetorno));
        printf( "%s", opcEscolhida(8, angulo, opcRetorno));
        printf( "%s", opcEscolhida(9, angulo, opcRetorno));
}

#endif //RETORNATODOS_H
