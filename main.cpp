#include<iostream>
#include"point.hpp"

int main(void) {
    Point p1 = Point(10, 20);
    Point p2 = Point(-10, -10);

    std::cout<<"P1: "<<p1<<std::endl;
    std::cout<<"P2: "<<p2<<std::endl;
    
    double* p1_coordinates = p1.Get();
    
    std::cout<<"P1 coordinates: {x: "<<p1_coordinates[0]<<", y: "<<p1_coordinates[1]<<'}'<<std::endl;

    p1 = p2;
    p2.Set(1, 2);

    std::cout<<"P1 coordinates: {x: "<<p1_coordinates[0]<<", y: "<<p1_coordinates[1]<<'}'<<std::endl;

    std::cout<<"P1: "<<p1<<std::endl;
    std::cout<<"P2: "<<p2<<std::endl;

    // Making sure everything works well
}
