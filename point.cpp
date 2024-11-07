#include"point.hpp"
#include<ostream>
#include<iostream>

Point::Point() : coordinates(new double[2]{0, 0}), x(coordinates[0]), y(coordinates[1]) {};
Point::Point(double _x, double _y) : coordinates(new double[2]{_x, _y}), x(coordinates[0]), y(coordinates[1]) {};

Point& Point::operator=(Point &point) {
    delete[] coordinates;
    coordinates = new double[2]{point.GetX(), point.GetY()};
    return *this;
}

std::ostream& operator<<(std::ostream& os, Point& point) {
    os<<"{x: "<<point.x<<" y: "<<point.y<<'}';
    return os;
}

std::istream& operator>>(std::istream& is, Point& point) {
    is>>point.x>>point.y;
    return is; 
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

Point::~Point() {
    delete[] coordinates;
}
