#include "DoubleSim.h"
#include <assert.h>
#include <iostream>
Double::Double(double*arr, size_t sz):len(sz)
{
	a = new double[len];
	for (size_t i = 0; i < len; i++)
	{
		a[i] = arr[i];
	}
}
double* Double::get_a()const { return a; }
int Double::get_len()const { return len; }
int Double::set_a(double*arr)
{
	size_t l = sizeof(arr) / sizeof(double);
	len = l;

	if (a != NULL)
	{
		delete[]a;
		a = new double[len];
		assert(a != NULL);
		for (int i = 0; i < len; i++)
		{
			a[i] = arr[i];
		}
	}
	return 0;
}
int Double::set_len(int l) 
{
	len = l;
	return 0;
}
Double::Double(const Double&r)
{
	len = r.len;
	a = new double[len];
	for (size_t i = 0; i < len; i++)
	{
		a[i] = r.a[i];
	}

}
Double& Double::operator=(const Double&r)
{
	if(this!=&r)
	{
		if (a != NULL)
		{
			len = r.len;
			delete[]a;
			a = new double[len];
			assert(a != NULL);
			for (size_t i = 0; i < len; i++)
			{
				a[i] = r.a[i];
			}
		}

	}
	return *this;
}
Double& Double::operator+=(const Double&r)
{
	size_t l = (len < r.len) ? len : r.len;

	for (size_t i = 0; i < l; i++)
	{
		a[i] = r.a[i];
	}
	return *this;
}
Double::~Double() { delete[]a; }
Double operator+(const Double&l, const Double&r)
{
	Double tmp(l);
	tmp += r;
	return tmp;
}

std::ostream& Double::inserter(std::ostream&out)const 
{
	out << "Object lenght : " << len << std::endl;
	for (size_t i = 0; i < len; i++)
	{
		out << "a[" << i << "]= "<<a[i] << std::endl;
	}
	return out;
}
std::ostream& operator<<(std::ostream&os, const Double&obj)
{
	return obj.inserter(os);
}
