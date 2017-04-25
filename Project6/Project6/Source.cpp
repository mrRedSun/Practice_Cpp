#include <iostream>

using namespace std;


int factorial(int num)
{
	if (num <= 1) {
		return 1;
	}
	else {
		return num * factorial(num - 1);
	}
}

double power(double number, int power)
{
	double result = 1;
	for (int i = 0; i < power; i++)
	{
		result *= number;
	}
	return result;
}


double member(double x, double pow)
{
	if (pow == 0) return 1000;
	return power(x, pow) / factorial(pow);
}


double Taylor_series(double approximation, double x, int power, short is_even)
{
	if (fabs(member(x, power - 1) - member(x, power)) < approximation) {
		return member(x, power);
	}
	else {
		is_even = (is_even == 1) ? -1 : 1;	
		return member(x, power) + is_even * (Taylor_series(approximation, x, power + 2, is_even));
	}
}


void main()
{
	cout << "Enter X and eps \n";
	double x, eps; cin >> x >> eps;


	
	cout << "The result is: "<< Taylor_series(eps, x, 1, 1) << endl;
	system("pause");
}