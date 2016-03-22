#include "TraceFun.h"
#include <cassert>
#include <iostream>
using std::cout;
using std::endl;
using std::ostream;

TraceFun::TraceFun(char* nme, std::ostream& os):out(os)
{
	name = new char[strlen(nme) + 1];
	assert(name != NULL);
	strcpy(name, nme);
	out << "Function " << name << " starts here!\n";
}
TraceFun::~TraceFun() 
{
	out << "Function " << name << " ends here!\n";
	delete[]name;
	
}

