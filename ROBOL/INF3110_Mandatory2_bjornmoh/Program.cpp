#include "Program.h"

#include "Environment.h"

Program::Program(Grid * grid, Robot * robot)
{
	this->grid = grid;
	this->robot = robot;
}

Program::~Program()
{
	if (grid != nullptr)
		delete(grid);
	if (robot != nullptr)
		delete(robot);
}

std::pair<int, int> Program::interpret()
{
	Environment env;

	grid->Interpret(&env);
	robot->Interpret(&env);

	return std::pair<int, int>(env.xPos, env.yPos);
}
