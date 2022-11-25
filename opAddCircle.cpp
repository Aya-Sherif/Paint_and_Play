#include "opAddCircle.h"
#include "circle.h"

#include "controller.h"

#include "GUI/GUI.h"

opAddCircle::opAddCircle(controller* pCont) :operation(pCont)
{}
opAddCircle::~opAddCircle()
{}

//Execute the operation
void opAddCircle::Execute()
{
	Point P1, P2;


	//Get a Pointer to the Input / Output Interfaces
	GUI* pUI = pControl->GetUI();

	pUI->PrintMessage("New Circle: Click at the center ");
	//Read point and store in point P1
	pUI->GetPointClicked(P1.x, P1.y);

	string msg = "The Start poiint is at (" + to_string(P1.x) + ", " + to_string(P1.y) + " )";
	msg += " ... click at any point in the edge of the circle";
	pUI->PrintMessage(msg);
	//Read end point and store in point P2
	pUI->GetPointClicked(P2.x, P2.y);
	pUI->ClearStatusBar();

	//Preapre Circle parameters
	GfxInfo CircleGfxInfo;

	//get drawing, filling colors and pen width from the interface
	CircleGfxInfo.DrawClr = pUI->getCrntDrawColor();
	CircleGfxInfo.FillClr = pUI->getCrntFillColor();
	CircleGfxInfo.BorderWdth = pUI->getCrntPenWidth();


	CircleGfxInfo.isFilled = false;	//default is not filled
	CircleGfxInfo.isSelected = false;	//defualt is not selected


	//Create a Circle with the above parameters
	Circle* C= new Circle(P1, P2, CircleGfxInfo);

	//Get a pointer to the graph
	Graph* pGr = pControl->getGraph();

	//Add the Cicle to the list of shapes
	pGr->Addshape(C);

}
