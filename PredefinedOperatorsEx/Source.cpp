#include <iostream>
#include "DoubleSim.h"
using namespace std;

int main()
{
	const int len1 = 10;
	const int len2 = 5;
	double arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	double arr2[] = { 10,20,30,40,50 };
	Double obj1(arr1, len1);
	Double obj2;
	obj2.set_a(arr2);
	obj2.set_len(len2);
	cout << "Objects before : \n" << obj1 << endl << obj2 << endl;
	cout << "obj1+obj2" << obj1 + obj2 << endl;
	obj1 += obj2;
	system("pause");

	return 0;
}