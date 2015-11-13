#pragma once

#include "Number.h"

class Grid
{
public:
	Grid(Number* width, Number* height);
	~Grid();

	void Interpret(Environment* env);
private:
	Number* width;
	Number* height;
};

