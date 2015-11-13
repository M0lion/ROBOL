#pragma once

class Environment;

class Expression
{
public:
	Expression(Expression* expression);
	virtual ~Expression();
	virtual int Interpret(Environment* env);
protected:
	Expression();
private:
	Expression* exp = nullptr;
};

