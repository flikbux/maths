//
// Created by Elie on 21/01/2023.
//

#ifndef BIENVENUPELLACODECPP_POINT_INTER_H
#define BIENVENUPELLACODECPP_POINT_INTER_H

#include "equation_droite.h"

class Point_inter {
private:
    Point _point_intersection;
    double _inter_point_x;
    double _inter_point_y;

public:
    Point_inter(Point point_a, Point point_b, Point point_c, Point point_d);

    Point GetPointIntersection();
    double GetInterPointX();
    double GetInterPointY();
};


#endif //BIENVENUPELLACODECPP_POINT_INTER_H
