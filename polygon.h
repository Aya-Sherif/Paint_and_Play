#pragma once
#include "Shapes/Shape.h"

class Polygon : public shape
{
private:
	Point point1;
	Point point2;
	
	
public:
	Polygon(Point ,Point, GfxInfo shapeGfxInfo);
	virtual ~Polygon();
	virtual void Draw(GUI* pUI) const;
};


