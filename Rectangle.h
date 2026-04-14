#pragma once
#include "IFigure2D.h"
class Rectangle : public IFigure2D {
private:
	int a;
	int b;
public:
	Rectangle(int a, int b);
	void square() override;
};