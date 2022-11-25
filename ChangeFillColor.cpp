#include "ChangeFillColor.h"

#include "controller.h"
#include "GUI/GUI.h"

ChangeFillColor::ChangeFillColor(controller* pApp) :operation(pApp)
{
}
void ChangeFillColor::ReadActionParameters()
{

}



void ChangeFillColor::Execute()
{
	ReadActionParameters();
}
