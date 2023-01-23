//
// Created by Elie on 21/01/2023.
//

#include "point.h"

Point::Point(int x, int y) {
    _x = x;
    _y = y;
}

int Point::GetX() {
    return _x;
}

int Point::GetY() {
    return _y;
}

void Point::SetX(int x) {
    _x = x;
}

void Point::SetY(int y) {
    _y = y;
}

void Point::Display() {
    std::cout << "(" << std::to_string(_x) << ", " << std::to_string(_y) << ")" << std::endl;
}