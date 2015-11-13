#include <iostream>
#include <exception>

#include "Testing.h"
#include "Environment.h"

int main(int argc, char* args[])
{
	Test::DefineTests();

	std::pair<int, int> pos;

	try
	{
		pos = Test::test1->interpret();
		printf("test1, goal x: 13, y: 52\n");
		printf("x: %d, y: %d\n", pos.first, pos.second);
	}
	catch (ROBOLException e)
	{
		printf("error: %s\n", e.what());
	}

	try
	{
		pos = Test::test2->interpret();
		printf("test2, goal x: 14, y: 17\n");
		printf("x: %d, y: %d\n", pos.first, pos.second);
	}
	catch (ROBOLException e)
	{
		printf("error: %s\n", e.what());
	}

	try
	{
		pos = Test::test3->interpret();
		printf("test3, goal x: 12, y: 15\n");
		printf("x: %d, y: %d\n", pos.first, pos.second);
	}
	catch (ROBOLException e)
	{
		printf("error: %s\n", e.what());
	}

	try
	{
		pos = Test::test4->interpret();
		printf("test4, goal OutOfBoundException\n");
		printf("x: %d, y: %d\n", pos.first, pos.second);
	}
	catch (ROBOLException e)
	{
		printf("error: %s\n", e.what());
	}

	Test::Clean();
	return 0;
}