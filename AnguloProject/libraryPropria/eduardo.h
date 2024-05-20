//
// Created by eteixeira on 30/04/2024.
//

#ifndef EDUARDO_H
#define EDUARDO_H
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include <stdatomic.h>

#include "resumePrincipal.h"
#include "calculos/calculaAngulo.h"
#include "calculos/calculaRadiano.h"

//Gera uma caixa de texto ao redor da palavra
void textoEmLinha(char *texto) {
    int tamanhoTexto = strlen(texto);
    char *traco = malloc(tamanhoTexto * 2 + 1);
    traco[0] = '\0';
    for (int i = 0; i <= tamanhoTexto; i++) {
        strcat(traco, "-");
    }
    printf("\n %s \n %s \n %s \n", traco, texto, traco);
    free(traco);
}

//Veriica o tamanho do angulo (Por causa do Arco Seno, Arco Cosseno e Arco Tangente)
/*void verificaTamanho(double const angulo, int const opc) {

    //Verifica ArcoSeno, ArcoCosseno e ArcoTangente
    if((opc == 7 && (sin(angulo) <= -1 || sin(angulo) >= 1)) || (opc == 8 && (cos(angulo) <= -1 || cos(angulo) >= 1)) || opc == 9 && (tan(angulo) <= -1 || tan(angulo) >= 1)) {
        printf("\nERRO: O valor deve estar entre 1 e -1");
        getchar();
        getchar();
        exit(1);
    }
}*/

int verificaTamanhoSeno(double angulo) {
    if(sin(angulo) <= 1 && sin(angulo) >= -1){
        return 1;
    }
    return 0;
}

int verificaTamanhoCosseno(double angulo) {
    if(cos(angulo) <= 1 && cos(angulo) >= -1){
        return 1;
    }
        return 0;
}

int verificaTamanhoTangente(double angulo) {
    if(tan(angulo) <= 1 && tan(angulo) >= -1){
        return 1;
    }
    return 0;
}

#endif //EDUARDO_H
