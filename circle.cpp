#include "circle.h"



Circle::Circle(Point P1,Point P2, GfxInfo shapeGfxInfo) :shape(shapeGfxInfo)
{
	point1 = P1;
	point2 = P2;
}

Circle::~Circle()
{}

void Circle::Draw(GUI* pUI) const
{
	int rad = sqrt((point1.x - point2.x) * (point1.x - point2.x) + (point1.y - point2.y) * (point1.y - point2.y));
	//Call Output::Drawcircle to draw a Circle on the screen	
	pUI->DrawCircle(point1,rad, ShpGfxInfo);
}