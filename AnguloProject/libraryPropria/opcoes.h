//
// Created by eteixeira on 30/04/2024.
//

#ifndef OPCOES_H
#define OPCOES_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "eduardo.h"
#include "calculos/retornaSeno.h"
#include "calculos/retornaCosseno.h"
#include "calculos/retornaTangente.h"
#include "../libraryPropria/eduardo.h"


#define NUM_OPCOES 10


    char** opcoes(void) {
        char** opc = malloc(NUM_OPCOES * sizeof(char*));
        if (opc == NULL) {
            printf("Falha ao alocar memória.\n");
            return NULL;
        }
        /*TODO: Realizar read.me = A função strdup é uma função da biblioteca padrão C que é usada para duplicar uma string. No entanto, ela foi descontinuada em alguns ambientes devido a possíveis riscos de segurança e não conformidade com os padrões ISO C e C++.
        A função _strdup é uma alternativa que foi introduzida para ser mais segura e estar em conformidade com os padrões ISO C e C++. Ela funciona de maneira semelhante ao strdup, mas é considerada mais segura e portável. */

        opc[0] = _strdup("Seno");
        opc[1] = _strdup("Cosseno");
        opc[2] = _strdup("Tangente");
        opc[3] = _strdup("Secante");
        opc[4] = _strdup("Cossecante");
        opc[5] = _strdup("Cotangente");
        opc[6] = _strdup("Arco Seno");
        opc[7] = _strdup("Arco Cosseno");
        opc[8] = _strdup("Arco Tangente");
        opc[9] = _strdup("Todos\n");
        return opc;
    }

char* buscaOpcoesTxt(int opc) {
        char** opcStr = opcoes();
        char* resultado = strdup(opcStr[opc]);
        for(int i = 0; i < NUM_OPCOES; i++) {
            free(opcStr[i]);
        }
        free(opcStr);
        return resultado;
    }


    void listaOpcoes(void) {
        char** opcStr = opcoes();
        for(int i = 0; i < NUM_OPCOES; i++) {
            printf("\n (%i) %s", i+1, opcStr[i]);
            free(opcStr[i]);
        }
        free(opcStr);
    }

char* opcEscolhida(int opc, double angulo) {
        opc--;
        char* retorno = (char*) calloc(256, sizeof(char)); // Aloca e inicializa a memória
        strcpy(retorno, buscaOpcoesTxt(opc));
        char numStr[50];

        if(opc == 0) {
            sprintf(numStr, " = %.4lf\n", calculaSeno(angulo));
        } else if(opc == 1) {
            sprintf(numStr, " = %.4lf\n", calculaCosseno(angulo));
        } else if(opc == 2) {
            sprintf(numStr, " = %.4lf\n", calculaTangente(angulo));
        } else if (opc == 3) {
            sprintf(numStr, " = %.4lf\n", 1/calculaCosseno(angulo));
        } else if(opc == 4){
            sprintf(numStr, " = %.4lf\n", 1/calculaSeno(angulo));
        } else if(opc == 5) {
            sprintf(numStr, " = %.4lf\n", 1/calculaTangente(angulo));
        } else if(opc == 6) {
            printf("Nada");
        }

        strcat(retorno, numStr);
        return retorno;
    }





#endif //OPCOES_H
