#include<iostream>
#include"point.hpp"

int main(void) {
    Point p1 = Point(-10, 10);
    Point p2 = Point(10, -10);

    std::cout<<"P1: "<<p1<<std::endl;
    std::cout<<"P2: "<<p2<<std::endl;
    
    std::cout<<"P2 - P1: "<<p2 - p1<<std::endl;
    std::cout<<"P1 + P2: "<<p1 + p2<<std::endl;

    std::cout<<"Iloczyn skalarny: "<<p1 * p2<<std::endl;
}
