#pragma once

#include "Expression.h"

enum Move
{
	north, south, east, west, stop
};

class Statement
{
public:
	Statement(Move move, Expression* expression);
	Statement(Move move);

	virtual ~Statement();

	virtual bool Interpret(Environment* env);

private:
	Move move;
	Expression* exp;
protected:
	Statement();
};

