#pragma once

#include "Program.h"

class Test
{
public:
	static Program* test1;
	static Program* test2;
	static Program* test3;
	static Program* test4;

	static void DefineTests();

	static void Clean();
private:
	static void DefineTest1();
	static void DefineTest2();
	static void DefineTest3();
	static void DefineTest4();
};
