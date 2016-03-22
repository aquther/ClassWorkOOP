class AProg
{
public:
	AProg(double = 0., double = 0.);
	double operator[](unsigned = 0);
	double operator()(unsigned = 0);

private:
	double a;
	double d;

};