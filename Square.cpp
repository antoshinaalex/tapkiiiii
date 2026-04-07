#include "Square.h" 
 
Square::Square(double side) : side(side) {} 
 
double Square::square() const { 
    return side * side; 
} 
