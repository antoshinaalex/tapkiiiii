#include "IFigure2D.h" 
 
class Trapezoid : public IFigure2D { 
private: 
    double base1, base2, height; 
public: 
    Trapezoid(); 
    void square() override; 
}; 
