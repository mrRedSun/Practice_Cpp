#include "stdio.h"
#include "math.h"

long long factorial(long long n) {
	if (n <= 1)
		return 1;
	else
		return n * factorial(n - 1);
}

double member(double con, int var)
{
	return pow(-1, var) * pow(1.0 / 4.0 * con * con, var) / factorial(var + 1);
	
}

int main()
{
	double z, eps;
	
	scanf_s("%lf", &z);
	scanf_s("%lf", &eps);
	
	double sum = 0.0;
	for (int i = 0; fabs(member(z, i) - member(z, i + 2)) > eps; ++i) {
		sum += member(z, i);
	}
	sum *= z / 2;

	printf("%lf", sum);

	scanf_s("%lf", &z);
	return 0;
}