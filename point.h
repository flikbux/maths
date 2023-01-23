//
// Created by Elie on 21/01/2023.
//

#ifndef BIENVENUPELLACODECPP_POINT_H
#define BIENVENUPELLACODECPP_POINT_H

#include "iostream"

class Point {
private:
    int _x;
    int _y;
public:
    Point(int x = 0, int y = 0);

    int GetX();
    int GetY();

    void SetX(int x);
    void SetY(int y);

    void Display();
};


#endif //BIENVENUPELLACODECPP_POINT_H
