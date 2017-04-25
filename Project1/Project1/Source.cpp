#include <iostream>

using namespace std;

bool primarity_test(__int64 number) {
	for (__int64 i = 2; i < sqrt(number); i++) {
		if (number % i == 0) return false;
	}
	return true;
}

void main() {
	long long int n; cin >> n;

	for (long int i = 1; i <= n; i++) {
		if (primarity_test(i)) cout << i << endl;
	}
	system("pause");
}