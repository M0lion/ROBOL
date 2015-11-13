#include "ArithmeticExpression.h"

ArithmeticExpression::ArithmeticExpression(Expression * left, ArithmeticOperator op, Expression* right)
{
	this->left = left;
	this->right = right;
	this->op = op;
}

ArithmeticExpression::~ArithmeticExpression()
{
	if (left != nullptr)
		delete(left);
	if (right != nullptr)
		delete(right);
}

int ArithmeticExpression::Interpret(Environment * env)
{
	switch (op)
	{
		case plus: return left->Interpret(env) + right->Interpret(env);
		case minus: return left->Interpret(env) - right->Interpret(env);
		case mult: return left->Interpret(env) * right->Interpret(env);
	}

	throw "invalid operator!";
	return 0;
}
