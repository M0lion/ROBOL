#include "Environment.h"

#include <exception>
#include <sstream>

Environment::Environment(int width, int height)
{
	this->width = width;
	this->height = height;
}

Environment::~Environment()
{
}

void Environment::Assign(Identifier& ident, Number value)
{
	for (int i = 0; i < variables.size(); i++)
	{
		if (variables[i].first == ident)
		{
			variables[i].second = value;
			return;
		}
	}

	variables.push_back(Var(ident, value));
}

int Environment::getValue(Identifier & ident)
{
	for (int i = 0; i < variables.size(); i++)
	{
		if (variables[i].first == ident)
		{
			return variables[i].second.Interpret(this);
		}
	}

	throw std::exception("undefined variable!");
}

void Environment::setDimensions(int w, int h)
{
	width = w;
	height = h;
}

void Environment::setPos(int x, int y)
{
	xPos = x;
	yPos = y;
}

void Environment::move(int x, int y)
{
	xPos += x;
	yPos += y;

	if (xPos > width - 1 || yPos > height - 1 || xPos < 0 || yPos < 0)
	{
		std::stringstream error;
		error << "OutOfBoundsException, move (" << x << ", " << y << ") to position (" << xPos << "," << yPos << ")";
		throw std::exception(error.str().c_str());
	}
}
