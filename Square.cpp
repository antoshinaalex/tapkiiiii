#include "Square.h"
#include "Rectangle.h"
#include <iostream>

Square::Square(int a) {
	this->a = a;
}
void Square::square() {
	std::cout << "Square: " << a * a<<"\n";
}
Rectangle::Rectangle(int a, int b) {
	this->a = a;
	this->b = b;
}
void Rectangle:: square() {
	std::cout << "Square: " << a * b << "\n";
}