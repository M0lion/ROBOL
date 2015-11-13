#include "BooleanExpression.h"

BooleanExpression::BooleanExpression(Expression * left, BooleanOperator op, Expression * right)
{
	this->left = left;
	this->right = right;
	this->op = op;
}

BooleanExpression::~BooleanExpression()
{
	if (left != nullptr)
		delete(left);
	if (right != nullptr)
		delete(right);
}

int BooleanExpression::Interpret(Environment * env)
{
	switch (op)
	{
		case equal: return left->Interpret(env) == right->Interpret(env);
		case less: return left->Interpret(env) < right->Interpret(env);
		case greater: return left->Interpret(env) > right->Interpret(env);
	}
}
