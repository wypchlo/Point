#include"point.hpp"
#include<ostream>
#include<iostream>

Point::Point() : coordinates(new double[2]{0, 0}), x(coordinates[0]), y(coordinates[1]) {
    CalculateVectorLength();
};
Point::Point(double _x, double _y) : coordinates(new double[2]{_x, _y}), x(coordinates[0]), y(coordinates[1]) {
    CalculateVectorLength();
};

Point& Point::operator=(Point &point) {
    coordinates[0] = point.GetX();
    coordinates[1] = point.GetY();
    CalculateVectorLength();
    return *this;
}

Point Point::operator-(Point &point) {
    return Point(x - point.GetX(), y - point.GetY());
}

Point Point::operator+(Point &point) {
    return Point(x + point.GetX(), y + point.GetY());
}

std::ostream& operator<<(std::ostream& os, Point point) {
    return os<<"{x: "<<point.x<<" y: "<<point.y<<" length: "<<point.length<<'}';
}

std::istream& operator>>(std::istream& is, Point& point) {
    is>>point.x>>point.y;
    point.CalculateVectorLength();
    return is; 
}

double Point::GetX() { return coordinates[0]; }
double Point::GetY() { return coordinates[1]; }
double* Point::Get() { return coordinates; }

void Point::SetX(double _x) { 
    coordinates[0] = _x;
    CalculateVectorLength();
}
void Point::SetY(double _y) { 
    coordinates[1] = _y;
    CalculateVectorLength();
}
void Point::Set(double _x, double _y) {
    coordinates[0] = _x;
    coordinates[1] = _y;
    CalculateVectorLength();
}

Point::~Point() {
    delete[] coordinates;
}
