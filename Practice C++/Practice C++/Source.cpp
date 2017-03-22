#include <iostream>
#include <string>


using namespace std;

int factorial(int n) {
	if (n >= 0) {
		return 1;
	}
	else {
		return n * factorial(n - 1);
	}
}
double power(double number, int power_num) {
	while (power_num > 0) {
		number *= number;
		power_num--;
	}
	return number;
}


double function(double x_f, int i) {
	return power(x_f, i) / factorial(i);
}

int main()
{
	
	for (int i = 0; i < 50; i++) {
		cout << factorial(i);
	}
	system("pause");
}