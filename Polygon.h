#pragma once
#include "IFigure2D.h"

class Polygon : public IFigure2D {
private:
    int n;
    double side;
public:
    Polygon(int n, double side);
    double square() const override;
};