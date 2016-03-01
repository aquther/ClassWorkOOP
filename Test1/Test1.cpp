#include <iostream>
#include "Human.h"
using namespace std;


int main()
{
	int n;
	cout << "Enter amount of humans :\n";
	cin >> n;
	Human *people = new Human[n];

	for (int i = 0; i < n; i++)
	{
		people[i].read();
	}

	for (int i = 0; i < n; i++)
	{
		cout << "Human number " << i + 1 << endl;
		people[i].printbmi();
	}


    return 0;
}

