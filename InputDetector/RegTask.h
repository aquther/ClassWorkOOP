#ifndef _REGTASK_H
#define _REGTASK_H


class CRegTask
{
public:

	CRegTask();
	CRegTask(int, int*, double*);
	CRegTask(const CRegTask&);
	~CRegTask();
	CRegTask& operator=(const CRegTask&);

	int regtask(int, double);
	double totalPaid()const;
	int maxPaidActivity()const;

	int print()const;
	bool operator>(const CRegTask&)const;
private:
	int n;
	int*level;
	double*paid;
};




#endif