//
// Created by eteixeira on 30/04/2024.
//

#ifndef EDUARDO_H
#define EDUARDO_H
#include<string.h>
#include<stdlib.h>

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

char* verificaTamanho(double angulo) {
    if (angulo < 1 || angulo > 1) {
        return ("ERRO: O valor deve estar entre 1 e -1");
    } else {
        return "Validado";
    }
}


#endif //EDUARDO_H
