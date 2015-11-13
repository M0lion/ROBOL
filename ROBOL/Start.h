#pragma once

#include "Expression.h"

class Start
{
public:
	Start(Expression* x, Expression* y);
	~Start();

	void Interpret(Environment* env);
private:
	Expression* x;
	Expression* y;
};

