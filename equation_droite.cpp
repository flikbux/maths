//
// Created by Elie on 21/01/2023.
//

#include "equation_droite.h"

Equation_droite::Equation_droite(Point a, Point b) {
    //on defini les equation des droite (ab) et (cd)
    _delta =  (b.GetY() - a.GetY()) / (b.GetX() - a.GetX());
    _teta = b.GetY() - (_delta * b.GetX());
}

double Equation_droite::GetDelta() {
    return _delta;
}

double Equation_droite::GetTeta() {
    return _teta;
}
