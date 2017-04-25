#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

double Horners_method(vector <float> coefficients, float x_value) {
	double a = coefficients.back();
	coefficients.pop_back();

	if (coefficients.empty())
		return a;
	else
		return x_value * Horners_method(coefficients, x_value) + a;
}

void main()
{
	cout << "Enter size of polynomial: " << endl;
	short size; cin >> size;

	vector <float> polynomial;
	cout << "Enter coefficients in this format: A1 + A2x + A3x^2... AnX^n (terminated by \"s\")" << endl;
	double temp;
	for (int i = 1; i <= size; i++) {
		cout << "Enter A" << i
			 << " coefficient : ";
		cin >> temp;
		polynomial.push_back(temp);
	}
	reverse(polynomial.begin(), polynomial.end());

	
	
	cout << "Enter x " << endl;
	
	float x; cin >> x;
	if (!cin) cerr << "incorrect value";
	

	cout << Horners_method(polynomial, x) << endl;
	
	system("pause");
}