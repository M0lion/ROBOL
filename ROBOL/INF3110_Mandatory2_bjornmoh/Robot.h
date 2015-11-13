#pragma once

#include <vector>
#include "Start.h"
#include "Statement.h"
#include "Assignment.h"

typedef Assignment VarDecl;

class Robot
{
public:
	Robot(std::vector<VarDecl*>* varDecls, Start* start, std::vector<Statement*>* stmts);
	~Robot();

	void Interpret(Environment* env);
private:
	std::vector<VarDecl*>* varDecls;
	Start* start;
	std::vector<Statement*>* stmts;
};

