//#include "polygon.h"
//
//
//
//Polygon::Polygon(Point p1,Point p2, GfxInfo shapeGfxInfo) :shape(shapeGfxInfo)
//{
//	point1 = p1;
//	point2 = p2;
//
//
//}
//
//Polygon::~Polygon()
//{}
//
//void Polygon::Draw(GUI* pUI) const
//{
//
//	int distance = sqrt((point1.x - point2.x) * (point1.x - point2.x) + (point1.y - point2.y) * (point1.y - point2.y));
//	POINT point3;
//	POINT point4;
//	Point array[4];
//
//	point3.x = point1.x + distance;
//	point3.y = point1.y + distance;
//	point4.x = point1.x + distance;
//	point4.y = point1.y + distance;
//	array[0] = { (point1.x,point2) };
//	array[1] = { point2.x };
//	array[2] = { point4.x };
//	array[3] = { point4.x };
//
//	long arrayY[4];
//	arrayY[0] = { point1.y };
//	arrayY[1] = { point2.y };
//	arrayY[2] = { point4.y };
//	arrayY[3] = { point4.y };
//	//Call Output::Drawpolygon to draw a Circle on the screen	
//	pUI->DrawPolygon( array[4], 4, ShpGfxInfo);
//}