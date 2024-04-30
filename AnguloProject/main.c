//
// Created by eteixeira on 30/04/2024.
//

#include <stdio.h>
#include "libraryPropria/eduardo.h"
#include "libraryPropria/opcoes.h"

int main(void) {
    textoEmLinha("Bem vindo(a) ao Sistema de Angulos");
    textoEmLinha("O que deseja realizar?");
    listaOpcoes();

    int opc;
    double angulo;
    scanf("%d",&opc);
    printf("Digite o valor do angulo: \n");
    scanf("%lf",&angulo);
    opcEscolhida(opc, angulo);

    return 0;
}


