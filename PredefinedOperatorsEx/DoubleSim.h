#ifndef _DOUBLESIM_H
#define _DOUBLESIM_H
#include <iostream>
#include <iomanip>
class Double {
private:
	friend Double operator+(const Double&, const Double&);
	double* a;
	size_t len;
public:
	Double(double* =0,size_t=0);
	double* get_a()const;
	int get_len()const;
	int set_a(double*);
	int set_len(int=0);
	Double(const Double&);
	Double& operator=(const Double&);
	Double& operator+=(const Double&);
	~Double();
	std::ostream& inserter(std::ostream&)const;
	double operator[](int ind)const
	{
		//assert(ind >= 0);
		return a[ind];
	}

};

Double operator+(const Double&, const Double&);
std::ostream& operator<<(std::ostream&, const Double&);
#endif