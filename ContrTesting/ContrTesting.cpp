#include <iostream>
using namespace std;
class Int {
	int n;
	char c;
public:
	//Вторият параметър в конструкторите има стойност по подразбиране.
	//Тази стойност се използва при извикване без втори параметър.
	Int(unsigned up, char c = '*') :c(c) {
		n = rand() % up;
	}
	Int(int n, char c = '=') :n(n), c(c) {}
	~Int() { cout << c << " destroyed" << endl; }
	int getN() { return n; }
};
void main() {
	Int y = 55u / 2;
	cout << y.getN() << endl;
	Int z(5, 'a');
	cout << z.getN() << endl;
}
