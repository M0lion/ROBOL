#pragma once

#include <vector>

#include "BooleanExpression.h"
#include "Statement.h"

class While : public Statement
{
public:
	While(BooleanExpression* condition, std::vector<Statement*>* statements);
	~While();

	bool Interpret(Environment* env);
private:
	BooleanExpression* condition;
	std::vector<Statement*>* statements;
};

