#include "point.hpp"

Point::Point(){};
Point::Point(float _x, float _y) {
    x = _x;
    y = _y;
}

float Point::GetX() { return x; }
float Point::GetY() { return y; }

void Point::SetX(float _x) { x = _x; }
void Point::SetY(float _y) { y = _y; }
void Point::Set(float _x, float _y) {
    x = _x;
    y = _y;
}
