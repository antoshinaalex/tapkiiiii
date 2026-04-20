#include "Polygon.h"
#include <cmath>

Polygon::Polygon(int n, double side) : n(n), side(side) {}

double Polygon::square() const {
    return (n * side * side) / (4.0 * std::tan(M_PI / n));
}