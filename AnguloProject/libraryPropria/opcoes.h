//
// Created by eteixeira on 30/04/2024.
//

#ifndef OPCOES_H
#define OPCOES_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "calculos/retornaSeno.h"
#include "calculos/retornaCosseno.h"
#include "calculos/retornaTangente.h"
#include "calculos/calculaRadiano.h"
#include "calculos/retornaTangente.h"

#define NUM_OPCOES 6


    char** opcoes(void) {
        char** opc = malloc(NUM_OPCOES * sizeof(char*));
        if (opc == NULL) {
            printf("Falha ao alocar memória.\n");
            return NULL;
        }

        opc[0] = strdup("Seno");
        opc[1] = strdup("Cosseno");
        opc[2] = strdup("Tangente");
        opc[3] = strdup("Secante");
        opc[4] = strdup("Cossecante");
        opc[5] = strdup("Cotangente");

        return opc;
    }

    void listaOpcoes(void) {
        char** opcStr = opcoes();
        for(int i = 0; i < NUM_OPCOES; i++) {
            printf("\n (%i) %s", i, opcStr[i]);
            free(opcStr[i]);
        }
        free(opcStr);
    }

    double opcEscolhida(int opc, double angulo) {
        double rad = calculaRadiano(angulo);
        if(opc == 0) {
            return calculaSeno(rad);
        }else if(opc == 1) {
            return calculaCosseno(rad);
        }else if(opc == 2) {
            return calculaTangente(rad);
        }
    }


#endif //OPCOES_H
