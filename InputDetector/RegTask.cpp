#include "RegTask.h"
#include <iostream>
#include <cassert>

CRegTask::CRegTask() :n(0), level(NULL), paid(NULL) {}

CRegTask::CRegTask(int size, int* l, double* p)
{
	n = size;
	level = new int[n];
	paid = new double[n];

	for (unsigned i = 0; i < n; i++)
	{
		level[i] = l[i];
		paid[i] = p[i];
	}
}
CRegTask::CRegTask(const CRegTask&obj)
{
	n = obj.n;
	level = new int[n];
	paid = new double[n];

	for (unsigned i = 0; i < n; i++)
	{
		level[i] = obj.level[i];
		paid[i] = obj.paid[i];
	}
}
CRegTask::~CRegTask()
{
	delete[]level;
	delete[]paid;
}
CRegTask& CRegTask::operator=(const CRegTask&obj)
{
	if (this != &obj)
	{
		delete[]paid;
		delete[]level;


		n = obj.n;
		level = new int[n];
		paid = new double[n];

		assert(level != NULL);
		assert(paid != NULL);
		for (unsigned i = 0; i < n; i++)
		{
			level[i] = obj.level[i];
			paid[i] = obj.paid[i];
		}
	}
	return *this;
}

int  CRegTask::regtask(int l, double p)
{
	if (n == 0)
	{
		n = 1;
		level = new int[n];
		paid = new double[n];
		level[n - 1] = l;
		paid[n - 1] = p;
	}
	else {
		n += 1;
		int *nl = new int[n + 1];
		double *np = new double[n + 1];

		for (int i = 0; i < n - 1; i++)
		{
			nl[i] = level[i];
			np[i] = paid[i];
		}
		nl[n - 1] = l;
		np[n - 1] = p;
		delete[]level;
		delete[]paid;

		level = nl;
		paid = np;
	}
	return 0;
}
double CRegTask::totalPaid()const
{
	double tpaid = 0;
	for (int i = 0; i < n; i++)
	{
		tpaid += paid[i];
	}
	return tpaid;
}
int CRegTask::maxPaidActivity()const
{
	assert(n > 0);
	double mpaid = paid[0];
	int ind = 0;
	for (int i = 1; i < n; i++)
	{
		if (mpaid < paid[i])
		{
			mpaid = paid[i];
			ind = i;

		}
	}

	return level[ind];
}
int CRegTask::print()const
{
	std::cout << "Activities made : " << n << std::endl;
	for (int i = 0; i < n; i++)
	{
		std::cout << "For activity level" << level[i] << " granted " << paid[i] << std::endl;
	}

	return 0;
}
bool CRegTask::operator>(const CRegTask&a)const
{
	return (this->maxPaidActivity() > a.maxPaidActivity());
}