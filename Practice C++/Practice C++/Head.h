#pragma once
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
		power_num --;
	}
	return number;
}
