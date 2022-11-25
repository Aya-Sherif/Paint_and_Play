#include "opAddTriangel.h"

#include "Triangel.h"

#include "controller.h"

#include "GUI/GUI.h"

opAddTriangle::opAddTriangle(controller* pCont) :operation(pCont)
{}
opAddTriangle::~opAddTriangle()
{}

//Execute the operation
void opAddTriangle::Execute()
{
	Point P1, P2,P3;

	//Get a Pointer to the Input / Output Interfaces
	GUI* pUI = pControl->GetUI();

	pUI->PrintMessage("New Line: Click at the first corner");
	//Read start point and store in point P1
	pUI->GetPointClicked(P1.x, P1.y);

	string msg = "The Start poiint is at (" + to_string(P1.x) + ", " + to_string(P1.y) + " )";
	msg += " ... Click at seond corner";
	pUI->PrintMessage(msg);
	pUI->GetPointClicked(P2.x, P2.y);

	msg = "The Start poiint is at (" + to_string(P2.x) + ", " + to_string(P2.y) + " )";
	msg += " ... Click at the third corner";
	pUI->PrintMessage(msg);
	//Read end point and store in point P2
	pUI->GetPointClicked(P3.x, P3.y);
	pUI->ClearStatusBar();

	//Preapre Triangel parameters
	GfxInfo triangelGfxInfo;

	//get drawing, filling colors and pen width from the interface
	triangelGfxInfo.DrawClr = pUI->getCrntDrawColor();
	triangelGfxInfo.FillClr = pUI->getCrntFillColor();
	triangelGfxInfo.BorderWdth = pUI->getCrntPenWidth();


	triangelGfxInfo.isFilled = false;	//default is not filled
	triangelGfxInfo.isSelected = false;	//defualt is not selected


	//Create a line with the above parameters
	Triangle* T = new Triangle(P1, P2,P3, triangelGfxInfo);

	//Get a pointer to the graph
	Graph* pGr = pControl->getGraph();

	//Add the line to the list of shapes
	pGr->Addshape(T);

}
