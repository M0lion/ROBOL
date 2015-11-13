#pragma once

#include <string>
#include "Grid.h"
#include "Robot.h"

class Program
{
public:
	Program(Grid* grid, Robot* robot);
	~Program();

	std::pair<int,int> interpret();
private:
	Grid* grid;
	Robot* robot;
};

