#pragma once
#include "IFigure2D.h"
class Square : public IFigure2D{
private:
	int a;
public:
	Square(int a);
    void square() override;
};