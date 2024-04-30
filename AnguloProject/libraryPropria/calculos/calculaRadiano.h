//
// Created by eteixeira on 30/04/2024.
//

#ifndef CALCULARADIANO_H
#define CALCULARADIANO_H
    double calculaRadiano(double angulo) {
    #define  PI  3.14159265
    #include <math.h>
        double anguloRad = angulo * (PI / 180.0);
        double seno = sin(anguloRad);
        return seno;
    }
#endif //CALCULARADIANO_H
