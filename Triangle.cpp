#include "Triangle.h" 
 
Triangle::Triangle(double base, double height) : base(base), height(height) {} 
 
double Triangle::square() const { 
    return (base * height) / 2; 
} 
