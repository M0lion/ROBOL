#include "Start.h"
#include "Environment.h"

Start::Start(Expression * x, Expression * y)
{
	this->x = x;
	this->y = y;
}

Start::~Start()
{
	if (x != nullptr)
		delete(x);
	if (y != nullptr)
		delete(y);
}

void Start::Interpret(Environment * env)
{
	env->setPos(x->Interpret(env), y->Interpret(env));
}
