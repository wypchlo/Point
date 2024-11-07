#include "point.hpp"

Point::Point(){};
Point::Point(double _x, double _y) {
    x = _x;
    y = _y;
}

double Point::GetX() { return x; }
double Point::GetY() { return y; }

void Point::SetX(double _x) { x = _x; }
void Point::SetY(double _y) { y = _y; }
void Point::Set(double _x, double _y) {
    x = _x;
    y = _y;
}
