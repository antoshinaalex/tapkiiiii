#include "IFigure2D.h" 
 
class Triangle : public IFigure2D { 
private: 
    double base; 
    double height; 
public: 
    Triangle(double base, double height); 
    double square() const override; 
}; 
