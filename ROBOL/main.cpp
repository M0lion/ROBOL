//#define _CRTDBG_MAP_ALLOC
//#include <stdlib.h>
//#include <crtdbg.h>

#define _CRTDBG_MAP_ALLOC
#include <crtdbg.h>
#ifdef _DEBUG
#define DEBUG_NEW new(_NORMAL_BLOCK, __FILE__, __LINE__)
#define new DEBUG_NEW
#endif

#include <iostream>
#include <exception>

#include "Testing.h"

int main(int argc, char* args[])
{
	

	std::pair<int, int> pos;

	try
	{
		pos = test1->interpret();
		printf("x: %d, y: %d\n", pos.first, pos.second);
	}
	catch (std::exception e)
	{
		printf("error: %s\n", e.what());
	}

	printf("\n");
	system("pause");

	_CrtDumpMemoryLeaks();
	return 0;
}