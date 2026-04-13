#include "Trapezoid.h"
#include <iostream>

Trapezoid::Trapezoid() {
    std::cout << "Enter value of base 1: ";
    std::cin >> base1;
    std::cout << "Enter value of base 2: ";
    std::cin >> base2;
    std::cout << "Enter value of height: ";
    std::cin >> height;
}

void Trapezoid::square() {
    double area = (base1 + base2) / 2.0 * height;
    std::cout << "Trapezoid area: " << area << std::endl;
}
