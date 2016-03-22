#include "Counting.h"
#include <iostream>

CountVar::CountVar(double a, char* b, std::ostream& out):d(a),name(b),out(out){}
CountVar::operator double() 
{
	cnt_expression++;
	return d;
}
CountVar& CountVar::operator=(CountVar&obj) 
{
	cnt_assignment++;
	if (this != &obj)
	{
		d = obj.d;

	}
	return *this;
}
char* CountVar::get_Name() { return name; }
CountVar::~CountVar()
{
	out << "Object " << name << " with value " << d << " has been assigned " << cnt_assignment << " times and in expressions " << cnt_expression << " times.\n";
}