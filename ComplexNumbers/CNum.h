#pragma once

class CNum 
{
private:
	double x;
	double y;
public:
	CNum(double = 0., double = 0.);
	CNum(const CNum &);
	~CNum();
	int set_x(double);
	int set_y(double);
	double get_x()const { return x; };
	inline double get_y()const;

	CNum add(const CNum&)const;
	CNum sub(const CNum&)const;
	CNum mul(const CNum&)const;
	CNum div(const CNum&)const;

	int Print()const;
	int Read();



};