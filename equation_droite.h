//
// Created by Elie on 21/01/2023.
//

#ifndef BIENVENUPELLACODECPP_EQUATION_DROITE_H
#define BIENVENUPELLACODECPP_EQUATION_DROITE_H

#include "point.h"

class Equation_droite {
private:
    double _delta;
    double _teta;

public:
    Equation_droite(Point a, Point b);

    double GetDelta();
    double GetTeta();
};


#endif //BIENVENUPELLACODECPP_EQUATION_DROITE_H
