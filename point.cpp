#include"point.hpp"

Point::Point(){};
Point::Point(double _x, double _y) {
    coordinates = new double[2]{_x, _y};
}

Point::~Point() {
    delete[] coordinates;
}

double Point::GetX() { return coordinates[0]; }
double Point::GetY() { return coordinates[1]; }
double* Point::Get() { return coordinates; }

void Point::SetX(double _x) { coordinates[0] = _x; }
void Point::SetY(double _y) { coordinates[1] = _y; }
void Point::Set(double _x, double _y) {
    coordinates[0] = _x;
    coordinates[1] = _y;
}
