#include "Assignment.h"

#include "Environment.h"

Assignment::Assignment(Identifier * ident, Expression * exp)
{
	this->ident = ident;
	this->exp = exp;
}

Assignment::~Assignment()
{
	if (ident != nullptr)
		delete(ident);
	if (exp != nullptr)
		delete(exp);
}

bool Assignment::Interpret(Environment * env)
{
	env->Assign(*ident, Number(exp->Interpret(env)));

	return true;
}
