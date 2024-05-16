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
#include "calculos/calculaRadiano.h"
#include "../libraryPropria/eduardo.h"

#define NUM_OPCOES 10

//Responsável por listar as opções, trabalha com ponteiros
char** opcoes(void) {
        char** opc = malloc(NUM_OPCOES * sizeof(char*));
        if (opc == NULL) {
            printf("Falha ao alocar memória.\n");
            return NULL;
        }
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

//Responsável por buscar as opções passadas o seu número
char* buscaOpcoesTxt(int const opc) {
        char** opcStr = opcoes();
        char* resultado = strdup(opcStr[opc]);
        for(int i = 0; i < NUM_OPCOES; i++) {
            free(opcStr[i]);
        }
        free(opcStr);
        return resultado;
    }

//Responsável por listar as opções
void listaOpcoes(void) {
        char** opcStr = opcoes();
        for(int i = 0; i < NUM_OPCOES; i++) {
            printf("\n (%i) %s", i+1, opcStr[i]);
            free(opcStr[i]);
        }
        free(opcStr);
    }

//Fundamental, é ele quem devolve o resultado das opções escolhidas pelo usuário
char* opcEscolhida(int opc, double const angulo, int const opcResultado) {
        opc--;
        char* retorno = (char*) calloc(256, sizeof(char)); // Aloca e inicializa a memória
        strcpy(retorno, buscaOpcoesTxt(opc));
        char numStr[50];

        if(opc == 0) {
            sprintf(numStr, " = %.4lf\n", opcResultado == 1 ? calculaSeno(angulo) : retornaAngulo(calculaSeno(angulo)));
        } else if(opc == 1) {
            sprintf(numStr, " = %.4lf\n", opcResultado == 1 ? calculaCosseno(angulo) : retornaAngulo(calculaCosseno(angulo)));
        } else if(opc == 2) {
            sprintf(numStr, " = %.4lf\n", opcResultado == 1 ? calculaTangente(angulo) : retornaAngulo(calculaTangente(angulo)));
        } else if (opc == 3) {
            sprintf(numStr, " = %.4lf\n", opcResultado == 1 ? 1/calculaCosseno(angulo) : retornaAngulo(1/calculaCosseno(angulo)));
        } else if(opc == 4){
            sprintf(numStr, " = %.4lf\n", opcResultado == 1 ? 1/calculaSeno(angulo) : retornaAngulo(1/calculaSeno(angulo)));
        } else if(opc == 5) {
            sprintf(numStr, " = %.4lf\n", opcResultado == 1 ? 1/calculaTangente(angulo) : retornaAngulo(1/calculaTangente(angulo)));
        } else if(opc == 6) {
            sprintf(numStr, " = %.4f\n", opcResultado == 1 ? asin(angulo) : retornaAngulo(asin(angulo)));
        }else if(opc == 7) {
            sprintf(numStr, " = %.4f\n", opcResultado == 1 ? acos(angulo) : retornaAngulo(acos(angulo)));
        }else if(opc == 8) {
            sprintf(numStr, " = %.4f\n", opcResultado == 1 ? atan(angulo) : retornaAngulo(atan(angulo)));
        }

        strcat(retorno, numStr);
        return retorno;
    }
#endif //OPCOES_H
