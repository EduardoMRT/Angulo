//
// Created by eteixeira on 30/04/2024.
//

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "libraryPropria/eduardo.h"
#include "libraryPropria/opcoes.h"
#include "libraryPropria/calculos/retornaTodos.h"



void carregaAngulo(void) {
    textoEmLinha("Bem vindo(a) ao Sistema de Angulos");
    textoEmLinha("O que deseja realizar?");
    listaOpcoes();

    int opc;
    double angulo;
    scanf("%d",&opc);
    printf("Digite o valor do angulo: \n");
    scanf("%lf",&angulo);

    if(opc == 7) {
        retornaTudo(angulo);
    }else {
        opcEscolhida(opc, angulo);
    }
}

int main(void) {
    int opc;
    do {
        carregaAngulo();
        printf("\n Deseja reiniciar o programa?\n (1) Sim \n (2) Nao \n");
        scanf_s("%d", &opc);
    }while(opc == 1);

    textoEmLinha("\n Obrigado(a) por utilizar o programa!");
    printf("\nPressione ENTER para sair...");
    getchar();
    getchar();
    return 0;
}



