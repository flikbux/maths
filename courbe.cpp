//
// Created by Elie on 21/01/2023.
//

#include "courbe.h"

Courbe::Courbe(int nb_point, Point_inter point_inter, Point point_control_1, Point point_control_2) {
    _nb_point = nb_point;

    float mid_1_x, mid_1_y, mid_2_x, mid_2_y, mid_courbe_1, mid_courbe_2;

    for (int i = 0; i == _nb_point + 1; i++){
        _t = i / _nb_point;

        mid_1_x = (1 - _t) * point_control_1.GetX() + _t * point_inter.GetInterPointX();
        mid_1_y = (1 - _t) * point_control_1.GetY() + _t * point_inter.GetInterPointY();

        mid_2_x = (1 - _t) * point_inter.GetInterPointX() + _t * point_control_2.GetX();
        mid_2_y = (1 - _t) * point_inter.GetInterPointY() + _t * point_control_2.GetY();

        _list_point_segment_1.emplace_back(mid_1_x, mid_1_y);
        _list_point_segment_2.emplace_back(mid_2_x, mid_2_y);

        _list_point_courbe.emplace_back(_t * mid_2_x + (1 - _t) * mid_1_x, _t * mid_2_y + (1 - _t) * mid_1_y);
        std::cout << std::to_string(_list_point_courbe[i].GetX()) << " " << std::to_string(_list_point_courbe[i].GetY()) << std::endl;
    }
}

int Courbe::GetNBPoint() {
    return _nb_point;
}

std::vector<Point> Courbe::GetListPointSegment1() {
    return _list_point_segment_1;
}

std::vector<Point> Courbe::GetListPointSegment2() {
    return _list_point_segment_2;
}

std::vector<Point> Courbe::GetListPointCourbe() {
    return _list_point_courbe;
}