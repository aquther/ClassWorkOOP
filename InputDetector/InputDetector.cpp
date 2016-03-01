#include <iostream>
#include "RegTask.h"
using namespace std;


int main()
{
	CRegTask x;
	for (int i = 0; i < 5; i++)
	{
		x.regtask((rand() % 10 + 1), (((double)rand() / RAND_MAX) * 100 + 1));

	}
	x.print();
	cout << "Total: " << x.totalPaid() << endl;
	cout << "Max Paid Rank : " << x.maxPaidActivity() << endl;

	return 0;
}

