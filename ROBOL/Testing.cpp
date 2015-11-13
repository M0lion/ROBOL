#include "Testing.h"
#include "ArithmeticExpression.h"

void DefineTest1()
{
	std::vector<VarDecl*>* varDecls = new std::vector<VarDecl*>();

	Start* start = new Start(new Number(23), new Number(30));

	std::vector<Statement*>* stmts = new std::vector<Statement*>();
	stmts->push_back(
		new Statement(
			Move::west,
			new Number(15)));

	stmts->push_back(
		new Statement(
			Move::south, 
			new Number(15)));

	stmts->push_back(
		new Statement(
			Move::east, 
			new ArithmeticExpression(
				new Number(2), 
				ArithmeticOperator::plus, 
				new Number(3))));

	stmts->push_back(
		new Statement(
			Move::north, 
			new ArithmeticExpression(
				new Number(10), 
				ArithmeticOperator::plus, 
				new Number(27))));

	stmts->push_back(
		new Statement(
			Move::stop));

	Robot* robot = new Robot(varDecls, start, stmts);

	Grid* grid = new Grid(new Number(64), new Number(64));

	test1 = new Program(grid, robot);
}

void DefineTests()
{

}
