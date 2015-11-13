#include "Expression.h"

Expression::Expression(Expression * expression)
{
	this->exp = expression;
}

Expression::~Expression()
{
	if(exp != nullptr)
		delete(exp);
}

int Expression::Interpret(Environment * env)
{
	return exp->Interpret(env);
}

Expression::Expression()
{
	exp = nullptr;
}
