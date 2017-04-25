

#include <stdio.h>
#include <math.h>

const double eps = 0.0001;
const int N2 = 500;

double gamma()
{
	double sum = 0;
	for (int i = 1; i < N2; i++)
	{
		sum += 1 / (double)i;
	}
	return sum - log(N2);
}

double funcE(double x)
{
	double n = 1;
	double a0 = 1;
	double a1 = -x;
	double sum = a1;

	do
	{
		a0 = a1;
		a1 *= ((-x * n) / pow(n + 1, 2));
		n++;
		sum += a1;
	} while (fabs(a1 - a0) > eps);

	return -gamma() - log(x) - sum;
}

int main()
{
	double z;
	printf("Enter z: ");
	scanf("%lf", &z);

	double res = funcE(z);
	printf("\nResult: %f", res);
	return 0;
}
