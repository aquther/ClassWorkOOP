#ifndef _COMPLEX_H
#define _COMPLEX_H
#include <iostream>

class CComplex {
private:
	double x, y;

public:
	CComplex(double = 0, double = 0);
	~CComplex();
	int setX(double = 0);
	int setY(double = 0);
	double getX() const;
	double getY() const;
	int print() const;
	int read();
	CComplex add(const CComplex &) const;
	CComplex sub(const CComplex &) const;
	CComplex multi(const CComplex &) const;
	CComplex div(const CComplex &) const;
	
	CComplex operator+(const CComplex&)const;
	CComplex operator-(const CComplex&)const;
	
	
	
	CComplex operator~()const;

	friend std::ostream& operator<<(std::ostream&, const CComplex&);
	friend CComplex operator*(const CComplex&,const CComplex&);

	CComplex operator*(double)const;
	CComplex operator^(int)const;

};
	std::ostream& operator<<(std::ostream&,const CComplex&); //remember that!
	
	CComplex operator*(const CComplex&, const CComplex&);
	CComplex operator/(const CComplex&,const CComplex&);

#endif
