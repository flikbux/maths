//
// Created by Elie on 21/01/2023.
//

#ifndef BIENVENUPELLACODECPP_COURBE_H
#define BIENVENUPELLACODECPP_COURBE_H

#include "point_inter.h"
#include "point.h"

#include "vector"

class Courbe {
private:
    std::vector<Point> _list_point_segment_1, _list_point_segment_2, _list_point_courbe;
    int _nb_point;
    float _t;
    std::vector<double> _mid_1_x_ls, _mid_1_y_ls, _mid_2_x_ls, _mid_2_y_ls;

public:
    Courbe(int nb_nombre, Point_inter point_inter, Point point_control_1, Point point_control_2);

    int GetNBPoint();
    std::vector<Point> GetListPointSegment1();
    std::vector<Point> GetListPointSegment2();
    std::vector<Point> GetListPointCourbe();

};


#endif //BIENVENUPELLACODECPP_COURBE_H
