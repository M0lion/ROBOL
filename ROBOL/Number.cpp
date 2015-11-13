#include "Number.h"

Number::Number(int number)
{
	this->number = number;
}

Number::~Number()
{
}

int Number::Interpret(Environment* env)
{
	return number;
}
