#include "Testing.h"
#include "ArithmeticExpression.h"
#include "While.h"

Program* Test::test1 = 0;
Program* Test::test2 = 0;
Program* Test::test3 = 0;
Program* Test::test4 = 0;

void Test::DefineTest1()
{
	Grid* grid = new Grid(new Number(64), new Number(64));

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

	test1 = new Program(grid, robot);
}

void Test::DefineTest2()
{
	Grid* grid = new Grid(new Number(64), new Number(64));

	std::vector<VarDecl*>* varDecls = new std::vector<VarDecl*>();
	varDecls->push_back(
		new VarDecl(
			new Identifier("i"),
			new Number(5)));
	varDecls->push_back(
		new VarDecl(
			new Identifier("j"),
			new Number(3)));

	Start* start = new Start(new Number(23), new Number(6));

	std::vector<Statement*>* stmts = new std::vector<Statement*>();
	stmts->push_back(
		new Statement(
			Move::north,
			new ArithmeticExpression(
				new Number(3),
				ArithmeticOperator::mult,
				new Identifier("i"))));

	stmts->push_back(
		new Statement(
			Move::east, 
			new Number(15)));

	stmts->push_back(
		new Statement(
			Move::south, 
			new Number(4)));

	stmts->push_back(
		new Statement(
			Move::west, 
			new ArithmeticExpression(
				new ArithmeticExpression(
					new ArithmeticExpression(
						new Number(2),
						ArithmeticOperator::mult,
						new Identifier("i")), 
					ArithmeticOperator::plus, 
					new ArithmeticExpression(
						new Number(3),
						ArithmeticOperator::mult,
						new Identifier("j"))), 
				ArithmeticOperator::plus, 
				new Number(5))));

	stmts->push_back(
		new Statement(
			Move::stop));

	Robot* robot = new Robot(varDecls, start, stmts);

	test2 = new Program(grid, robot);
}

void Test::DefineTest3()
{
	Grid* grid = new Grid(new Number(64), new Number(64));

	std::vector<VarDecl*>* varDecls = new std::vector<VarDecl*>();
	varDecls->push_back(
		new VarDecl(
			new Identifier("i"),
			new Number(5)));
	varDecls->push_back(
		new VarDecl(
			new Identifier("j"),
			new Number(3)));

	Start* start = new Start(new Number(23), new Number(6));

	std::vector<Statement*>* stmts = new std::vector<Statement*>();
	stmts->push_back(
		new Statement(
			Move::north,
			new ArithmeticExpression(
				new Number(3),
				ArithmeticOperator::mult,
				new Identifier("i"))));

	stmts->push_back(
		new Statement(
			Move::west, 
			new Number(15)));

	stmts->push_back(
		new Statement(
			Move::east, 
			new Number(4)));

	std::vector<Statement*>* whileStatements = new std::vector<Statement*>();
	whileStatements->push_back(
		new Statement(
			Move::south,
			new Identifier("j")));
	whileStatements->push_back(
		new Assignment(
			new Identifier("j"),
			new ArithmeticExpression(
				new Identifier("j"),
				ArithmeticOperator::minus,
				new Number(1))));

	stmts->push_back(new While(
		new BooleanExpression(
			new Identifier("j"),
			BooleanOperator::greater,
			new Number(0)),
		whileStatements));

	stmts->push_back(
		new Statement(
			Move::stop));

	Robot* robot = new Robot(varDecls, start, stmts);

	test3 = new Program(grid, robot);
}

void Test::DefineTest4()
{
	Grid* grid = new Grid(new Number(64), new Number(64));

	std::vector<VarDecl*>* varDecls = new std::vector<VarDecl*>();
	varDecls->push_back(
		new VarDecl(
			new Identifier("j"),
			new Number(3)));

	Start* start = new Start(new Number(1), new Number(1));

	std::vector<Statement*>* stmts = new std::vector<Statement*>();

	std::vector<Statement*>* whileStatements = new std::vector<Statement*>();
	whileStatements->push_back(
		new Statement(
			Move::north,
			new Identifier("j")));

	stmts->push_back(new While(
		new BooleanExpression(
			new Identifier("j"),
			BooleanOperator::greater,
			new Number(0)),
		whileStatements));

	stmts->push_back(
		new Statement(
			Move::stop));

	Robot* robot = new Robot(varDecls, start, stmts);

	test4 = new Program(grid, robot);
}

void Test::DefineTests()
{
	DefineTest1();
	DefineTest2();
	DefineTest3();
	DefineTest4();
}

void Test::Clean()
{
	delete(test1);
	delete(test2);
	delete(test3);
	delete(test4);
}