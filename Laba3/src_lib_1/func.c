#include <stdio.h>
#include <f.h>
#include <math.h>

double summ(n)
{
	double a = 0;
	for (int i = 0; i <= n - 1; ++i)
	{
		a += pow(-1, i)*((1+3*i) / (pow(3, i)));
	}
	return a;
}


double summ2(double eps)
{
	double a = pow(-1, 0)*((1 + 3 * 0) / (pow(3, 0)));
	double s = a;
	for (int i = 1; fabs(a) > eps; ++i)
	{	
		a = pow(-1, i)*((1 + 3 * i) / (pow(3, i)));
		s = s + a;
	}
	return s;
}

void print(int n, int k)
{
	for (int i = 0; i < n; ++i)
	{
		int a[n];
		a = pow(-1, i)*((1 + 3 * i) / (pow(3, i)));





	}



	return a;
}