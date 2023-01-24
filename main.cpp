#include "point.h"
#include "point_inter.h"
#include "courbe.h"



int main(){
    //Definition des points qui portent les 2 segments
    Point a(0, 0);
    Point b(1, 2);
    Point c(3, 2);
    Point d(4, 0);

    Point_inter point_inter(a, b, c, d);

    Courbe courbe_1(30, point_inter, a, d);

    courbe_1.WriteOnFile();


};

