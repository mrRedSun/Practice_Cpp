#include <iostream>

using namespace std;

void from_1_to_n(int n)
{
	if (n == 1) {
		cout << "";
	}
	else
		from_1_to_n(n - 1);

	cout << n << " ";
}

void main()
{
	from_1_to_n(10);
	system("pause");
}