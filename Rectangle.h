#include "IFigure2D.h" 
 
class Rectangle : public IFigure2D { 
private: 
    double width; 
    double height; 
public: 
    Rectangle(double width, double height); 
    double square() const override; 
}; 
