//
// Created by eteixeira on 30/04/2024.
//

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include "libraryPropria/eduardo.h"
#include "libraryPropria/opcoes.h"
#include "libraryPropria/calculos/retornaTodos.h"
#include "libraryPropria/calculos/calculaRadiano.h"
#include "libraryPropria/calculos/calculaAngulo.h"

void carregaAngulo(void) {
    textoEmLinha("Bem vindo(a) ao Sistema de Angulos");
    textoEmLinha("O que deseja realizar?");
    listaOpcoes();

    int opc, radOrGraus;
    double angulo;

    scanf("%d",&opc);
    printf("Digite o valor do angulo: \n");
    scanf("%lf",&angulo);

    printf("\n O angulo esta em \n (1) Radianos \n (2) Graus \n");
    scanf("%d", &radOrGraus);

    angulo = radOrGraus == 1 ? angulo : radOrGraus == 2 ? calculaRadiano(angulo) : 0;

    //system("cls"); //Só funciona no Windows (Tem que retirar se for usar no terminal da IDE)
    if(opc == 10) {
        retornaTudo(angulo);
    }else {
        printf("%s",opcEscolhida(opc, angulo));
    }
    if(opc == 7 || opc == 8 || opc == 9 || opc == 10) {
        angulo = ArcoSenoCossenoTangente(radOrGraus, angulo);
        verificaTamanho(angulo);
        if(opc == 10) {
            retornaTudo(angulo);
        }else {
            printf("%s", opcEscolhida(opc, angulo));
        }
    }
}

int main(void) {
    int opc;
    do {
        carregaAngulo();
        printf("\n Deseja reiniciar o programa?\n (1) Sim \n (2) Nao \n");
        scanf_s("%d", &opc);
        system("cls"); //Só funciona no Windows
    }while(opc == 1);

    textoEmLinha("Obrigado por utilizar o programa!");
    printf("\nPressione ENTER para sair...");
    getchar();
    getchar();
    return 0;
}