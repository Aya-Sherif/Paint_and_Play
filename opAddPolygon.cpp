//#include "opAddPolygon.h"
//#include "polygon.h"
//
//#include "controller.h"
//
//#include "GUI/GUI.h"
//
//opAddPolygon::opAddPolygon(controller* pCont) :operation(pCont)
//{}
//opAddPolygon::~opAddPolygon()
//{}
//
////Execute the operation
//void opAddPolygon::Execute()
//{
//	Point P1, P2;
//
//
//	//Get a Pointer to the Input / Output Interfaces
//	GUI* pUI = pControl->GetUI();
//
//	pUI->PrintMessage("New Circle: Click at the first point ");
//	//Read point and store in point P1
//	pUI->GetPointClicked(P1.x, P1.y);
//
//	string msg = "The Start poiint is at (" + to_string(P1.x) + ", " + to_string(P1.y) + " )";
//	msg += " ... click at the second point";
//	pUI->PrintMessage(msg);
//	//Read end point and store in point P2
//	pUI->GetPointClicked(P2.x, P2.y);
//	pUI->ClearStatusBar();
//
//	//Preapre Circle parameters
//	GfxInfo PolygonGfxInfo;
//
//	//get drawing, filling colors and pen width from the interface
//	PolygonGfxInfo.DrawClr = pUI->getCrntDrawColor();
//	PolygonGfxInfo.FillClr = pUI->getCrntFillColor();
//	PolygonGfxInfo.BorderWdth = pUI->getCrntPenWidth();
//
//
//	PolygonGfxInfo.isFilled = false;	//default is not filled
//	PolygonGfxInfo.isSelected = false;	//defualt is not selected
//
//
//	//Create a Circle with the above parameters
//	Polygon* P = new Polygon(P1, P2, PolygonGfxInfo);
//
//	//Get a pointer to the graph
//	Graph* pGr = pControl->getGraph();
//
//	//Add the Cicle to the list of shapes
//	pGr->Addshape(P);
//
//}
