#include <iostream>

using namespace std;


double area(double a_side, double b_side, double c_side) {
	double half_per = (a_side + b_side + c_side) / 2;

	return sqrt(half_per * (half_per - a_side) * (half_per - b_side) * (half_per - c_side));
}
void main() {
	double a, b, c;
	cin >> a
		>> b
		>> c;

	cout << area(a, b, c) << endl;
	system("pause");
}