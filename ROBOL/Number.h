#pragma once

#include "Expression.h"

class Number : public Expression
{
public:
	Number(int number);
	~Number();

	int Interpret(Environment* env);
private:
	int number;
};

