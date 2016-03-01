#include "Human.h"
#include <cstring>
#include <iostream>

Human::Human() 
{
	double wkg;
	int hcm;
	char*name = new char[2];
	name = " ";
}
Human::Human(double w, int h, char*n):wkg(w),hcm(h)
{

	name = new char[strlen(n) + 1];
	strcpy_s(name,strlen(n), n);

}
Human::~Human() 
{
	delete[]name;

}

int Human::Set_wkg(double w)
{
	wkg = w;
	return 0;
}
int Human::Set_name(char*n) 
{

	name = new char[strlen(n) + 1];
	strcpy_s(name,strlen(n), n);

	return 0;
}
int Human::Set_hcm(int h) 
{
	hcm = h;
	return 0;
}

double Human::Get_wkg()const 
{
	return wkg;
}
int Human::Get_hcm()const 
{
	return hcm;
}
char* Human::Get_name()const 
{
	return name;
}

int Human::print()const 
{
	std::cout << "Name: " << name<<"\n";
	std::cout << "Height: " << hcm << "\n";
	std::cout << "Weight: " << wkg << "\n";
	return 0;
}
int Human::read() 
{
	std::cout << "Enter height: ";
	std::cin >> hcm;

	std::cout << "Enter weight: ";
	std::cin >> wkg;
	std::cin.ignore();
	//if (name != NULL) delete[]name;
	name = new char[100];
	std::cout << "Enter a name: ";
	std::cin.getline(name, 99);
	
	return 0;
}

double Human::bmi()const 
{
	double t = 0.01*hcm;
	t = t*t;
	return wkg / t;
}

void Human::printbmi()const 
{
	double bmii = bmi();
	std::cout << std::endl;
	print();
	std::cout << "The bmi is: " << bmii << "\n";
	if (bmii < 18.5)std::cout << "This human is underweight.\n";
	if (bmii >= 18.5 && bmii < 24.9) std::cout << "This human is healthy.\n";
	if (bmii >= 24.9 && bmii < 29.9)std::cout << "This human is overweight.\n";
	if (bmii >= 29.9)std::cout << "This human is obese.\n";
}