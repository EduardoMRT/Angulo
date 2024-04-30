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

#define NUM_OPCOES 7


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
        opc[6] = strdup("Todos");

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
        }else if (opc == 3) {
            return 1/calculaCosseno(rad);
        }else if(opc == 4){
            return 1/calculaSeno(rad);
        }else if(opc == 5) {
            return 1/calculaTangente(rad);
        }else if(opc == 6) {
            double i[6];
            i[0] = calculaSeno(rad);
            i[1] = calculaCosseno(rad);
            i[2] = calculaTangente(rad);
            i[3] = 1/calculaCosseno(rad);
            i[4] = 1/calculaSeno(rad);
            i[5] = 1/calculaTangente(rad);
            for(int aux = 0; aux <= 5; aux++) {
                return i[aux];
            }
        }
    }


#endif //OPCOES_H
