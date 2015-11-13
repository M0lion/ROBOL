#pragma once

#include "Expression.h"

enum ArithmeticOperator
{
	plus,minus,mult
};

class ArithmeticExpression : public Expression
{
public:
	ArithmeticExpression(Expression* left, ArithmeticOperator op, Expression* right);
	~ArithmeticExpression();

	int Interpret(Environment* env);
private:
	Expression* left;
	Expression* right;
	ArithmeticOperator op;
};

