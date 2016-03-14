#include <iostream>
#include "Complex.h"
using namespace std;

int main() {
	CComplex a(1, 3), b(4, 3);
	/*cout << "a+b = ";
	(a.add(b)).print();
	cout << endl;
	cout << "a-b = ";
	(a.sub(b)).print();
	cout << endl;
	cout << "a*b = ";
	(a.multi(b)).print();
	cout << endl;
	cout << "a/b = ";
	(a.div(b)).print();
	cout << endl;
	*/
	cout << a;
	cout << b;
	cout << a + b;
	cout << a*b;
	cout << a / b;
	cout << (a ^ 2);
	return 0;
}

