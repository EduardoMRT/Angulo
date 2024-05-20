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

void retornaTudoComArcos(double angulo, int opcRetorno) {
        printf( "%s", opcEscolhida( 1, angulo, opcRetorno));
        printf( "%s", opcEscolhida(2, angulo, opcRetorno));
        printf( "%s", opcEscolhida(3, angulo, opcRetorno));
        printf( "%s", opcEscolhida(4, angulo, opcRetorno));
        printf( "%s", opcEscolhida(5, angulo, opcRetorno));
        printf( "%s", opcEscolhida(6, angulo, opcRetorno));
        printf( "%s", verificaTamanhoSeno(angulo) == 0 ? "Arco Seno = Erro, o valor do seno deve estar entre 1 e -1 \n" : opcEscolhida(7, angulo, opcRetorno));
        printf( "%s", verificaTamanhoCosseno(angulo) == 0 ? "Arco Cosseno = Erro, o valor do cosseno deve estar entre 1 e -1 \n" : opcEscolhida(8, angulo, opcRetorno));
        printf( "%s", verificaTamanhoTangente(angulo) == 0 ? "Arco Tangente = Erro, o valor da tangente deve estar entre -1 e 1 \n" : opcEscolhida(9, angulo, opcRetorno));
}

#endif //RETORNATODOS_H
