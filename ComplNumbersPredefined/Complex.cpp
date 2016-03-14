#include "Complex.h"
#include <iostream>


CComplex::CComplex(double x, double y) :x(x), y(y) {
}

CComplex::~CComplex() {
	//std::cout << x << "+" << y << "i was destroyed. \n";
}

int CComplex::setX(double x) {
	this->x = x;
	return 0;
}

int CComplex::setY(double y) {
	this->y = y;
	return 0;
}

double CComplex::getX() const {
	return x;
}

double CComplex::getY() const {
	return y;
}

int CComplex::print() const {
	std::cout << x << "+" << y << "i";
	return 0;
}

int CComplex::read() {
	std::cout << "Enter real part:";
	std::cin >> x;
	std::cout << "Enter img part: ";
	std::cin >> y;
	return 0;
}

CComplex CComplex::add(const CComplex & r) const {
	return CComplex(x + r.x, y + r.y);

}

CComplex CComplex::sub(const CComplex & r) const {
	CComplex tmp(x - r.y, y - r.y);
	return tmp;

}

CComplex CComplex::multi(const CComplex & r) const {
	CComplex tmp;
	tmp = CComplex(x*r.y - y*r.x, x*r.y + y*r.x);
	return tmp;
}

CComplex CComplex::div(const CComplex & r) const {
	CComplex tmp;
	double d = r.x*r.x + r.y*r.y;
	tmp = multi(CComplex(r.x, -r.y));
	return CComplex(tmp.x / d, tmp.y / d);
}

CComplex CComplex::operator+(const CComplex&s)const
{
	return CComplex(x + s.x, y + s.y);
}

CComplex CComplex::operator-(const CComplex&s)const
{
	return CComplex(x - s.x, y - s.y);
}

CComplex operator*(const CComplex&f, const CComplex&s)
{
	return CComplex(f.x*s.y - f.y*s.x, f.x*s.y + f.y*s.x);
}
CComplex operator/(const CComplex& l,const CComplex&r) 
{
	CComplex tmp;
	double d = r.getX()*r.getX() + r.getY()*r.getY();
	tmp = l*(~r);
	return CComplex(tmp.getX()/d,tmp.getY()/d);
}

CComplex CComplex::operator~()const
{
	return CComplex(x, -y);
}

std::ostream& operator<<(std::ostream&out, const CComplex&r)
{
	out << "(" << r.x << " + " << r.y << "i)" << std::endl;
	return out;
}

CComplex CComplex::operator*(double d)const 
{
	return CComplex(x*d, y*d);
}
CComplex CComplex::operator^(int n)const
{
	CComplex tmp = *this;
	if (n == 0) return CComplex(1);
	else if (n>0)
	{
		while (n > 0)
		{
			tmp = (*this)*tmp;
		}
	}
	return (n > 0) ? tmp : 1 / tmp;
}