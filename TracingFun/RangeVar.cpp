#include "RangeVar.h"
#include <iostream>
using std::ostream;
using std::cout;
using std::endl;

RangeVar::RangeVar(double d, char* name, std::ostream& out) :d(d), name(name), out(out),maxVal(d),minVal(d)
{}
RangeVar::operator double() 
{
	return d;
}
RangeVar& RangeVar::operator=(RangeVar&obj)
{
	if(obj.maxVal)
}
RangeVar::~RangeVar();