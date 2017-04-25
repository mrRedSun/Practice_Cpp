#include <iostream>

using namespace std;

double summ() {
	cout << "Enter set of numbers terminated by negative number\n>> ";
	double num; cin >> num;
	if (num < 0) {
		return 0;
	}
	else {
		return num + summ();
	}
}

void main()
{
	cout << summ();
	system("pause");
}