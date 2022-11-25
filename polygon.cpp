#include "polygon.h"



Polygon::Polygon(Point p1,Point p2, GfxInfo shapeGfxInfo) :shape(shapeGfxInfo)
{
	point1 = p1;
	point2 = p2;


}

Polygon::~Polygon()
{}

void Polygon::Draw(GUI* pUI) const
{

	int distance = sqrt((point1.x - point2.x) * (point1.x - point2.x) + (point1.y - point2.y) * (point1.y - point2.y));
	Point array[4];
	Point point3;
	Point point4;
	point3.x = point1.x + distance;
	point3.y = point1.y + distance;
	point4.x = point1.x + distance;
	point4.y = point1.y + distance;
	array[0] = { point1 };
	array[1] = { point2 };
	array[2] = { point3 };
	array[3] = { point4 };


	//Call Output::Drawpolygon to draw a Circle on the screen	
	pUI->DrawPolygon(  array, 4, ShpGfxInfo);
}
