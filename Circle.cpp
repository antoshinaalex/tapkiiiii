#include "Circle.h"
#include <iostream>

Circle::Circle() {
    std::cout << "Enter value of radius: ";
    std::cin >> radius;
}

void Circle::square() {
    const double PI = 3.141592653589793;
    double area = PI * radius * radius;
    std::cout << "Circle area: " << area << std::endl;
}
