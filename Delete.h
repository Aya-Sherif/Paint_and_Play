#pragma once 

#ifndef DELETE_H
#define DELETE_H

#include "operations/operation.h"
class Delete : public operation
{
public:
	Delete(controller* pApp);

	//Reads rectangle parameters
	virtual void ReadActionParameters();

	//Add rectangle to the ApplicationManager
	virtual void Execute();

};

#endif