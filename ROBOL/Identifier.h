#pragma once

#include <string>
#include "Expression.h"

class Identifier : public Expression
{
public:
	Identifier(std::string identifier);
	~Identifier();

	int Interpret(Environment* env);

	bool operator==(Identifier& ident);

private:
	std::string id;
};

