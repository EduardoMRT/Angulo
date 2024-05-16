//
// Created by eteixeira on 30/04/2024.
//

#ifndef EDUARDO_H
#define EDUARDO_H
#include<string.h>
#include<stdlib.h>
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
void verificaTamanho(double const angulo) {
    if (angulo <= -1 || angulo >= 1) {
        printf("\nERRO: O valor deve estar entre 1 e -1");
        exit(1);
    }
}


#endif //EDUARDO_H
