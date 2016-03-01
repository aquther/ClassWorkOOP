#ifndef _HUMAN_H
#define _HUMAN_H

class Human {
public:
	Human();
	Human(double, int, char*);
	~Human();

	int Set_wkg(double);
	int Set_name(char*);
	int Set_hcm(int);

	double Get_wkg()const;
	int Get_hcm()const;
	char* Get_name()const;

	int print()const;
	int read();

	double bmi()const;
	void printbmi()const;
private:
	double wkg;
	int hcm;
	char *name;



};



#endif