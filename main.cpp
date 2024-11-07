#include<iostream>
#include"point.hpp"

int main(void) {
    Point punkt = Point(1, 2);
    double* coordinates = punkt.Get();
    for(short i = 0; i < 2; i++) {
        std::cout<<coordinates[i]<<' ';
    }
}
