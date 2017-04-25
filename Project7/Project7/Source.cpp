#include <iostream>
#include <vector>


int main()
{
	std::cout << "Enter your number\n";
	int number; std::cin >> number;


	std::vector <int> digits;
	while (true)
	{
		digits.push_back(number % 10);
		number = number / 10;
		if (number == 0) break;
	}



	bool is_polyndrome = true;
	for (int i = 0; i <= size(digits)/2.0; i++)
	{
		if (digits[i] != digits[size(digits) - 1 - i]) is_polyndrome = false;
	}

	if (is_polyndrome) {
		std::cout << "True\n";
	}
	else {
		std::cout << "False\n";
	}
	system("pause");
}