//
// Created by eteixeira on 30/04/2024.
//

#ifndef EDUARDO_H
#define EDUARDO_H
#include<string.h>
#include<stdlib.h>

    void geraLinha(void){
    printf( "\n ---------------------------------- \n");
    }

    void textoEmLinha(char* texto) {
        int tamanhoTexto = strlen(texto);
        char* traco = malloc(tamanhoTexto * 2 + 1);
        traco[0] = '\0';
        for(int i = 0; i <= tamanhoTexto; i++) {
            strcat(traco, "-");
        }
        printf("\n %s \n %s \n %s \n", traco, texto, traco);
        free(traco);
    }
#endif //EDUARDO_H
