
CC = g++
CFLAGS = -std=c++0x -g

SRCS = ArithmeticExpression.cpp Assignment.cpp BooleanExpression.cpp Environment.cpp Expression.cpp Grid.cpp Identifier.cpp main.cpp Number.cpp Program.cpp ROBOLException.cpp Robot.cpp Start.cpp Statement.cpp Testing.cpp While.cpp

OBJS = $(SRCS:.c=.o)

MAIN = ROBOL

.PHONY: depend clean

all:	$(MAIN)

$(MAIN): $(OBJS) 
		$(CC) $(CFLAGS) -o $(MAIN) $(OBJS)

.c.o:
		$(CC) $(CFLAGS) -c $<  -o $@

clean:
		$(RM) *.o *~ $(MAIN)

depend: $(SRCS)
		makedepend $^