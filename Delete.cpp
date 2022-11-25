#include "Delete.h"


#include "controller.h"
#include "GUI/GUI.h"

Delete::Delete(controller* pApp) :operation(pApp)
{
}

void Delete::ReadActionParameters()
{

}
//Execute the action
void  Delete::Execute()
{
	//This action needs to read some parameters first
	ReadActionParameters();
}

