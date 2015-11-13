#pragma once

#include <vector>
#include "Identifier.h"
#include "Number.h"

typedef std::pair<Identifier, Number> Var;

class Environment
{
public:
	Environment(int width = 0, int height = 0);
	~Environment();

	void Assign(Identifier& ident, Number value);
	int getValue(Identifier& ident);

	void setDimensions(int w, int h);

	void setPos(int x, int y);
	void move(int x, int y);

	int width;
	int height;

	int xPos; 
	int yPos;
private:
	std::vector<Var> variables;
};