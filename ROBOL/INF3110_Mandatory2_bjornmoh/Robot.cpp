#include "Robot.h"

Robot::Robot(std::vector<VarDecl*>* varDecls, Start * start, std::vector<Statement*>* stmts)
{
	this->varDecls = varDecls;
	this->start = start;
	this->stmts = stmts;
}

Robot::~Robot()
{
	if (varDecls != nullptr)
	{
		for (int i = 0; i < varDecls->size(); i++)
		{
			if ((*varDecls)[i] != nullptr)
				delete((*varDecls)[i]);
		}

		delete(varDecls);
	}
	if (start != nullptr)
		delete(start);
	if (stmts != nullptr)
	{
		for (int i = 0; i < stmts->size(); i++)
		{
			if ((*stmts)[i] != nullptr)
				delete((*stmts)[i]);
		}

		delete(stmts);
	}
}

void Robot::Interpret(Environment* env)
{
	for (int i = 0; i < varDecls->size(); i++)
	{
		(*varDecls)[i]->Interpret(env);
	}

	start->Interpret(env);

	for (int i = 0; i < stmts->size(); i++)
	{
		if (!(*stmts)[i]->Interpret(env))
			break;
	}
}
