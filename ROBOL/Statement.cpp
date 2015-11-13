#include "Statement.h"

#include "Environment.h"

Statement::Statement(Move move, Expression * expression)
{
	this->move = move;
	this->exp = expression;
}

Statement::Statement(Move move)
{
	this->move = move;
	exp = nullptr;
}

Statement::~Statement()
{
	if (exp != nullptr)
		delete(exp);
}

bool Statement::Interpret(Environment * env)
{
	if (move == Move::stop)
		return false;

	int distance = exp->Interpret(env);

	switch (move)
	{
		case north: env->move(0, distance);
			break;
		case south: env->move(0, -distance);
			break;
		case east: env->move(distance, 0);
			break;
		case west: env->move(-distance, 0);
			break;
	}

	return true;
}

Statement::Statement()
{
	exp = nullptr;
}
