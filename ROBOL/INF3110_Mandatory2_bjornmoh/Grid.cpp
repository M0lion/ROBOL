#include "Grid.h"

#include "Environment.h"

Grid::Grid(Number* width, Number* height)
{
	this->width = width;
	this->height = height;
}

Grid::~Grid()
{
	delete(width);
	delete(height);
}

void Grid::Interpret(Environment * env)
{
	env->setDimensions(width->Interpret(env), height->Interpret(env));
}