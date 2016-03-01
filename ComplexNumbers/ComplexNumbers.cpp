#include <iostream>
#include "CNum.h"

using namespace std;

int main()
{
	CNum p(1, 3);
	CNum q;

	q.Read();

	cout << "p + q = " << p.add(q).Print();


    return 0;
}

