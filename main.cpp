#include "Square.h" 
 
int main() { 
    return 0; 
} 
#include "Square.h" 
#include "Rectangle.h" 
#include "Triangle.h" 
#include "Polygon.h" 
 
int main() { 
 
    Square sq(5); 
 
    Rectangle rect(4, 6); 
 
    Triangle tri(3, 4); 
 
    Polygon poly(polySides); 
 
    return 0; 
} 
#include "Square.h" 
#include "Rectangle.h" 
#include "Triangle.h" 
#include "Polygon.h" 
#include "Circle.h" 
#include "Trapezoid.h" 
 
int main() { 
 
    // Существующие фигуры 
    Square sq(5); 
    sq.square(); 
 
    Rectangle rect(4, 6); 
    rect.square(); 
 
    Triangle tri(3, 4); 
    tri.square(); 
 
    // Новые фигуры 
    Circle circle; 
    circle.square(); 
 
    Trapezoid trapezoid; 
    trapezoid.square(); 
 
    return 0; 
} 
