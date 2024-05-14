//
// Created by eteixeira on 14/05/2024.
//

#ifndef RESUMEPRINCIPAL_H
#define RESUMEPRINCIPAL_H
#include<stdio.h>
#include "eduardo.h"
#include "opcoes.h"
#include "calculos/retornaTodos.h"


void resumeCarregaAngulo(){
    textoEmLinha("Bem vindo(a) ao Sistema de Angulos");
    textoEmLinha("O que deseja realizar?");
    listaOpcoes();

    int opc, radOrGraus, opcResultado;
    double angulo;

    scanf("%d",&opc);
    printf("Digite o valor do angulo: \n");
    scanf("%lf",&angulo);

    printf("\n O angulo esta em \n (1) Radianos \n (2) Graus \n");
    scanf("%d", &radOrGraus);
    textoEmLinha("Deseja o resultado em (1) Radianos | (2) Graus ?");
    scanf("%d",&opcResultado);
    angulo = radOrGraus == 1 ? angulo : radOrGraus == 2 ? calculaRadiano(angulo) : 0;

    system("cls"); //Só funciona no Windows (Tem que retirar se for usar no terminal da IDE)
    if(opc == 7 || opc == 8 || opc == 9 || opc == 10) {
        verificaTamanho(angulo);
        printf("%s", opcEscolhida(opc, angulo, opcResultado));
        if(opc == 10) {
            retornaTudo(angulo, opcResultado);
        }else {
            printf("%s", opcEscolhida(opc, angulo, opcResultado));
        }
    }
    else {
    printf("%s",opcEscolhida(opc, angulo, opcResultado));
    }
}

void finaliza() {
    textoEmLinha("Obrigado por utilizar o programa!");
    printf("\nPressione ENTER para sair...");
    getchar();
    getchar();
}
#endif //RESUMEPRINCIPAL_H
