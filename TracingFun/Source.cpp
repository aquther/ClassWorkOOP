#include <iostream>
#include "TraceFun.h"
using namespace std;
void tst123(int n)
{
	TraceFun x("tst123", cout);
	cout << "\n\tTesting trace objects:\n";
	cout << n;
}


int main()
{

	tst123(33);


	return 0;
}