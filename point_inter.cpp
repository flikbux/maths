//
// Created by Elie on 21/01/2023.
//

#include "point_inter.h"

Point_inter::Point_inter(Point point_a, Point point_b, Point point_c, Point point_d) {
    Equation_droite equa_a(point_a, point_b);
    Equation_droite equa_b(point_c, point_d);

    _inter_point_x = (equa_b.GetTeta() - equa_a.GetTeta()) / (equa_a.GetDelta() - equa_b.GetDelta());
    _inter_point_y = equa_a.GetDelta() * _inter_point_x + equa_a.GetTeta();

    _point_intersection.SetX(_inter_point_x);
    _point_intersection.SetY(_inter_point_y);
}

Point Point_inter::GetPointIntersection() {
    return _point_intersection;
}

double Point_inter::GetInterPointX() {
    return _inter_point_x;
}

double Point_inter::GetInterPointY() {
    return _inter_point_y;
}