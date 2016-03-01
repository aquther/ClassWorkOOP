#include "CNum.h"
#include <iostream>

#pragma once

	CNum::CNum(double x, double y) :x(x),y(y)
	{
	
	}
	CNum::CNum(const CNum &s) 
	{
		x = s.x;
		y = s.y;
	}
	CNum::~CNum() 
	{
		std::cout << "Complex number " << x << " + " << y << "i is destroyed.\n";
	}
	int CNum::set_x(double x) 
	{
		this->x = x;

		return 0;
	}
	int CNum::set_y(double y)
	{
		this->y = y;

		return 0;
	}
	inline double CNum::get_y()const 
	{
		return y;
	}
	CNum CNum::add(const CNum&r)const 
	{
		return CNum(x + r.x, y + r.y);
	}
	CNum CNum::sub(const CNum&r)const 
	{
		CNum tmp(x - r.x, y - r.y); //less efficient
		return tmp;
	}
	CNum CNum::mul(const CNum&r)const 
	{
		return CNum(x*r.y - r.x*y, x*r.y + r.x*y);
	}
	CNum CNum::div(const CNum&r)const 
	{
		double resx = (x*r.x + y*r.y) / (r.x*r.x + r.y*r.y);
		double resy = (y*r.y - x*r.y) / (r.x*r.x + r.y*r.y);
		
		return CNum(resx, resy);
	}

	int CNum::Print()const 
	{
		std::cout << "(" << x << "+" << y << "i)\n";

		return 0;
	}
	int CNum::Read() 
	{
		std::cout << "Enter real value for the complex number : ";
		std::cin >> x;
		std::cout << "Enter imaginary value for the complex number : ";
		std::cin >> y;
	
		return 0;
	}



