#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int multidigit; cin >> multidigit;
	int copy = multidigit;
	for (int i = 1; pow(10, i) <= multidigit * 10; i += 2)
	{
		if (copy % (int) pow(10, i) / pow(10, i - 1) == 9) {
			multidigit -= 9 * pow(10, i - 1);
		}
		else if ((int)(copy % (int)pow(10, i) / pow(10, i - 1)) % 2 > 0) {
			multidigit += pow(10, i - 1);
		}
	}

	cout << multidigit;
	system("pause");
	return 0;
}