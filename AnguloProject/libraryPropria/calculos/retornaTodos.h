//
// Created by Eduks on 01/05/2024.
//

#ifndef RETORNATODOS_H
#define RETORNATODOS_H
#include "../opcoes.h"

void retornaTudo(double angulo){
    char** opcStr = opcoes();
    double resultado[NUM_OPCOES];

    for(int i = 0; i < NUM_OPCOES-1; i++) {
        resultado[i] = opcEscolhida(i, angulo);
        printf("\n %s : %.4lf", opcStr[i], resultado[i]);
        free(opcStr[i]);
    }
    free(opcStr);
}

#endif //RETORNATODOS_H
