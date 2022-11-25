
#pragma once

#include"operations/operation.h"

//Add Triangel operation class
class opAddTriangle : public operation
{
public:
	opAddTriangle(controller* pCont);
	virtual ~opAddTriangle();

	//Add Triangel to the controller
	virtual void Execute();

};
