#include "opAddLine.h"
#include "line.h"

#include "controller.h"

#include "GUI/GUI.h"

opAddLine::opAddLine(controller* pCont) :operation(pCont)
{}
opAddLine::~opAddLine()
{}

//Execute the operation
void opAddLine::Execute()
{
	Point P1, P2;

	//Get a Pointer to the Input / Output Interfaces
	GUI* pUI = pControl->GetUI();

	pUI->PrintMessage("New Line: Click at start point");
	//Read start point and store in point P1
	pUI->GetPointClicked(P1.x, P1.y);

	string msg = "The Start poiint is at (" + to_string(P1.x) + ", " + to_string(P1.y) + " )";
	msg += " ... Click at end point";
	pUI->PrintMessage(msg);
	//Read end point and store in point P2
	pUI->GetPointClicked(P2.x, P2.y);
	pUI->ClearStatusBar();

	//Preapre line parameters
	GfxInfo lineGfxInfo;

	//get drawing, filling colors and pen width from the interface
	lineGfxInfo.DrawClr = pUI->getCrntDrawColor();
	lineGfxInfo.FillClr = pUI->getCrntFillColor();
	lineGfxInfo.BorderWdth = pUI->getCrntPenWidth();


	lineGfxInfo.isFilled = false;	//default is not filled
	lineGfxInfo.isSelected = false;	//defualt is not selected


	//Create a line with the above parameters
	Line *L = new Line(P1, P2, lineGfxInfo);

	//Get a pointer to the graph
	Graph* pGr = pControl->getGraph();

	//Add the line to the list of shapes
	pGr->Addshape(L);

}
