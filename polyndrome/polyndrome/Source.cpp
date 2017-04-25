#include <iostream>
#include <vector>

using namespace std;

void main()
{
	vector <int> digits;
	int number; cin >> number;

	while (true) {
		digits.push_back(number % 10);
		number /= 10;
		if (number == 0) break;
	}


	bool is_polyndrome = true;
	for (int i = 0; i <= size(digits) / 2; i++)
	{
		if (digits[i] != digits[size(digits) - i - 1])
		{
			is_polyndrome = false;
			break;
		}
	}

	cout << is_polyndrome << endl;
	system("pause");
}