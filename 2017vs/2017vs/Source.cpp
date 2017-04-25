#include "header.h"

int main(int argc, char const *argv[]) {

	int m, n;
	cout << "Enter m and n: ";
	cin >> m >> n;

	int ** mat = read_matrix(m, n);

	
	output_matrix(mat, m, n);

	if (the_primest(mat, m, n == 0 && quantity_of_prime(mat[0], n) == 0) {
		cout << "There are no prime numbers in groups\n";
	}
	else {
		output_group(mat[the_primest(mat, m, n)], n);
	}

	trash_cleaner(mat, m);

	system("pause");
	return 0;
}
