#pragma once

#include "Statement.h"

#include "Identifier.h"
#include "Expression.h"

class Assignment : public Statement
{
public:
	Assignment(Identifier* ident, Expression* exp);
	~Assignment();

	bool Interpret(Environment* env);
private:
	Identifier* ident;
	Expression* exp;
};

