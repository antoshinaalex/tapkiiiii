#include "IFigure2D.h" 
 
class Circle : public IFigure2D { 
private: 
    double radius; 
public: 
    Circle(); 
    void square() override; 
}; 
