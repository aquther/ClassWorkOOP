#ifndef TRACEFUN_H
#define TRACEFUN_H

#include <iostream>

class TraceFun
{
public:
	TraceFun(char* ="", std::ostream& = std::cout);
	~TraceFun();
private:
	char*name;
	std::ostream& out;




};

#endif