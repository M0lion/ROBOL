#pragma once

#include "Expression.h"

enum BooleanOperator
{
	equal, less, greater
};

class BooleanExpression : public Expression
{
public:
	BooleanExpression(Expression* left, BooleanOperator op, Expression* right);
	~BooleanExpression();

	int Interpret(Environment* env);
private:
	Expression* left;
	Expression* right;
	BooleanOperator op;
};

