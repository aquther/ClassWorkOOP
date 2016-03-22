#include "ArProgression.h"

AProg::AProg(double a, double d):a(a),d(d){}
double AProg::operator[](unsigned ind) 
{
	return a + (ind - 1)*d;
}
double AProg::operator()(unsigned d) 
{
	double sum;
	for (int i = 1; i <= d; i++)
	{
		sum += *this[i];
	}
	return sum;
}
