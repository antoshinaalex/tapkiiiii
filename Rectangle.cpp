#include "Rectangle.h" 
 
Rectangle::Rectangle(double width, double height) : width(width), height(height) {} 
 
double Rectangle::square() const { 
    return width * height; 
} 
