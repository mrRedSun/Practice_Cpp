#include <iostream>

using namespace std;

bool is_lucky(short number)
{
	int f = number % 10 / 100 + number % 100 / 1000 + number % 1000 / 10000;
	int k = number % 10000 / 100000 + number % 100000 / 1000000 + number % 100000 / 10000000;

	if (f == k) return true;
	else return false;

}
void main()
{


	int number; std::cin >> number;

	if (number / 1000 == 0) {
		std::cout << (number % 10 + (number % 100 / 10) + (number % 1000 / 100)) << std::endl;
	}
	else std::cout << "Not three or less digit \n";


	int count = 0;
	for (int i = 100000; i < 1000000; i++)
	{
		if (is_lucky(i)) count++;
	}

	cout << count << endl;
	system("pause");
}