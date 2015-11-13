#include "While.h"

While::While(BooleanExpression * condition, std::vector<Statement*>* statements)
{
	this->condition = condition;
	this->statements = statements;
}

While::~While()
{
	if (condition != nullptr)
		delete(condition);

	if (statements != nullptr)
	{
		for (int i = 0; i < statements->size(); i++)
		{
			if ((*statements)[i] != nullptr)
				delete((*statements)[i]);
		}

		delete(statements);
	}
}

bool While::Interpret(Environment * env)
{
	while(condition->Interpret(env))
		for (int i = 0; i < statements->size(); i++)
		{
			if (!(*statements)[i]->Interpret(env))
				return false;
		}

	return true;
}
