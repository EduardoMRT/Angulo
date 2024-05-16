//
// Created by Eduks on 06/05/2024.
//

#ifndef CALCULAANGULO_H
#define CALCULAANGULO_H

#define  PI  3.14159265

    double retornaAngulo(double const radianos){
        double const angulo = radianos * 180 / PI;
        return angulo;
    }

#endif //CALCULAANGULO_H
