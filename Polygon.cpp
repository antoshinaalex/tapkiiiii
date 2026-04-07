#include "Polygon.h" 
 
 
double Polygon::square() const { 
    // Упрощённая реализация: считаем площадь как сумму квадратов сторон 
    double sum = 0; 
    for (double side : sides) { 
        sum += side * side; 
    } 
    return sum; 
} 
