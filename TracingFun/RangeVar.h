#ifndef RANGEVAR_H
#define RANGEVAR_H

#include <iostream>

class RangeVar
{
public:
	RangeVar(double = 0, char* ="", std::ostream& =std::cout);
	operator double();
	RangeVar& operator=(RangeVar&);
	~RangeVar();
private:
	double d;
	char* name;
	std::ostream& out;
	double maxVal;
	double minVal;


};


#endif