//
// Created by eteixeira on 30/04/2024.
//

#define _CRT_SECURE_NO_WARNINGS

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
    printf("%.4lf", opcEscolhida(opc, angulo));

    return 0;
}

void reloadAngulo(void){
    int opc;
    printf("\n Deseja recomeçar o programa?\n (1) Sim \n (2) Não");
    scanf_s("%d", &opc);
    if(opc == 1){
        main();
    }else if(opc == 2){
        printf("\n Obrigado(a) por utilizar o programa!");
    }else{
        printf("\n Opção inválida, por favor digite 1 ou 2");
        reloadAngulo;
    }
    //TODO: Trocar ultimo printf para uma função que retorne em vermelho
}


