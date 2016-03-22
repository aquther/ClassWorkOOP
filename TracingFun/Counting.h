#ifndef COUNTING_H
#define COUNTING_H

#include <iostream>

class CountVar
{
public:
	CountVar(double = 0,char* = ".", std::ostream& = std::cout);
	operator double();
	CountVar& operator=(CountVar&);
	char* get_Name();
	~CountVar();
private:
	double d;
	char* name;
	std::ostream& out;
	size_t cnt_assignment;
	size_t cnt_expression;
};

#endif