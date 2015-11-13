#include "Identifier.h"

#include "Environment.h"

Identifier::Identifier(std::string identifier)
{
	id = identifier;
}


Identifier::~Identifier()
{
}

int Identifier::Interpret(Environment* env)
{
	return env->getValue(*this);
}

bool Identifier::operator==(Identifier & ident)
{
	return id == ident.id;
}
