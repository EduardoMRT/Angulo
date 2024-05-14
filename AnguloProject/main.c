//
// Created by eteixeira on 30/04/2024.
//

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include "libraryPropria/resumePrincipal.h"

void carregaAngulo(void) {
    resumeCarregaAngulo();
}

int main(void) {
    int opc;
    do {
        carregaAngulo();
        printf("\n Deseja reiniciar o programa?\n (1) Sim \n (2) Nao \n");
        scanf_s("%d", &opc);
        system("cls"); //Só funciona no Windows Comentar caso uso no terminal IDE ou Linux
    }while(opc == 1);
    finaliza();
    return 0;
}