//
// Created by eteixeira on 30/04/2024.
//

#ifndef CALCULARADIANO_H
#define CALCULARADIANO_H

#define  PI  3.14159265

    double calculaRadiano(double angulo) {
        double anguloRad = angulo * (PI / 180.0);
        return anguloRad;
    }

#endif //CALCULARADIANO_H
